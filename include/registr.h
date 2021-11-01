#pragma once
#include <vector>
#include <iostream>


template <typename T1, typename T2>
class Registr
{
public:
   
    struct Pair
    {
        T1 _key;
        T2 _value;
    };

private:    std::vector<Pair> _reg;

public:
    Registr(){}
    Registr(const T1& key, const T2& value)
    {
        add(key, value);
    }

    Pair add(const T1& key, const T2& value)
    {
         _reg.push_back({key, value});
         return _reg.back();
    }

    T2& operator[](const T1& key)
    {
        for(Pair &pair : _reg)
        {
            if(pair._key == key)
                return pair._value;
        }
        add(key, 0);
        return _reg.back()._value;
    }

    void print() const
    {
        for (Pair pair : _reg)
            std::cout << pair._key << " " << pair._value << std::endl;
    }
};
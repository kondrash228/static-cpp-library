#include "BigNumLib.h"

bignum::bignum(const char *other_value)
{
    _value = other_value;
    parsStringToBigNumParams();
}



bignum::bignum(std::string other_value)
{
    _value = other_value;
    parsStringToBigNumParams();
}

void bignum::parsStringToBigNumParams()
{
    if (_value[0] == '-')
    {
        _value = _value.erase(0, 1);
        _isNegative = true;
    }
    else
    {
        _isNegative = false;
    }

    if (_value.find_first_not_of("0123456789") != std::string::npos)
    {
        throw std::runtime_error(_value + " it is not a number!");
    }
    _size = _value.size();
}

std::string bignum::getValue()
{
    std::string _value = this->_value;

    if (this->_isNegative)
    {
        _value.insert(0, "-");
    }
    return _value;
}

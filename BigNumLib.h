#include <string>


class bignum {
private:
    std::string _value;
    size_t _size;
    bool _isNegative;
    void parsStringToBigNumParams();
public:
    bignum(const char* other_value);
    bignum(std::string other_value);
    std::string getValue();
};
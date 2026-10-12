// from server: 88% by king_originala
struct Value
{
    __int64 value;
};

struct S
{
    __int64 value;
    S(__int64 v);
    S(const Value& v);
    Value special(const S& other) const;
};

inline S::S(__int64 v) : value(v)
{
}

inline S::S(const Value& v) : value(v.value)
{
}

S operator+(const S& left, S right)
{
    if (left.value == (-9223372036854775807i64 - 1) ||
        left.value == 9223372036854775807i64 ||
        left.value == 9223372036854775806i64 ||
        right.value == (-9223372036854775807i64 - 1) ||
        right.value == 9223372036854775807i64 ||
        right.value == 9223372036854775806i64)
    {
        S a = left;
        S b = right;
        return S(a.special(b));
    }

    return S(left.value + right.value);
}

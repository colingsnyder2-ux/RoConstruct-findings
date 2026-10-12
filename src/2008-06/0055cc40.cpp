// from server: 83% by king_originala
struct S
{
    __int64 value;

    bool is_infinity() const;
    static bool __cdecl is_pos_inf(__int64);
    static bool __cdecl is_neg_inf(__int64);

    S operator+(const S &other) const;
};

S S::operator+(const S &other) const
{
    const __int64 neg_inf = (-9223372036854775807i64 - 1);
    const __int64 pos_inf = 9223372036854775807i64;
    const __int64 nan_value = 9223372036854775806i64;
    const __int64 left = value;
    const __int64 right = other.value;
    S result;

    if (left == neg_inf || left == pos_inf || left == nan_value ||
        right == neg_inf || right == pos_inf || right == nan_value)
    {
        if (left == nan_value || right == nan_value)
        {
            result.value = nan_value;
            return result;
        }

        if ((left == pos_inf && right == neg_inf) ||
            (left == neg_inf && right == pos_inf))
        {
            result.value = nan_value;
            return result;
        }

        if (is_infinity())
            return *this;

        if (is_pos_inf(right))
        {
            result.value = pos_inf;
            return result;
        }

        if (is_neg_inf(right))
        {
            result.value = neg_inf;
            return result;
        }
    }

    result.value = left + right;
    return result;
}

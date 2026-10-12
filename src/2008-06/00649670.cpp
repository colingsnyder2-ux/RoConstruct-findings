// from server: 56% by king_originala
extern float table_0084afbc[];
extern float factor_00819bac;
extern float factor_0084ac8c;
extern float factor_0084afd4;
extern float factor_0084b034;

template<class T>
const T& maximum(const T& a, const T& b)
{
    return a < b ? b : a;
}

template<class T>
const T& minimum(const T& a, const T& b)
{
    return b < a ? b : a;
}

float __cdecl func_00649670(float x, float y)
{
    int a = maximum(1, (int)x);
    int b = maximum(1, (int)y);
    int larger = maximum(a, b);
    int smaller = minimum(a, b);

    if (larger < 7)
        return table_0084afbc[larger] * factor_00819bac
             * smaller * factor_0084b034;

    return larger * factor_0084ac8c * factor_0084afd4
         * factor_00819bac * smaller * factor_0084b034;
}

// from server: 93% by king_originala
extern float bias;
extern float scaleSource;

inline const int& maximum(const int& a, const int& b)
{
    return a > b ? a : b;
}

inline const int& minimum(const int& a, const int& b)
{
    return a < b ? a : b;
}

unsigned char convert(float value)
{
    static float scale = scaleSource;
    float scaled = (value + bias) / scale;
    int result = (int)scaled;
    result = maximum(result, 0);
    return (unsigned char)minimum(result, 255);
}

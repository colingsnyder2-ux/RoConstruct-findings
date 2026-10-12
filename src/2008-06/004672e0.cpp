// from server: 59% by king_originala
struct Vector2
{
    float x;
    float y;
    Vector2();
};

Vector2 func_004672e0(const Vector2& v, int amount)
{
    Vector2 result = v;
    float x = v.x;
    result.x += (x > 0.0f ? 1.0f : (x < 0.0f ? -1.0f : 0.0f)) * amount;
    float y = v.y;
    result.y += (y > 0.0f ? 1.0f : (y < 0.0f ? -1.0f : 0.0f)) * amount;
    return result;
}

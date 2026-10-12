// from server: 84% by king_originala
#pragma float_control(precise, off)

struct Vec2
{
    float x, y;

    Vec2() {}
    Vec2(float a, float b) : x(a), y(b) {}
    Vec2(const Vec2& v) : x(v.x), y(v.y) {}

    Vec2 clamp(const Vec2& low, const Vec2& high) const;
};

struct Rect
{
    Vec2 low, high;

    Rect(const Vec2& a, const Vec2& b) : low(a), high(b) {}

    void translate(const Rect& offset);
};

extern float g_scale;

void __cdecl func_0046a010(const Vec2* motion, Vec2* overflow,
                          Vec2* position, const Vec2* dimensions,
                          int margin, float factor)
{
    Vec2 half(dimensions->x * g_scale, dimensions->y * g_scale);
    Vec2 negative(-half.x, -half.y);
    float inset = (float)margin;

    Rect bounds(Vec2(negative.x + inset, negative.y + inset),
                Vec2(half.x - inset, half.y - inset));

    Vec2 desired;
    {
        Vec2 original(position->x, position->y);
        bounds.translate(Rect(original, original));
        desired.x = motion->x + original.x;
        desired.y = motion->y + original.y;
    }

    Vec2 clamped = desired.clamp(bounds.low, bounds.high);
    Vec2 difference(desired.x - clamped.x, desired.y - clamped.y);
    Vec2 adjustment(difference.x * factor, difference.y * factor);
    Vec2 adjusted(clamped.x + adjustment.x, clamped.y + adjustment.y);

    position->x = adjusted.x;
    position->y = adjusted.y;
    overflow->x += difference.x;
    overflow->y += difference.y;
}

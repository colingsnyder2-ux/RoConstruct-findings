// from server: 81% by king_originala
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

    Rect() {}
    Rect(const Vec2& a, const Vec2& b) : low(a), high(b) {}

    void translate(const Rect& offset);
};

extern float g_scale;

void __cdecl func_0046a010(const Vec2* motion, Vec2* overflow,
                          Vec2* position, const Vec2* dimensions,
                          int margin, float factor)
{
    float sx = dimensions->x * g_scale;
    float sy = dimensions->y * g_scale;

    Rect bounds;
    bounds.low.x = -sx + margin;
    bounds.low.y = -sy + margin;
    bounds.high.x = sx - margin;
    bounds.high.y = sy - margin;

    Vec2 desired;
    {
        Vec2 original(position->x, position->y);
        {
            Rect offset(original, original);
            bounds.translate(offset);
        }
        desired.x = motion->x + original.x;
        desired.y = motion->y + original.y;
    }

    Vec2 clamped = desired.clamp(bounds.low, bounds.high);
    float dx = desired.x - clamped.x;
    float dy = desired.y - clamped.y;
    Vec2 adjusted(clamped.x + dx * factor, clamped.y + dy * factor);

    position->x = adjusted.x;
    position->y = adjusted.y;
    overflow->x += dx;
    overflow->y += dy;
}

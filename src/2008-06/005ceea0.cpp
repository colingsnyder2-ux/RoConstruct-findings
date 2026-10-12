// from server: 82% by king_originala
extern const float half;

struct Vec2
{
    float x, y;
};

struct S
{
    float x0, y0, x1, y1;
    Vec2 f(int horizontal, int vertical);
};

Vec2 S::f(int horizontal, int vertical)
{
    Vec2 result = { x0 + x1, y0 + y1 };
    result.x *= half;
    result.y *= half;

    switch (horizontal)
    {
    case 2:
        result.x = x0;
        break;
    case 3:
        result.x = x1;
        break;
    }

    switch (vertical)
    {
    case 0:
        result.y = y0;
        return result;
    case 1:
        result.y = y1;
        return result;
    case 4:
        return result;
    }

    return result;
}

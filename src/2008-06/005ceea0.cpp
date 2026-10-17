// from server: 89% by colin
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
    Vec2 result;
    result.x = (x1 + x0) * half;
    result.y = (y1 + y0) * half;

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

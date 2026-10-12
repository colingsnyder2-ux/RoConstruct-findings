// from server: 77% by king_originala
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
    Vec2 result = { (x1 + x0) * 0.5f, (y1 + y0) * 0.5f };

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
        break;
    case 1:
        result.y = y1;
        break;
    case 4:
        break;
    }

    return result;
}

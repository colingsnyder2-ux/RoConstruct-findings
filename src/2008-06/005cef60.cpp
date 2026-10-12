// from server: 89% by king_originala
struct Rect {
    float left, top, right, bottom;
};

struct S {
    float left, top, right, bottom;
    Rect f(const Rect &rect, int horizontal, int vertical);
};

Rect S::f(const Rect &rect, int horizontal, int vertical)
{
    double x = 0.0;
    double y = 0.0;
    double width = rect.right - rect.left;
    double height = rect.bottom - rect.top;

    switch (horizontal) {
    case 2:
        x = left;
        break;
    case 3:
        x = right - width;
        break;
    case 4:
        x = (right - width) * 0.5f;
        break;
    }

    switch (vertical) {
    case 0:
        y = top;
        break;
    case 1:
        y = bottom - height;
        break;
    case 4:
        y = (bottom - height) * 0.5f;
        break;
    }

    double endX = x + width;
    double endY = y + height;

    Rect result;
    result.left = (float)x;
    result.top = (float)y;
    result.right = (float)endX;
    result.bottom = (float)endY;
    return result;
}

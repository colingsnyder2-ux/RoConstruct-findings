// from server: 85% by king_originala
struct Point {
    float x, y;
};

struct Bounds {
    float minX, minY, maxX, maxY;
};

Bounds bounds(const Point& a, const Point& b)
{
    Bounds result = { 0.0f, 0.0f, 0.0f, 0.0f };

    const float& minY = (double)b.y < (double)a.y ? b.y : a.y;
    double lowY = minY;
    const float& minX = (double)b.x < (double)a.x ? b.x : a.x;
    result.minX = minX;
    result.minY = (float)lowY;

    const float& maxY = (double)a.y < (double)b.y ? b.y : a.y;
    double highY = maxY;
    const float& maxX = (double)a.x < (double)b.x ? b.x : a.x;
    result.maxX = maxX;
    result.maxY = (float)highY;

    return result;
}

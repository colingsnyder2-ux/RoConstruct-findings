// from server: 79% by king_originala
struct Point {
    float x, y;
};

struct Bounds {
    float minX, minY, maxX, maxY;
};

Bounds bounds(const Point& a, const Point& b)
{
    Bounds result = { 0.0f, 0.0f, 0.0f, 0.0f };

    const float& minY = a.y < b.y ? a.y : b.y;
    float lowY = minY;
    const float& minX = a.x < b.x ? a.x : b.x;
    result.minX = minX;
    result.minY = lowY;

    const float& maxY = a.y > b.y ? a.y : b.y;
    float highY = maxY;
    const float& maxX = a.x > b.x ? a.x : b.x;
    result.maxX = maxX;
    result.maxY = highY;

    return result;
}

// from server: 75% by king_originala
struct S {
    float x0, y0, z0;
    float x1, y1, z1;

    bool intersects(const S* other);
    bool separated(const S* other, float margin);
};

bool S::separated(const S* other, float margin)
{
    S expanded = {
        x0 - margin,
        y0 - margin,
        z0 - margin,
        x1 + margin,
        y1 + margin,
        z1 + margin
    };
    return !expanded.intersects(other);
}

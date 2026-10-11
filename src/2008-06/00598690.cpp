// from server: 53% by atomic.potato
struct Decal
{
    float padding[89];
    float value;
    float f(float);
};

float Decal::f(float x)
{
    if (x >= value)
        return value;

    value = x;
    return 0.0f;
}

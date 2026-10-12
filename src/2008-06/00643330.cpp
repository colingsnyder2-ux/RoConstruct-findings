// from server: 67% by king_originala
extern float multiplier;

struct S
{
    char padding[0x38];
    float value;
    float scale;
    int f();
};

int S::f()
{
    if (value < multiplier * scale || value > scale + scale)
        return 1;
    return 0;
}

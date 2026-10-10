// from server: 70% by atomic.potato
struct S
{
    int f(float *);
    float value[0x1b1 / sizeof(float)];
};

extern "C" void __stdcall sub_0040db00();

int S::f(float *value)
{
    if (*value == this->value[0x1b0 / sizeof(float)])
        return 0;

    this->value[0x1b0 / sizeof(float)] = *value;
    sub_0040db00();
    return 0;
}

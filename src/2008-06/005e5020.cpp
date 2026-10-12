// from server: 78% by king_originala
extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

extern const float toleranceBase;
extern const float toleranceScale;
extern char descriptor;

struct Target {
    char padding[0x94];
    float value;
};

struct S {
    char padding[0x150];
    Target* target;

    void notify(const void* descriptor);
    void f(float value);
};

void S::f(float value)
{
    if (value != target->value &&
        fabs(value - target->value) >
            (fabs(value) + toleranceBase) * toleranceScale) {
        target->value = value;
        notify(&descriptor);
    }
}

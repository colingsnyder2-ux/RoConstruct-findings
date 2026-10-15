// from server: 87% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
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

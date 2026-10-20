// from server: 89% by colin
// from server: 86% by colin
extern char sourceType;
extern char targetType;

struct S {
    char padding0[0x104];
    void* parent;
    char padding1[0x48];
    int value;

    int f();
};

extern "C" S* __cdecl runtimeCast(void*, int, void*, void*, int);

int S::f()
{
    if (value)
        return 0;

    S* cast = runtimeCast(parent, 0, &sourceType, &targetType, 0);
    if (cast) {
        void* p = parent;
        if (runtimeCast(p, 0, &sourceType, &targetType, 0)->f())
            return 1;
    }

    return 0;
}

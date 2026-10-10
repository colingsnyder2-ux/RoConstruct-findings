// from server: 78% by atomic.potato
extern "C" int __cdecl func_006a17f0(double);

struct S
{
    int f();
    char pad[16];
    int value;
};

int S::f()
{
    int* p = *(int**)((char*)this + 16);
    int n = p[1] * 6 + p[10] + 4;
    return func_006a17f0((double)n) + 1;
}

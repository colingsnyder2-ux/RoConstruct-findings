// from server: 40% by Intel
extern "C" void __stdcall sub_85d020(int, int, int, int, int);

struct S {
    int f();
};

int S::f()
{
    int a = *(int*)((int)this + 0x10);
    int b = *(int*)((int)this + 0xc);
    int c = *(int*)((int)this + 0x14);
    sub_85d020(a, b, b, a, c);
    return 0;
}

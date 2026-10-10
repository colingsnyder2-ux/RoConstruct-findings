// from server: 70% by atomic.potato
extern "C" void __stdcall Function0098DE94(int, int, int);

struct S {
    int f(int);
};

int S::f(int a)
{
    Function0098DE94(0, (int)this + 196, a);
    return a;
}

// from server: 88% by atomic.potato
struct S
{
    int pad0[94];
    int value;
    int pad1[33];
    int pointer;
    void f();
};

extern "C" void __stdcall sub_998260(int, int, int);

void S::f()
{
    if (pointer != 0 && *(int *)(pointer + 124) == (int)((char *)this + 376))
    {
        *(int *)(pointer + 124) = 0;
        sub_998260(pointer + 104, 0, -1);
    }
}

// from server: 82% by atomic.potato
extern "C" void __stdcall ContactStage(void *, int, int);

struct S_func_007258a0 {
    void f();
};

void S_func_007258a0::f()
{
    void *p = *(void **)this;
    *(int *)((char *)p + 0x24) = 0;

    p = *(void **)this;
    int v = *(int *)((char *)p + 0x14);
    *(int *)((char *)p + 0x1c) = v;
    *(int *)((char *)p + 0x20) = v;

    ContactStage(*(void **)this, 1, 1);
}

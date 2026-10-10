// from server: 47% by atomic.potato
struct S
{
    int f();
};

extern void G1_func_005cc040(int);

int S::f()
{
    struct V
    {
        int a;
        int b;
    };

    V* p = *(V**)((char*)this + 0xc);
    int (*q)(V*) = *(int (**)(V*))((char*)p + 0x288 + 4);
    int r = q((V*)((char*)p + 0x288));
    G1_func_005cc040(r);
    return 0;
}

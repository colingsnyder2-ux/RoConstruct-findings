// from server: 77% by atomic.potato
struct S {
    struct V {
        int (*f)();
    };

    void *p;

    int f();
};

int S::f()
{
    V *v = *(V **)((char *)this + 0x90);
    return ((int (__thiscall *)(V *))(*(int **)v + 0x178))(v);
}

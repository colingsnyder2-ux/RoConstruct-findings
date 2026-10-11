// from server: 92% by tester
struct S
{
    bool f();
};

bool S::f()
{
    struct V
    {
        int pad[162];
        int (__thiscall *g)(V*);
    };

    V* p = *(V**)((char*)this + 12);
    int (__thiscall *q)(V*) = *(int (__thiscall **)(V*))((char*)p + 648);
    int x = q((V*)((char*)p + 648));
    return *(int*)((char*)x + 468) == 4;
}

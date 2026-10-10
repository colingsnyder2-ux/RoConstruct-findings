// from server: 75% by atomic.potato
struct CScriptDoc
{
    int f();
};

int CScriptDoc::f()
{
    struct VTable
    {
        int (*f)();
        char padding[0xa0];
        int (*g)();
    };

    VTable* p = *(VTable**)((char*)this + 0x54);
    return p->g();
}

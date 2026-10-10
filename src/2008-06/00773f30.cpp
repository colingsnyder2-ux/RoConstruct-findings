// from server: 70% by atomic.potato
struct CXTPPropertyGridInplaceEdit
{
    char pad0[0x9c];
    int unused9c;
    void* unuseda0;
    int f();
};

typedef int (__thiscall *FnCheck)(void*);
typedef int (__thiscall *FnUpdate)(CXTPPropertyGridInplaceEdit*, int, int);
typedef void (__thiscall *FnClose)(void*);

int CXTPPropertyGridInplaceEdit::f()
{
    if (unused9c != 0 && unuseda0 != 0)
    {
        void** vtable = *(void***)unuseda0;
        if (((FnCheck)vtable[0x58 / 4])(unuseda0) == 0)
        {
            void** selfVtable = *(void***)this;
            if (((FnUpdate)selfVtable[0x170 / 4])(this, 1, 1) != 0)
            {
                ((FnClose)0x006a0a28)((void*)unused9c);
                return 0;
            }
        }
    }

    ((FnClose)0x006a0c68)((void*)this);
    return 0;
}

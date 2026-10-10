// from server: 91% by colin
struct CXTPToolBar
{
    void* field_0;
    void* field_4;
    void func_00651870();

    void func_006519d0(void* p1, void* p2, void* p3, void* p4, void* p5);
};

extern "C" void* __stdcall func_0062ff02(void*, void*, void*, void*, void*, void*);

void CXTPToolBar::func_006519d0(void* p1, void* p2, void* p3, void* p4, void* p5)
{
    void* v = p1;
    if (v != 0)
        v = *(void**)((char*)v + 4);

    void* a = *(void**)((char*)this + 4);

    void* r = func_0062ff02(a, v, p2, p3, p4, p5);

    void* c = *(void**)((char*)r + 0x94);
    c = *(void**)c;
    ((CXTPToolBar*)c)->func_00651870();
}

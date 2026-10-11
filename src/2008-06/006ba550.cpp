// from server: 35% by atomic.potato
struct CXTPPropertyGridItemConstraint {
    char pad[0x9c];
    void* m_pConstraint;
    int InvokeHelper(void* p1, void* p2, void* p3);
};

extern "C" void* __stdcall sub_6A0926(void* p);
extern "C" void* __stdcall sub_6A0E36(void* p);
extern "C" void __stdcall sub_6A0944();
extern "C" void __stdcall sub_6BA61D();
extern "C" void __stdcall sub_6BA510();

int CXTPPropertyGridItemConstraint::InvokeHelper(void* p1, void* p2, void* p3)
{
    void* v = 0;
    void* r = sub_6A0926(&v);
    void* h = sub_6A0E36(*(void**)((char*)r + 0x9c));
    if (h == 0)
        return 0;
    void* local;
    sub_6BA510();
    void* fn = m_pConstraint;
    if (fn == 0)
        sub_6A0944();
    int result = ((int (__stdcall*)(void*, void*, void*))fn)(p1, p2, p3);
    sub_6BA61D();
    return result;
}

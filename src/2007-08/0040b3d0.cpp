// from server: 36% by colin
struct CBrowserView {
    char pad[0x2b0];
    void* m_pUnk2b0;
    char pad2[4];
    void* m_pUnk2b8;
    void* func_0040b3d0(void* p1, void* p2);
};

extern "C" void* __cdecl sub_62fef6(unsigned int size);
extern "C" void* __cdecl sub_63021a(void* p);
extern "C" void* __cdecl sub_630214(void* p, int a, int b, int c);
extern "C" void* __cdecl sub_651bb0(void* p, void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h, void* i, void* j);
extern "C" void* __cdecl sub_630d36(void* p);
extern "C" void* __cdecl sub_62ff56(void* p, void* a, void* b, void* c, void* d, void* e, void* f);
extern "C" void* __cdecl sub_63020e(void* p, void* a);
extern "C" void* __cdecl sub_63002e(void* p, void* a, int b, int c, int d, int e, int f);
extern "C" void* __cdecl sub_630208(void* p, void* a, int b);

extern "C" void* __stdcall sub_77dd98(void* p);
extern "C" void* __stdcall sub_77dd6c(void* p, void* a);
extern "C" void* __stdcall sub_77ddbc(void* p);

void* CBrowserView::func_0040b3d0(void* p1, void* p2)
{
    void* v = sub_62fef6(0xd4);
    void* edi = 0;
    if (v != 0)
        edi = sub_63021a(v);

    void* ecx = p1;
    void* eax = *(void**)edi;
    void* fn = *(void**)((char*)eax + 0x13c);
    void* local[4];
    local[0] = 0;
    local[1] = 0;
    local[2] = 0;
    local[3] = 0;
    ((void* (__thiscall*)(void*, void*, void*, void*, void*, void*, void*, void*, void*))fn)(edi, 0, 0, (void*)0xcf0000, local, ecx, 0, 0, 0);
    sub_630214(edi, 0x200, 0x80, 0);
    void* h = sub_651bb0(edi, (void*)0x785530, 0, 0, (void*)0x50800000, 0, (void*)0xe900, 0, (void*)0x88007c, (void*)0x881a80, 0);
    void* esi = sub_630d36(h);

    if (*(void**)((char*)esi + 0x2b0) != p2)
    {
        if (p2 != 0)
        {
            void* vt = *(void**)p2;
            void* f = *(void**)((char*)vt + 4);
            ((void (__thiscall*)(void*, void*))f)(p2, p2);
        }
        void* old = *(void**)((char*)esi + 0x2b0);
        if (old != 0)
        {
            void* vt = *(void**)old;
            void* f = *(void**)((char*)vt + 8);
            ((void (__thiscall*)(void*, void*))f)(old, old);
        }
        *(void**)((char*)esi + 0x2b0) = p2;
    }

    void* h2 = sub_77dd98(local);
    sub_77dd6c((char*)esi + 0x2b8, h2);
    sub_62ff56(esi, h2, 0, 0, 0, 0, 0);
    sub_63020e(p1, local);
    int x1 = (int)local[1];
    int y1 = (int)local[2];
    int x2 = (int)local[3];
    int y2 = (int)local[4];
    sub_63002e(edi, 0, x1, y1, x2 - x1, y2 - y1, 4);
    sub_630208(edi, 0, 1);
    sub_77ddbc(local);
    return esi;
}

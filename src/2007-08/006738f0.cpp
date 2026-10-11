// from server: 91% by atomic.potato
struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* m_pSomething;
    void f(void* p);
};

extern "C" int __stdcall sub_673870(void*);
extern "C" int __fastcall sub_639d80(void*);

void CXTPCustomizeSheet::f(void* p)
{
    void* v = *(void**)((char*)m_pSomething + 0x58);
    if (sub_673870(v))
    {
        void** vtbl = *(void***)p;
        ((void (__thiscall*)(void*, int))vtbl[0])(p, 1);
        if (sub_639d80(v) == 0 || sub_639d80(v) == 2)
        {
            void** vtbl2 = *(void***)p;
            ((void (__thiscall*)(void*, int))vtbl2[1])(p, 1);
        }
        else
        {
            void** vtbl2 = *(void***)p;
            ((void (__thiscall*)(void*, int))vtbl2[1])(p, 0);
        }
    }
    else
    {
        void** vtbl = *(void***)p;
        ((void (__thiscall*)(void*, int))vtbl[1])(p, 1);
        void** vtbl2 = *(void***)p;
        ((void (__thiscall*)(void*, int))vtbl2[0])(p, 0);
    }
}

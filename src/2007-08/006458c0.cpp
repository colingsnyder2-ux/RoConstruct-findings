// from server: 80% by colin
struct CXTPCommandBar
{
    void Destructor();
};

extern "C" void __stdcall sub_6A3040(void*);
extern "C" void __stdcall sub_6A3450(void*);
extern "C" void* __stdcall sub_73836A(void*);
extern "C" void __stdcall sub_67A660(void*);
extern "C" void __cdecl sub_62FF20();

void CXTPCommandBar::Destructor()
{
    if (*(int*)((char*)this + 0xdc) != 0)
    {
        void** vtbl = *(void***)this;
        void (__stdcall *fn)(int, int, int) = (void (__stdcall *)(int, int, int))vtbl[0x140 / 4];
        fn(0, 1, 0);
    }

    sub_6A3040((char*)this + 0x54);
    sub_6A3450((char*)this + 0x54);

    void* p = sub_73836A((void*)0x8c9314);
    if (p == 0)
    {
        sub_62FF20();
    }
    else
    {
        if (*(void**)((char*)p + 0x20) == this)
        {
            *(void**)((char*)p + 0x20) = 0;
        }
    }

    void* q = *(void**)((char*)this + 0xf8);
    if (q != 0)
    {
        sub_67A660(q);
    }

    void** vtbl2 = *(void***)this;
    void (__stdcall *fn2)() = (void (__stdcall *)())vtbl2[0x68 / 4];
    fn2();
}

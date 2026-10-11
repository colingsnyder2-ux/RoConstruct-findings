// from server: 45% by colin
struct CXTPPrintPageHeaderFooter
{
    void __cdecl Func(void* p);
};

extern "C" void __stdcall sub_6A0C7A(void* p1, void* p2);
extern "C" void* __stdcall sub_6A0974();
extern "C" void* __stdcall sub_7BC544();

extern "C" void* __stdcall sub_803F04();
extern "C" char __stdcall sub_802FD8();
extern "C" void __stdcall sub_803ED4(void* p);
extern "C" void __stdcall sub_803F14();

void CXTPPrintPageHeaderFooter::Func(void* p)
{
    void* local = 0;
    sub_803F04();
    if (p != 0)
    {
        sub_6A0C7A(p, &local);
        if (sub_802FD8() == 0)
        {
            void** vtbl = *(void***)p;
            int (__stdcall* fn)(void*) = (int (__stdcall*)(void*))vtbl[0x130 / 4];
            if (fn(p) != 0)
                goto done;
        }
        if (sub_6A0974() != 0)
        {
            void* r = sub_6A0974();
            sub_6A0C7A(r, &local);
        }
        if (sub_802FD8() != 0)
        {
            if (sub_7BC544() != 0)
            {
                void* r = sub_7BC544();
                sub_6A0C7A(r, &local);
            }
        }
    }
done:
    sub_803ED4(&local);
    sub_803F14();
}

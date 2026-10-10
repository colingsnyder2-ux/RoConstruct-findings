// from server: 61% by colin
// roc 2007-08 00682270  unit: CXTPCompatibleDC  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682270

extern "C" int __stdcall IsRectEmpty(const void*);

struct CXTPCompatibleDC
{
    int sub_6308B0(void*, void*);
    int sub_680CE0(void*, void*, void*, void*, void*);
    int sub_680E40(void*, void*, void*, void*, void*);

    int sub_682270(void* a1, void* a2, void* a3, void* a4, void* a5);
};

extern "C" int __cdecl sub_67F860(int);
extern "C" int __cdecl sub_680FD0(void*);
extern "C" void* __cdecl sub_671140();
extern "C" char __cdecl sub_671190(void*);

int CXTPCompatibleDC::sub_682270(void* a1, void* a2, void* a3, void* a4, void* a5)
{
    if (a1 == 0)
        return 0;
    if (IsRectEmpty(a1) != 0)
        return 0;

    void* esi = a2;
    int eax;
    if (esi != 0)
        eax = *(int*)((char*)esi + 4);
    else
        eax = 0;

    if (sub_67F860(eax) != 0)
    {
        sub_6308B0(a1, a5);
        return 0;
    }

    void* ebp = a4;
    void* edi = a3;
    if (edi == ebp)
    {
        sub_6308B0(a1, edi);
        return 0;
    }

    if (*(int*)((char*)a1 + 8) != 0)
    {
        if (sub_680FD0(esi) != 0)
        {
            void* p = sub_671140();
            if (sub_671190(p) != 0)
                goto label_231d;
        }
        sub_680E40(a1, esi, edi, ebp, a5);
        return 0;
    }

label_231d:
    sub_680CE0(a1, esi, edi, ebp, a5);
    return 0;
}

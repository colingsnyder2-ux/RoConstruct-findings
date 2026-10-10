// from server: 64% by tester
struct CXTPCustomizeSheet {
    char pad[0x20];
    void* m_pWnd;
    char pad2[0x94];
    void* m_pSomething;
    void Func(int, int);
};

struct Helper {
    void Method(int);
};

extern "C" void* __stdcall sub_62FF02();
extern "C" int __stdcall IsWindow(void*);
extern "C" int __stdcall IsWindowEnabled(void*);
extern "C" int __stdcall MessageBoxA(void*, const char*, const char*, unsigned int);
extern "C" void __stdcall EnableWindow(void*, int);

void CXTPCustomizeSheet::Func(int a, int b)
{
    ((Helper*)*(void**)((char*)sub_62FF02() + 4))->Method(0);

    void* p = *(void**)((char*)m_pSomething + 0xa0);
    void* ebx = *(void**)((char*)this + 0x20);
    void* edi;
    if (p)
        edi = *(void**)((char*)p + 0x20);
    else
        edi = 0;

    EnableWindow(ebx, 0);

    int esi = 0;
    if (edi)
    {
        if (IsWindow(edi))
        {
            EnableWindow(edi, esi);
            esi = 1;
        }
    }

    void* eax = *(void**)((char*)sub_62FF02() + 4);
    void* ecx = *(void**)((char*)eax + 0x50);
    int r = MessageBoxA(ebx, (const char*)ecx, (const char*)a, b);

    if (esi)
        EnableWindow(edi, 1);

    if (IsWindowEnabled(ebx))
        EnableWindow(ebx, 1);

    ((Helper*)*(void**)((char*)sub_62FF02() + 4))->Method(1);
}

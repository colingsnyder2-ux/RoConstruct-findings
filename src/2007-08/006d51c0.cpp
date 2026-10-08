// from server: 46% by colin
// roc 2007-08 006d51c0  unit: CXTPReportRow_Batch  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d51c0
//
// 006d51c0  8b01                 mov eax, dword ptr [ecx]
// 006d51c2  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 006d51c8  83ec10               sub esp, 0x10
// 006d51cb  56                   push esi
// 006d51cc  8b742420             mov esi, dword ptr [esp + 0x20]
// 006d51d0  57                   push edi
// 006d51d1  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006d51d5  6a00                 push 0
// 006d51d7  8d54240c             lea edx, [esp + 0xc]
// 006d51db  52                   push edx
// 006d51dc  56                   push esi
// 006d51dd  57                   push edi
// 006d51de  ffd0                 call eax
// 006d51e0  85c0                 test eax, eax
// 006d51e2  7410                 je 0x6d51f4
// 006d51e4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d51e8  8b10                 mov edx, dword ptr [eax]
// 006d51ea  8b5268               mov edx, dword ptr [edx + 0x68]
// 006d51ed  56                   push esi
// 006d51ee  57                   push edi
// 006d51ef  51                   push ecx
// 006d51f0  8bc8                 mov ecx, eax
// 006d51f2  ffd2                 call edx
// 006d51f4  5f                   pop edi
// 006d51f5  5e                   pop esi
// 006d51f6  83c410               add esp, 0x10
// 006d51f9  c20c00               ret 0xc

struct CXTPReportRow_Batch
{
    void* GetSomething(int a, int b, int c, int d);
    void* DoSomething(int a, int b, int c);
};

void* CXTPReportRow_Batch::GetSomething(int a, int b, int c, int d)
{
    void** vtbl = *(void***)this;
    void* (__thiscall *fn)(void*, int, int, int, int) = (void* (__thiscall *)(void*, int, int, int, int))vtbl[0x8c / 4];
    void* result = fn(this, a, b, c, d);
    if (result != 0)
    {
        void** rvtbl = *(void***)result;
        void* (__thiscall *fn2)(void*, int, int, int) = (void* (__thiscall *)(void*, int, int, int))rvtbl[0x68 / 4];
        fn2(result, a, b, c);
    }
    return result;
}

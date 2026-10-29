// roc 2009-12 00426900  unit: RBX::Security::VContext::?$thread_specific_ptr::delete_data  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00426900
//
// 00426900  56                   push esi
// 00426901  8b742408             mov esi, dword ptr [esp + 8]
// 00426905  8b06                 mov eax, dword ptr [esi]
// 00426907  8b10                 mov edx, dword ptr [eax]
// 00426909  6a00                 push 0
// 0042690b  8bce                 mov ecx, esi
// 0042690d  ffd2                 call edx
// 0042690f  56                   push esi
// 00426910  6a00                 push 0
// 00426912  ff152cb29800         call dword ptr [0x98b22c]
// 00426918  50                   push eax
// 00426919  ff150cb39800         call dword ptr [0x98b30c]
// 0042691f  5e                   pop esi
// 00426920  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000005@@QAGXXZ)

namespace ns_ROCX000005 {
// from server: 100% by tester
typedef unsigned long DWORD;
typedef int BOOL;

extern "C" DWORD __declspec(dllimport) __stdcall GetProcessHeap();
extern "C" BOOL __declspec(dllimport) __stdcall HeapFree(DWORD, DWORD, void*);

struct S
{
    void __stdcall f();
};

void __stdcall S::f()
{
    void* p = *(void**)this;
    void (__thiscall *d)(void*, int) = *(void (__thiscall **)(void*, int))p;
    d(this, 0);
    HeapFree(GetProcessHeap(), 0, this);
}
}

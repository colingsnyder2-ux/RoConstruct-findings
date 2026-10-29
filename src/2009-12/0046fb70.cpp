// roc 2009-12 0046fb70  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046fb70
//
// 0046fb70  56                   push esi
// 0046fb71  8bf1                 mov esi, ecx
// 0046fb73  6a01                 push 1
// 0046fb75  8d86ac010000         lea eax, [esi + 0x1ac]
// 0046fb7b  50                   push eax
// 0046fb7c  ff1510b39800         call dword ptr [0x98b310]
// 0046fb82  85c0                 test eax, eax
// 0046fb84  7511                 jne 0x46fb97
// 0046fb86  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0046fb89  50                   push eax
// 0046fb8a  50                   push eax
// 0046fb8b  6869040000           push 0x469
// 0046fb90  51                   push ecx
// 0046fb91  ff15b8cb9800         call dword ptr [0x98cbb8]
// 0046fb97  5e                   pop esi
// 0046fb98  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX00000d@@QAEXXZ)

namespace ns_ROCX00000d {
// from server: 100% by tester
extern "C" long __declspec(dllimport) __stdcall InterlockedExchange(long*, long);
extern "C" int __declspec(dllimport) __stdcall PostMessageA(void*, unsigned int, unsigned int, long);

struct S
{
    void f();
};

void S::f()
{
    long result = InterlockedExchange((long*)((char*)this + 0x1ac), 1);
    if (!result)
    {
        PostMessageA(*(void**)((char*)this + 0x20), 0x469, 0, 0);
    }
}
}

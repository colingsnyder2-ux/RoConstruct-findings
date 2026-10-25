// from server: 100% by colin
// roc 2008-06 004328c0  unit: RBX::VHat::?$FactoryProduct::Creator  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004328c0
//
// 004328c0  55                   push ebp
// 004328c1  8bec                 mov ebp, esp
// 004328c3  6aff                 push -1
// 004328c5  68b8608d00           push 0x8d60b8
// 004328ca  6812156a00           push 0x6a1512
// 004328cf  64a100000000         mov eax, dword ptr fs:[0]
// 004328d5  50                   push eax
// 004328d6  64892500000000       mov dword ptr fs:[0], esp
// 004328dd  83ec08               sub esp, 8
// 004328e0  53                   push ebx
// 004328e1  56                   push esi
// 004328e2  57                   push edi
// 004328e3  8965e8               mov dword ptr [ebp - 0x18], esp
// 004328e6  8bf1                 mov esi, ecx
// 004328e8  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004328ef  56                   push esi
// 004328f0  ff15e0228000         call dword ptr [0x8022e0]
// 004328f6  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004328fd  8bc6                 mov eax, esi
// 004328ff  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00432902  64890d00000000       mov dword ptr fs:[0], ecx
// 00432909  5f                   pop edi
// 0043290a  5e                   pop esi
// 0043290b  5b                   pop ebx
// 0043290c  8be5                 mov esp, ebp
// 0043290e  5d                   pop ebp
// 0043290f  c3                   ret 
// 00432910  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00432913  8b08                 mov ecx, dword ptr [eax]
// 00432915  8b01                 mov eax, dword ptr [ecx]
// 00432917  33d2                 xor edx, edx
// 00432919  3d170000c0           cmp eax, 0xc0000017
// 0043291e  0f94c2               sete dl
// 00432921  8bc2                 mov eax, edx
// 00432923  c3                   ret 
// 00432924  8b65e8               mov esp, dword ptr [ebp - 0x18]
// 00432927  680e000780           push 0x8007000e
// 0043292c  e8cfe6fcff           call 0x401000

// from server: 89% by coldek
// from server: 82% by Espeon
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// Exact construct: ATL CComCriticalSection::Init pattern (__try body, __except on 0xC0000017 -> raiseError(0x8007000e)).
// The __try/__finally {} variant compiled a bogus call 0x58 funclets and no filter body (77%).
#include <excpt.h>
extern "C" __declspec(dllimport) void __stdcall InitializeCriticalSection(void*);
__declspec(noreturn) void raiseError(long);
struct S {S();};
S::S()
{
    __try
    {
        InitializeCriticalSection(this);
    }
    __except (GetExceptionCode() == 0xC0000017)
    {
        raiseError(0x8007000e);
    }
}

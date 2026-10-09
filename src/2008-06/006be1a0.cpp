// roc 2008-06 006be1a0  unit: CXTPImageManagerIconSet  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006be1a0
//
// 006be1a0  837c241000           cmp dword ptr [esp + 0x10], 0
// 006be1a5  56                   push esi
// 006be1a6  8b742408             mov esi, dword ptr [esp + 8]
// 006be1aa  57                   push edi
// 006be1ab  8bf9                 mov edi, ecx
// 006be1ad  7426                 je 0x6be1d5
// 006be1af  6a0e                 push 0xe
// 006be1b1  56                   push esi
// 006be1b2  e8752dfeff           call 0x6a0f2c
// 006be1b7  85c0                 test eax, eax
// 006be1b9  741a                 je 0x6be1d5
// 006be1bb  6a01                 push 1
// 006be1bd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006be1c1  8b542414             mov edx, dword ptr [esp + 0x14]
// 006be1c5  51                   push ecx
// 006be1c6  52                   push edx
// 006be1c7  56                   push esi
// 006be1c8  50                   push eax
// 006be1c9  8bcf                 mov ecx, edi
// 006be1cb  e8f0f5ffff           call 0x6bd7c0
// 006be1d0  5f                   pop edi
// 006be1d1  5e                   pop esi
// 006be1d2  c21000               ret 0x10
// 006be1d5  6a03                 push 3
// 006be1d7  56                   push esi
// 006be1d8  e84f2dfeff           call 0x6a0f2c
// 006be1dd  85c0                 test eax, eax
// 006be1df  7404                 je 0x6be1e5
// 006be1e1  6a00                 push 0
// 006be1e3  ebd8                 jmp 0x6be1bd
// 006be1e5  5f                   pop edi
// 006be1e6  33c0                 xor eax, eax
// 006be1e8  5e                   pop esi
// 006be1e9  c21000               ret 0x10
// copied from an identical function in another client (function ?func@CXTPImageManagerIcon@ns_ROCX000029@ns_ROCX000037@@QAEHHHHH@Z)

namespace ns_ROCX000029 {
struct S_func_00625200 {
    char pad0[8];
    int m_x;
    int* f();
};
int* S_func_00625200::f()
{
    return &m_x;
}
}

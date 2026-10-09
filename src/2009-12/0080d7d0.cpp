// roc 2009-12 0080d7d0  unit: CXTPImageManagerIconSet  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080d7d0
//
// 0080d7d0  837c241000           cmp dword ptr [esp + 0x10], 0
// 0080d7d5  56                   push esi
// 0080d7d6  8b742408             mov esi, dword ptr [esp + 8]
// 0080d7da  57                   push edi
// 0080d7db  8bf9                 mov edi, ecx
// 0080d7dd  7426                 je 0x80d805
// 0080d7df  6a0e                 push 0xe
// 0080d7e1  56                   push esi
// 0080d7e2  e8f769feff           call 0x7f41de
// 0080d7e7  85c0                 test eax, eax
// 0080d7e9  741a                 je 0x80d805
// 0080d7eb  6a01                 push 1
// 0080d7ed  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080d7f1  8b542414             mov edx, dword ptr [esp + 0x14]
// 0080d7f5  51                   push ecx
// 0080d7f6  52                   push edx
// 0080d7f7  56                   push esi
// 0080d7f8  50                   push eax
// 0080d7f9  8bcf                 mov ecx, edi
// 0080d7fb  e8f0f5ffff           call 0x80cdf0
// 0080d800  5f                   pop edi
// 0080d801  5e                   pop esi
// 0080d802  c21000               ret 0x10
// 0080d805  6a03                 push 3
// 0080d807  56                   push esi
// 0080d808  e8d169feff           call 0x7f41de
// 0080d80d  85c0                 test eax, eax
// 0080d80f  7404                 je 0x80d815
// 0080d811  6a00                 push 0
// 0080d813  ebd8                 jmp 0x80d7ed
// 0080d815  5f                   pop edi
// 0080d816  33c0                 xor eax, eax
// 0080d818  5e                   pop esi
// 0080d819  c21000               ret 0x10
// copied from an identical function in another client (function ?func@CXTPImageManagerIcon@ns_ROCX000025@ns_ROCX000016@@QAEHHHHH@Z)

namespace ns_ROCX000025 {
extern void G1_func_0073f140();
void fn_ROCX000025()
{
    G1_func_0073f140();
}
}

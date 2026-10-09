// roc 2010-06 007c3c20  unit: CXTPImageManagerIcon  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c3c20
//
// 007c3c20  56                   push esi
// 007c3c21  57                   push edi
// 007c3c22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007c3c26  57                   push edi
// 007c3c27  8bf1                 mov esi, ecx
// 007c3c29  e8e2d8ffff           call 0x7c1510
// 007c3c2e  85c0                 test eax, eax
// 007c3c30  7413                 je 0x7c3c45
// 007c3c32  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007c3c36  6a01                 push 1
// 007c3c38  51                   push ecx
// 007c3c39  8bc8                 mov ecx, eax
// 007c3c3b  e8e0d7ffff           call 0x7c1420
// 007c3c40  5f                   pop edi
// 007c3c41  5e                   pop esi
// 007c3c42  c20800               ret 8
// 007c3c45  57                   push edi
// 007c3c46  8bce                 mov ecx, esi
// 007c3c48  e863cdffff           call 0x7c09b0
// 007c3c4d  85c0                 test eax, eax
// 007c3c4f  740d                 je 0x7c3c5e
// 007c3c51  57                   push edi
// 007c3c52  8bc8                 mov ecx, eax
// 007c3c54  e887deffff           call 0x7c1ae0
// 007c3c59  5f                   pop edi
// 007c3c5a  5e                   pop esi
// 007c3c5b  c20800               ret 8
// 007c3c5e  5f                   pop edi
// 007c3c5f  33c0                 xor eax, eax
// 007c3c61  5e                   pop esi
// 007c3c62  c20800               ret 8
// copied from an identical function in another client (function ?setImage@CXTPImageManager@ns_ROCX000033@ns_ROCX00005e@@QAEPAXHH@Z)

namespace ns_ROCX000033 {
extern void G1_func_00722ba0();
void fn_ROCX000033()
{
    G1_func_00722ba0();
}
}

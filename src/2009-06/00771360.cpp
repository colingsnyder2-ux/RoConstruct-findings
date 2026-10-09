// roc 2009-06 00771360  unit: CXTPDrawHelpers  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00771360
//
// 00771360  56                   push esi
// 00771361  8b742408             mov esi, dword ptr [esp + 8]
// 00771365  85f6                 test esi, esi
// 00771367  7441                 je 0x7713aa
// 00771369  837e2000             cmp dword ptr [esi + 0x20], 0
// 0077136d  743b                 je 0x7713aa
// 0077136f  57                   push edi
// 00771370  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00771374  833f25               cmp dword ptr [edi], 0x25
// 00771377  7517                 jne 0x771390
// 00771379  8bce                 mov ecx, esi
// 0077137b  e862ab0d00           call 0x84bee2
// 00771380  a900004000           test eax, 0x400000
// 00771385  7409                 je 0x771390
// 00771387  c70727000000         mov dword ptr [edi], 0x27
// 0077138d  5f                   pop edi
// 0077138e  5e                   pop esi
// 0077138f  c3                   ret 
// 00771390  833f27               cmp dword ptr [edi], 0x27
// 00771393  7514                 jne 0x7713a9
// 00771395  8bce                 mov ecx, esi
// 00771397  e846ab0d00           call 0x84bee2
// 0077139c  a900004000           test eax, 0x400000
// 007713a1  7406                 je 0x7713a9
// 007713a3  c70725000000         mov dword ptr [edi], 0x25
// 007713a9  5f                   pop edi
// 007713aa  5e                   pop esi
// 007713ab  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000b@ns_ROCX00000b@ns_ROCX000086@@YAXPAUCXTPDrawHelpers@12@PAH@Z)

namespace ns_ROCX00000b {
extern void G1_func_00642b20();
void fn_ROCX00000b()
{
    G1_func_00642b20();
}
}

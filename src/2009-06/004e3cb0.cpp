// roc 2009-06 004e3cb0  unit: RBX::Network::Replicator  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e3cb0
//
// 004e3cb0  8b442404             mov eax, dword ptr [esp + 4]
// 004e3cb4  53                   push ebx
// 004e3cb5  55                   push ebp
// 004e3cb6  56                   push esi
// 004e3cb7  8bf1                 mov esi, ecx
// 004e3cb9  8b6e04               mov ebp, dword ptr [esi + 4]
// 004e3cbc  b901000000           mov ecx, 1
// 004e3cc1  894604               mov dword ptr [esi + 4], eax
// 004e3cc4  57                   push edi
// 004e3cc5  840d9cf2a300         test byte ptr [0xa3f29c], cl
// 004e3ccb  7513                 jne 0x4e3ce0
// 004e3ccd  090d9cf2a300         or dword ptr [0xa3f29c], ecx
// 004e3cd3  bb0a000000           mov ebx, 0xa
// 004e3cd8  891d98f2a300         mov dword ptr [0xa3f298], ebx
// 004e3cde  eb06                 jmp 0x4e3ce6
// 004e3ce0  8b1d98f2a300         mov ebx, dword ptr [0xa3f298]
// 004e3ce6  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e3ce9  8b7e04               mov edi, dword ptr [esi + 4]
// 004e3cec  3bf9                 cmp edi, ecx
// 004e3cee  0f8e8a000000         jle 0x4e3d7e
// 004e3cf4  85c9                 test ecx, ecx
// 004e3cf6  7512                 jne 0x4e3d0a
// 004e3cf8  55                   push ebp
// 004e3cf9  8bce                 mov ecx, esi
// 004e3cfb  894608               mov dword ptr [esi + 8], eax
// 004e3cfe  e89d201900           call 0x675da0
// 004e3d03  5f                   pop edi
// 004e3d04  5e                   pop esi
// 004e3d05  5d                   pop ebp
// 004e3d06  5b                   pop ebx
// 004e3d07  c20800               ret 8
// 004e3d0a  3bfb                 cmp edi, ebx
// 004e3d0c  7d12                 jge 0x4e3d20
// 004e3d0e  55                   push ebp
// 004e3d0f  8bce                 mov ecx, esi
// 004e3d11  895e08               mov dword ptr [esi + 8], ebx
// 004e3d14  e887201900           call 0x675da0
// 004e3d19  5f                   pop edi
// 004e3d1a  5e                   pop esi
// 004e3d1b  5d                   pop ebp
// 004e3d1c  5b                   pop ebx
// 004e3d1d  c20800               ret 8
// 004e3d20  d90548e88b00         fld dword ptr [0x8be848]
// 004e3d26  8bc1                 mov eax, ecx
// 004e3d28  03c0                 add eax, eax
// 004e3d2a  03c0                 add eax, eax
// 004e3d2c  3d801a0600           cmp eax, 0x61a80
// 004e3d31  760a                 jbe 0x4e3d3d
// 004e3d33  ddd8                 fstp st(0)
// 004e3d35  d905a0ef8b00         fld dword ptr [0x8befa0]
// 004e3d3b  eb0f                 jmp 0x4e3d4c
// 004e3d3d  3d00fa0000           cmp eax, 0xfa00
// 004e3d42  7608                 jbe 0x4e3d4c
// 004e3d44  ddd8                 fstp st(0)
// 004e3d46  d90544d08b00         fld dword ptr [0x8bd044]
// 004e3d4c  8bd9                 mov ebx, ecx
// 004e3d4e  895c2418             mov dword ptr [esp + 0x18], ebx
// 004e3d52  da4c2418             fimul dword ptr [esp + 0x18]
// 004e3d56  e865612300           call 0x719ec0
// 004e3d5b  2bc3                 sub eax, ebx
// 004e3d5d  03c7                 add eax, edi
// 004e3d5f  894608               mov dword ptr [esi + 8], eax
// 004e3d62  8b0d98f2a300         mov ecx, dword ptr [0xa3f298]
// 004e3d68  3bc1                 cmp eax, ecx
// 004e3d6a  7d03                 jge 0x4e3d6f
// 004e3d6c  894e08               mov dword ptr [esi + 8], ecx
// 004e3d6f  55                   push ebp
// 004e3d70  8bce                 mov ecx, esi
// 004e3d72  e829201900           call 0x675da0
// 004e3d77  5f                   pop edi
// 004e3d78  5e                   pop esi
// 004e3d79  5d                   pop ebp
// 004e3d7a  5b                   pop ebx
// 004e3d7b  c20800               ret 8
// 004e3d7e  b856555555           mov eax, 0x55555556
// 004e3d83  f7e9                 imul ecx
// 004e3d85  8bc2                 mov eax, edx
// 004e3d87  c1e81f               shr eax, 0x1f
// 004e3d8a  03c2                 add eax, edx
// 004e3d8c  3bf8                 cmp edi, eax
// 004e3d8e  7f19                 jg 0x4e3da9
// 004e3d90  807c241800           cmp byte ptr [esp + 0x18], 0
// 004e3d95  7412                 je 0x4e3da9
// 004e3d97  3bfb                 cmp edi, ebx
// 004e3d99  7e0e                 jle 0x4e3da9
// 004e3d9b  3bfd                 cmp edi, ebp
// 004e3d9d  7c02                 jl 0x4e3da1
// 004e3d9f  8bfd                 mov edi, ebp
// 004e3da1  57                   push edi
// 004e3da2  8bce                 mov ecx, esi
// 004e3da4  e8f71f1900           call 0x675da0
// 004e3da9  5f                   pop edi
// 004e3daa  5e                   pop esi
// 004e3dab  5d                   pop ebp
// 004e3dac  5b                   pop ebx
// 004e3dad  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp

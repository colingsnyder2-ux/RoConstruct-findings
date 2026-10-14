// roc 2009-06 004e3db0  unit: RBX::Network::Replicator  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e3db0
//
// 004e3db0  8b442404             mov eax, dword ptr [esp + 4]
// 004e3db4  53                   push ebx
// 004e3db5  55                   push ebp
// 004e3db6  56                   push esi
// 004e3db7  8bf1                 mov esi, ecx
// 004e3db9  8b6e04               mov ebp, dword ptr [esi + 4]
// 004e3dbc  b901000000           mov ecx, 1
// 004e3dc1  894604               mov dword ptr [esi + 4], eax
// 004e3dc4  57                   push edi
// 004e3dc5  840da4f2a300         test byte ptr [0xa3f2a4], cl
// 004e3dcb  7513                 jne 0x4e3de0
// 004e3dcd  090da4f2a300         or dword ptr [0xa3f2a4], ecx
// 004e3dd3  bb0a000000           mov ebx, 0xa
// 004e3dd8  891da0f2a300         mov dword ptr [0xa3f2a0], ebx
// 004e3dde  eb06                 jmp 0x4e3de6
// 004e3de0  8b1da0f2a300         mov ebx, dword ptr [0xa3f2a0]
// 004e3de6  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e3de9  8b7e04               mov edi, dword ptr [esi + 4]
// 004e3dec  3bf9                 cmp edi, ecx
// 004e3dee  0f8e8a000000         jle 0x4e3e7e
// 004e3df4  85c9                 test ecx, ecx
// 004e3df6  7512                 jne 0x4e3e0a
// 004e3df8  55                   push ebp
// 004e3df9  8bce                 mov ecx, esi
// 004e3dfb  894608               mov dword ptr [esi + 8], eax
// 004e3dfe  e89d1f1900           call 0x675da0
// 004e3e03  5f                   pop edi
// 004e3e04  5e                   pop esi
// 004e3e05  5d                   pop ebp
// 004e3e06  5b                   pop ebx
// 004e3e07  c20800               ret 8
// 004e3e0a  3bfb                 cmp edi, ebx
// 004e3e0c  7d12                 jge 0x4e3e20
// 004e3e0e  55                   push ebp
// 004e3e0f  8bce                 mov ecx, esi
// 004e3e11  895e08               mov dword ptr [esi + 8], ebx
// 004e3e14  e8871f1900           call 0x675da0
// 004e3e19  5f                   pop edi
// 004e3e1a  5e                   pop esi
// 004e3e1b  5d                   pop ebp
// 004e3e1c  5b                   pop ebx
// 004e3e1d  c20800               ret 8
// 004e3e20  d90548e88b00         fld dword ptr [0x8be848]
// 004e3e26  8bc1                 mov eax, ecx
// 004e3e28  03c0                 add eax, eax
// 004e3e2a  03c0                 add eax, eax
// 004e3e2c  3d801a0600           cmp eax, 0x61a80
// 004e3e31  760a                 jbe 0x4e3e3d
// 004e3e33  ddd8                 fstp st(0)
// 004e3e35  d905a0ef8b00         fld dword ptr [0x8befa0]
// 004e3e3b  eb0f                 jmp 0x4e3e4c
// 004e3e3d  3d00fa0000           cmp eax, 0xfa00
// 004e3e42  7608                 jbe 0x4e3e4c
// 004e3e44  ddd8                 fstp st(0)
// 004e3e46  d90544d08b00         fld dword ptr [0x8bd044]
// 004e3e4c  8bd9                 mov ebx, ecx
// 004e3e4e  895c2418             mov dword ptr [esp + 0x18], ebx
// 004e3e52  da4c2418             fimul dword ptr [esp + 0x18]
// 004e3e56  e865602300           call 0x719ec0
// 004e3e5b  2bc3                 sub eax, ebx
// 004e3e5d  03c7                 add eax, edi
// 004e3e5f  894608               mov dword ptr [esi + 8], eax
// 004e3e62  8b0da0f2a300         mov ecx, dword ptr [0xa3f2a0]
// 004e3e68  3bc1                 cmp eax, ecx
// 004e3e6a  7d03                 jge 0x4e3e6f
// 004e3e6c  894e08               mov dword ptr [esi + 8], ecx
// 004e3e6f  55                   push ebp
// 004e3e70  8bce                 mov ecx, esi
// 004e3e72  e8291f1900           call 0x675da0
// 004e3e77  5f                   pop edi
// 004e3e78  5e                   pop esi
// 004e3e79  5d                   pop ebp
// 004e3e7a  5b                   pop ebx
// 004e3e7b  c20800               ret 8
// 004e3e7e  b856555555           mov eax, 0x55555556
// 004e3e83  f7e9                 imul ecx
// 004e3e85  8bc2                 mov eax, edx
// 004e3e87  c1e81f               shr eax, 0x1f
// 004e3e8a  03c2                 add eax, edx
// 004e3e8c  3bf8                 cmp edi, eax
// 004e3e8e  7f19                 jg 0x4e3ea9
// 004e3e90  807c241800           cmp byte ptr [esp + 0x18], 0
// 004e3e95  7412                 je 0x4e3ea9
// 004e3e97  3bfb                 cmp edi, ebx
// 004e3e99  7e0e                 jle 0x4e3ea9
// 004e3e9b  3bfd                 cmp edi, ebp
// 004e3e9d  7c02                 jl 0x4e3ea1
// 004e3e9f  8bfd                 mov edi, ebp
// 004e3ea1  57                   push edi
// 004e3ea2  8bce                 mov ecx, esi
// 004e3ea4  e8f71e1900           call 0x675da0
// 004e3ea9  5f                   pop edi
// 004e3eaa  5e                   pop esi
// 004e3eab  5d                   pop ebp
// 004e3eac  5b                   pop ebx
// 004e3ead  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp

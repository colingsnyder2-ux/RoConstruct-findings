// roc 2009-06 00659d60  unit: RBX::VCamera::?$FactoryProduct  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00659d60
//
// 00659d60  8b442404             mov eax, dword ptr [esp + 4]
// 00659d64  53                   push ebx
// 00659d65  55                   push ebp
// 00659d66  56                   push esi
// 00659d67  8bf1                 mov esi, ecx
// 00659d69  8b6e04               mov ebp, dword ptr [esi + 4]
// 00659d6c  b901000000           mov ecx, 1
// 00659d71  894604               mov dword ptr [esi + 4], eax
// 00659d74  57                   push edi
// 00659d75  840d94cba400         test byte ptr [0xa4cb94], cl
// 00659d7b  7513                 jne 0x659d90
// 00659d7d  090d94cba400         or dword ptr [0xa4cb94], ecx
// 00659d83  bb0a000000           mov ebx, 0xa
// 00659d88  891d90cba400         mov dword ptr [0xa4cb90], ebx
// 00659d8e  eb06                 jmp 0x659d96
// 00659d90  8b1d90cba400         mov ebx, dword ptr [0xa4cb90]
// 00659d96  8b4e08               mov ecx, dword ptr [esi + 8]
// 00659d99  8b7e04               mov edi, dword ptr [esi + 4]
// 00659d9c  3bf9                 cmp edi, ecx
// 00659d9e  0f8e8a000000         jle 0x659e2e
// 00659da4  85c9                 test ecx, ecx
// 00659da6  7512                 jne 0x659dba
// 00659da8  55                   push ebp
// 00659da9  8bce                 mov ecx, esi
// 00659dab  894608               mov dword ptr [esi + 8], eax
// 00659dae  e8edbf0100           call 0x675da0
// 00659db3  5f                   pop edi
// 00659db4  5e                   pop esi
// 00659db5  5d                   pop ebp
// 00659db6  5b                   pop ebx
// 00659db7  c20800               ret 8
// 00659dba  3bfb                 cmp edi, ebx
// 00659dbc  7d12                 jge 0x659dd0
// 00659dbe  55                   push ebp
// 00659dbf  8bce                 mov ecx, esi
// 00659dc1  895e08               mov dword ptr [esi + 8], ebx
// 00659dc4  e8d7bf0100           call 0x675da0
// 00659dc9  5f                   pop edi
// 00659dca  5e                   pop esi
// 00659dcb  5d                   pop ebp
// 00659dcc  5b                   pop ebx
// 00659dcd  c20800               ret 8
// 00659dd0  d90548e88b00         fld dword ptr [0x8be848]
// 00659dd6  8bc1                 mov eax, ecx
// 00659dd8  03c0                 add eax, eax
// 00659dda  03c0                 add eax, eax
// 00659ddc  3d801a0600           cmp eax, 0x61a80
// 00659de1  760a                 jbe 0x659ded
// 00659de3  ddd8                 fstp st(0)
// 00659de5  d905a0ef8b00         fld dword ptr [0x8befa0]
// 00659deb  eb0f                 jmp 0x659dfc
// 00659ded  3d00fa0000           cmp eax, 0xfa00
// 00659df2  7608                 jbe 0x659dfc
// 00659df4  ddd8                 fstp st(0)
// 00659df6  d90544d08b00         fld dword ptr [0x8bd044]
// 00659dfc  8bd9                 mov ebx, ecx
// 00659dfe  895c2418             mov dword ptr [esp + 0x18], ebx
// 00659e02  da4c2418             fimul dword ptr [esp + 0x18]
// 00659e06  e8b5000c00           call 0x719ec0
// 00659e0b  2bc3                 sub eax, ebx
// 00659e0d  03c7                 add eax, edi
// 00659e0f  894608               mov dword ptr [esi + 8], eax
// 00659e12  8b0d90cba400         mov ecx, dword ptr [0xa4cb90]
// 00659e18  3bc1                 cmp eax, ecx
// 00659e1a  7d03                 jge 0x659e1f
// 00659e1c  894e08               mov dword ptr [esi + 8], ecx
// 00659e1f  55                   push ebp
// 00659e20  8bce                 mov ecx, esi
// 00659e22  e879bf0100           call 0x675da0
// 00659e27  5f                   pop edi
// 00659e28  5e                   pop esi
// 00659e29  5d                   pop ebp
// 00659e2a  5b                   pop ebx
// 00659e2b  c20800               ret 8
// 00659e2e  b856555555           mov eax, 0x55555556
// 00659e33  f7e9                 imul ecx
// 00659e35  8bc2                 mov eax, edx
// 00659e37  c1e81f               shr eax, 0x1f
// 00659e3a  03c2                 add eax, edx
// 00659e3c  3bf8                 cmp edi, eax
// 00659e3e  7f19                 jg 0x659e59
// 00659e40  807c241800           cmp byte ptr [esp + 0x18], 0
// 00659e45  7412                 je 0x659e59
// 00659e47  3bfb                 cmp edi, ebx
// 00659e49  7e0e                 jle 0x659e59
// 00659e4b  3bfd                 cmp edi, ebp
// 00659e4d  7c02                 jl 0x659e51
// 00659e4f  8bfd                 mov edi, ebp
// 00659e51  57                   push edi
// 00659e52  8bce                 mov ecx, esi
// 00659e54  e847bf0100           call 0x675da0
// 00659e59  5f                   pop edi
// 00659e5a  5e                   pop esi
// 00659e5b  5d                   pop ebp
// 00659e5c  5b                   pop ebx
// 00659e5d  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp

// roc 2009-06 0062b980  unit: RBX::Workspace  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062b980
//
// 0062b980  8b442404             mov eax, dword ptr [esp + 4]
// 0062b984  53                   push ebx
// 0062b985  55                   push ebp
// 0062b986  56                   push esi
// 0062b987  8bf1                 mov esi, ecx
// 0062b989  8b6e04               mov ebp, dword ptr [esi + 4]
// 0062b98c  b901000000           mov ecx, 1
// 0062b991  894604               mov dword ptr [esi + 4], eax
// 0062b994  57                   push edi
// 0062b995  840da8b9a400         test byte ptr [0xa4b9a8], cl
// 0062b99b  7513                 jne 0x62b9b0
// 0062b99d  090da8b9a400         or dword ptr [0xa4b9a8], ecx
// 0062b9a3  bb0a000000           mov ebx, 0xa
// 0062b9a8  891da4b9a400         mov dword ptr [0xa4b9a4], ebx
// 0062b9ae  eb06                 jmp 0x62b9b6
// 0062b9b0  8b1da4b9a400         mov ebx, dword ptr [0xa4b9a4]
// 0062b9b6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0062b9b9  8b7e04               mov edi, dword ptr [esi + 4]
// 0062b9bc  3bf9                 cmp edi, ecx
// 0062b9be  0f8e8a000000         jle 0x62ba4e
// 0062b9c4  85c9                 test ecx, ecx
// 0062b9c6  7512                 jne 0x62b9da
// 0062b9c8  55                   push ebp
// 0062b9c9  8bce                 mov ecx, esi
// 0062b9cb  894608               mov dword ptr [esi + 8], eax
// 0062b9ce  e8cda30400           call 0x675da0
// 0062b9d3  5f                   pop edi
// 0062b9d4  5e                   pop esi
// 0062b9d5  5d                   pop ebp
// 0062b9d6  5b                   pop ebx
// 0062b9d7  c20800               ret 8
// 0062b9da  3bfb                 cmp edi, ebx
// 0062b9dc  7d12                 jge 0x62b9f0
// 0062b9de  55                   push ebp
// 0062b9df  8bce                 mov ecx, esi
// 0062b9e1  895e08               mov dword ptr [esi + 8], ebx
// 0062b9e4  e8b7a30400           call 0x675da0
// 0062b9e9  5f                   pop edi
// 0062b9ea  5e                   pop esi
// 0062b9eb  5d                   pop ebp
// 0062b9ec  5b                   pop ebx
// 0062b9ed  c20800               ret 8
// 0062b9f0  d90548e88b00         fld dword ptr [0x8be848]
// 0062b9f6  8bc1                 mov eax, ecx
// 0062b9f8  03c0                 add eax, eax
// 0062b9fa  03c0                 add eax, eax
// 0062b9fc  3d801a0600           cmp eax, 0x61a80
// 0062ba01  760a                 jbe 0x62ba0d
// 0062ba03  ddd8                 fstp st(0)
// 0062ba05  d905a0ef8b00         fld dword ptr [0x8befa0]
// 0062ba0b  eb0f                 jmp 0x62ba1c
// 0062ba0d  3d00fa0000           cmp eax, 0xfa00
// 0062ba12  7608                 jbe 0x62ba1c
// 0062ba14  ddd8                 fstp st(0)
// 0062ba16  d90544d08b00         fld dword ptr [0x8bd044]
// 0062ba1c  8bd9                 mov ebx, ecx
// 0062ba1e  895c2418             mov dword ptr [esp + 0x18], ebx
// 0062ba22  da4c2418             fimul dword ptr [esp + 0x18]
// 0062ba26  e895e40e00           call 0x719ec0
// 0062ba2b  2bc3                 sub eax, ebx
// 0062ba2d  03c7                 add eax, edi
// 0062ba2f  894608               mov dword ptr [esi + 8], eax
// 0062ba32  8b0da4b9a400         mov ecx, dword ptr [0xa4b9a4]
// 0062ba38  3bc1                 cmp eax, ecx
// 0062ba3a  7d03                 jge 0x62ba3f
// 0062ba3c  894e08               mov dword ptr [esi + 8], ecx
// 0062ba3f  55                   push ebp
// 0062ba40  8bce                 mov ecx, esi
// 0062ba42  e859a30400           call 0x675da0
// 0062ba47  5f                   pop edi
// 0062ba48  5e                   pop esi
// 0062ba49  5d                   pop ebp
// 0062ba4a  5b                   pop ebx
// 0062ba4b  c20800               ret 8
// 0062ba4e  b856555555           mov eax, 0x55555556
// 0062ba53  f7e9                 imul ecx
// 0062ba55  8bc2                 mov eax, edx
// 0062ba57  c1e81f               shr eax, 0x1f
// 0062ba5a  03c2                 add eax, edx
// 0062ba5c  3bf8                 cmp edi, eax
// 0062ba5e  7f19                 jg 0x62ba79
// 0062ba60  807c241800           cmp byte ptr [esp + 0x18], 0
// 0062ba65  7412                 je 0x62ba79
// 0062ba67  3bfb                 cmp edi, ebx
// 0062ba69  7e0e                 jle 0x62ba79
// 0062ba6b  3bfd                 cmp edi, ebp
// 0062ba6d  7c02                 jl 0x62ba71
// 0062ba6f  8bfd                 mov edi, ebp
// 0062ba71  57                   push edi
// 0062ba72  8bce                 mov ecx, esi
// 0062ba74  e827a30400           call 0x675da0
// 0062ba79  5f                   pop edi
// 0062ba7a  5e                   pop esi
// 0062ba7b  5d                   pop ebp
// 0062ba7c  5b                   pop ebx
// 0062ba7d  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp

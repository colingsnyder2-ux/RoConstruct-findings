// roc 2009-06 006f4aa0  unit: RBX::HUMAN::GettingUp  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f4aa0
//
// 006f4aa0  8b442404             mov eax, dword ptr [esp + 4]
// 006f4aa4  53                   push ebx
// 006f4aa5  55                   push ebp
// 006f4aa6  56                   push esi
// 006f4aa7  8bf1                 mov esi, ecx
// 006f4aa9  8b6e04               mov ebp, dword ptr [esi + 4]
// 006f4aac  b901000000           mov ecx, 1
// 006f4ab1  894604               mov dword ptr [esi + 4], eax
// 006f4ab4  57                   push edi
// 006f4ab5  840d7402a500         test byte ptr [0xa50274], cl
// 006f4abb  7513                 jne 0x6f4ad0
// 006f4abd  090d7402a500         or dword ptr [0xa50274], ecx
// 006f4ac3  bb0a000000           mov ebx, 0xa
// 006f4ac8  891d7002a500         mov dword ptr [0xa50270], ebx
// 006f4ace  eb06                 jmp 0x6f4ad6
// 006f4ad0  8b1d7002a500         mov ebx, dword ptr [0xa50270]
// 006f4ad6  8b4e08               mov ecx, dword ptr [esi + 8]
// 006f4ad9  8b7e04               mov edi, dword ptr [esi + 4]
// 006f4adc  3bf9                 cmp edi, ecx
// 006f4ade  0f8e8a000000         jle 0x6f4b6e
// 006f4ae4  85c9                 test ecx, ecx
// 006f4ae6  7512                 jne 0x6f4afa
// 006f4ae8  55                   push ebp
// 006f4ae9  8bce                 mov ecx, esi
// 006f4aeb  894608               mov dword ptr [esi + 8], eax
// 006f4aee  e8ad12f8ff           call 0x675da0
// 006f4af3  5f                   pop edi
// 006f4af4  5e                   pop esi
// 006f4af5  5d                   pop ebp
// 006f4af6  5b                   pop ebx
// 006f4af7  c20800               ret 8
// 006f4afa  3bfb                 cmp edi, ebx
// 006f4afc  7d12                 jge 0x6f4b10
// 006f4afe  55                   push ebp
// 006f4aff  8bce                 mov ecx, esi
// 006f4b01  895e08               mov dword ptr [esi + 8], ebx
// 006f4b04  e89712f8ff           call 0x675da0
// 006f4b09  5f                   pop edi
// 006f4b0a  5e                   pop esi
// 006f4b0b  5d                   pop ebp
// 006f4b0c  5b                   pop ebx
// 006f4b0d  c20800               ret 8
// 006f4b10  d90548e88b00         fld dword ptr [0x8be848]
// 006f4b16  8bc1                 mov eax, ecx
// 006f4b18  03c0                 add eax, eax
// 006f4b1a  03c0                 add eax, eax
// 006f4b1c  3d801a0600           cmp eax, 0x61a80
// 006f4b21  760a                 jbe 0x6f4b2d
// 006f4b23  ddd8                 fstp st(0)
// 006f4b25  d905a0ef8b00         fld dword ptr [0x8befa0]
// 006f4b2b  eb0f                 jmp 0x6f4b3c
// 006f4b2d  3d00fa0000           cmp eax, 0xfa00
// 006f4b32  7608                 jbe 0x6f4b3c
// 006f4b34  ddd8                 fstp st(0)
// 006f4b36  d90544d08b00         fld dword ptr [0x8bd044]
// 006f4b3c  8bd9                 mov ebx, ecx
// 006f4b3e  895c2418             mov dword ptr [esp + 0x18], ebx
// 006f4b42  da4c2418             fimul dword ptr [esp + 0x18]
// 006f4b46  e875530200           call 0x719ec0
// 006f4b4b  2bc3                 sub eax, ebx
// 006f4b4d  03c7                 add eax, edi
// 006f4b4f  894608               mov dword ptr [esi + 8], eax
// 006f4b52  8b0d7002a500         mov ecx, dword ptr [0xa50270]
// 006f4b58  3bc1                 cmp eax, ecx
// 006f4b5a  7d03                 jge 0x6f4b5f
// 006f4b5c  894e08               mov dword ptr [esi + 8], ecx
// 006f4b5f  55                   push ebp
// 006f4b60  8bce                 mov ecx, esi
// 006f4b62  e83912f8ff           call 0x675da0
// 006f4b67  5f                   pop edi
// 006f4b68  5e                   pop esi
// 006f4b69  5d                   pop ebp
// 006f4b6a  5b                   pop ebx
// 006f4b6b  c20800               ret 8
// 006f4b6e  b856555555           mov eax, 0x55555556
// 006f4b73  f7e9                 imul ecx
// 006f4b75  8bc2                 mov eax, edx
// 006f4b77  c1e81f               shr eax, 0x1f
// 006f4b7a  03c2                 add eax, edx
// 006f4b7c  3bf8                 cmp edi, eax
// 006f4b7e  7f19                 jg 0x6f4b99
// 006f4b80  807c241800           cmp byte ptr [esp + 0x18], 0
// 006f4b85  7412                 je 0x6f4b99
// 006f4b87  3bfb                 cmp edi, ebx
// 006f4b89  7e0e                 jle 0x6f4b99
// 006f4b8b  3bfd                 cmp edi, ebp
// 006f4b8d  7c02                 jl 0x6f4b91
// 006f4b8f  8bfd                 mov edi, ebp
// 006f4b91  57                   push edi
// 006f4b92  8bce                 mov ecx, esi
// 006f4b94  e80712f8ff           call 0x675da0
// 006f4b99  5f                   pop edi
// 006f4b9a  5e                   pop esi
// 006f4b9b  5d                   pop ebp
// 006f4b9c  5b                   pop ebx
// 006f4b9d  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp

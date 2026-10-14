// roc 2009-06 00675f70  unit: RBX::Assembly  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00675f70
//
// 00675f70  8b442404             mov eax, dword ptr [esp + 4]
// 00675f74  53                   push ebx
// 00675f75  55                   push ebp
// 00675f76  56                   push esi
// 00675f77  8bf1                 mov esi, ecx
// 00675f79  8b6e04               mov ebp, dword ptr [esi + 4]
// 00675f7c  b901000000           mov ecx, 1
// 00675f81  894604               mov dword ptr [esi + 4], eax
// 00675f84  57                   push edi
// 00675f85  840db8dfa400         test byte ptr [0xa4dfb8], cl
// 00675f8b  7513                 jne 0x675fa0
// 00675f8d  090db8dfa400         or dword ptr [0xa4dfb8], ecx
// 00675f93  bb0a000000           mov ebx, 0xa
// 00675f98  891db4dfa400         mov dword ptr [0xa4dfb4], ebx
// 00675f9e  eb06                 jmp 0x675fa6
// 00675fa0  8b1db4dfa400         mov ebx, dword ptr [0xa4dfb4]
// 00675fa6  8b4e08               mov ecx, dword ptr [esi + 8]
// 00675fa9  8b7e04               mov edi, dword ptr [esi + 4]
// 00675fac  3bf9                 cmp edi, ecx
// 00675fae  0f8e8a000000         jle 0x67603e
// 00675fb4  85c9                 test ecx, ecx
// 00675fb6  7512                 jne 0x675fca
// 00675fb8  55                   push ebp
// 00675fb9  8bce                 mov ecx, esi
// 00675fbb  894608               mov dword ptr [esi + 8], eax
// 00675fbe  e8ddfdffff           call 0x675da0
// 00675fc3  5f                   pop edi
// 00675fc4  5e                   pop esi
// 00675fc5  5d                   pop ebp
// 00675fc6  5b                   pop ebx
// 00675fc7  c20800               ret 8
// 00675fca  3bfb                 cmp edi, ebx
// 00675fcc  7d12                 jge 0x675fe0
// 00675fce  55                   push ebp
// 00675fcf  8bce                 mov ecx, esi
// 00675fd1  895e08               mov dword ptr [esi + 8], ebx
// 00675fd4  e8c7fdffff           call 0x675da0
// 00675fd9  5f                   pop edi
// 00675fda  5e                   pop esi
// 00675fdb  5d                   pop ebp
// 00675fdc  5b                   pop ebx
// 00675fdd  c20800               ret 8
// 00675fe0  d90548e88b00         fld dword ptr [0x8be848]
// 00675fe6  8bc1                 mov eax, ecx
// 00675fe8  03c0                 add eax, eax
// 00675fea  03c0                 add eax, eax
// 00675fec  3d801a0600           cmp eax, 0x61a80
// 00675ff1  760a                 jbe 0x675ffd
// 00675ff3  ddd8                 fstp st(0)
// 00675ff5  d905a0ef8b00         fld dword ptr [0x8befa0]
// 00675ffb  eb0f                 jmp 0x67600c
// 00675ffd  3d00fa0000           cmp eax, 0xfa00
// 00676002  7608                 jbe 0x67600c
// 00676004  ddd8                 fstp st(0)
// 00676006  d90544d08b00         fld dword ptr [0x8bd044]
// 0067600c  8bd9                 mov ebx, ecx
// 0067600e  895c2418             mov dword ptr [esp + 0x18], ebx
// 00676012  da4c2418             fimul dword ptr [esp + 0x18]
// 00676016  e8a53e0a00           call 0x719ec0
// 0067601b  2bc3                 sub eax, ebx
// 0067601d  03c7                 add eax, edi
// 0067601f  894608               mov dword ptr [esi + 8], eax
// 00676022  8b0db4dfa400         mov ecx, dword ptr [0xa4dfb4]
// 00676028  3bc1                 cmp eax, ecx
// 0067602a  7d03                 jge 0x67602f
// 0067602c  894e08               mov dword ptr [esi + 8], ecx
// 0067602f  55                   push ebp
// 00676030  8bce                 mov ecx, esi
// 00676032  e869fdffff           call 0x675da0
// 00676037  5f                   pop edi
// 00676038  5e                   pop esi
// 00676039  5d                   pop ebp
// 0067603a  5b                   pop ebx
// 0067603b  c20800               ret 8
// 0067603e  b856555555           mov eax, 0x55555556
// 00676043  f7e9                 imul ecx
// 00676045  8bc2                 mov eax, edx
// 00676047  c1e81f               shr eax, 0x1f
// 0067604a  03c2                 add eax, edx
// 0067604c  3bf8                 cmp edi, eax
// 0067604e  7f19                 jg 0x676069
// 00676050  807c241800           cmp byte ptr [esp + 0x18], 0
// 00676055  7412                 je 0x676069
// 00676057  3bfb                 cmp edi, ebx
// 00676059  7e0e                 jle 0x676069
// 0067605b  3bfd                 cmp edi, ebp
// 0067605d  7c02                 jl 0x676061
// 0067605f  8bfd                 mov edi, ebp
// 00676061  57                   push edi
// 00676062  8bce                 mov ecx, esi
// 00676064  e837fdffff           call 0x675da0
// 00676069  5f                   pop edi
// 0067606a  5e                   pop esi
// 0067606b  5d                   pop ebp
// 0067606c  5b                   pop ebx
// 0067606d  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp

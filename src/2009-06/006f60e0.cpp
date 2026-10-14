// roc 2009-06 006f60e0  unit: Ogre::RbxMeshLoader  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f60e0
//
// 006f60e0  8b442404             mov eax, dword ptr [esp + 4]
// 006f60e4  53                   push ebx
// 006f60e5  55                   push ebp
// 006f60e6  56                   push esi
// 006f60e7  8bf1                 mov esi, ecx
// 006f60e9  8b6e04               mov ebp, dword ptr [esi + 4]
// 006f60ec  b901000000           mov ecx, 1
// 006f60f1  894604               mov dword ptr [esi + 4], eax
// 006f60f4  57                   push edi
// 006f60f5  840dbc02a500         test byte ptr [0xa502bc], cl
// 006f60fb  7513                 jne 0x6f6110
// 006f60fd  090dbc02a500         or dword ptr [0xa502bc], ecx
// 006f6103  bb0a000000           mov ebx, 0xa
// 006f6108  891db802a500         mov dword ptr [0xa502b8], ebx
// 006f610e  eb06                 jmp 0x6f6116
// 006f6110  8b1db802a500         mov ebx, dword ptr [0xa502b8]
// 006f6116  8b4e08               mov ecx, dword ptr [esi + 8]
// 006f6119  8b7e04               mov edi, dword ptr [esi + 4]
// 006f611c  3bf9                 cmp edi, ecx
// 006f611e  0f8e8a000000         jle 0x6f61ae
// 006f6124  85c9                 test ecx, ecx
// 006f6126  7512                 jne 0x6f613a
// 006f6128  55                   push ebp
// 006f6129  8bce                 mov ecx, esi
// 006f612b  894608               mov dword ptr [esi + 8], eax
// 006f612e  e86dfcf7ff           call 0x675da0
// 006f6133  5f                   pop edi
// 006f6134  5e                   pop esi
// 006f6135  5d                   pop ebp
// 006f6136  5b                   pop ebx
// 006f6137  c20800               ret 8
// 006f613a  3bfb                 cmp edi, ebx
// 006f613c  7d12                 jge 0x6f6150
// 006f613e  55                   push ebp
// 006f613f  8bce                 mov ecx, esi
// 006f6141  895e08               mov dword ptr [esi + 8], ebx
// 006f6144  e857fcf7ff           call 0x675da0
// 006f6149  5f                   pop edi
// 006f614a  5e                   pop esi
// 006f614b  5d                   pop ebp
// 006f614c  5b                   pop ebx
// 006f614d  c20800               ret 8
// 006f6150  d90548e88b00         fld dword ptr [0x8be848]
// 006f6156  8bc1                 mov eax, ecx
// 006f6158  03c0                 add eax, eax
// 006f615a  03c0                 add eax, eax
// 006f615c  3d801a0600           cmp eax, 0x61a80
// 006f6161  760a                 jbe 0x6f616d
// 006f6163  ddd8                 fstp st(0)
// 006f6165  d905a0ef8b00         fld dword ptr [0x8befa0]
// 006f616b  eb0f                 jmp 0x6f617c
// 006f616d  3d00fa0000           cmp eax, 0xfa00
// 006f6172  7608                 jbe 0x6f617c
// 006f6174  ddd8                 fstp st(0)
// 006f6176  d90544d08b00         fld dword ptr [0x8bd044]
// 006f617c  8bd9                 mov ebx, ecx
// 006f617e  895c2418             mov dword ptr [esp + 0x18], ebx
// 006f6182  da4c2418             fimul dword ptr [esp + 0x18]
// 006f6186  e8353d0200           call 0x719ec0
// 006f618b  2bc3                 sub eax, ebx
// 006f618d  03c7                 add eax, edi
// 006f618f  894608               mov dword ptr [esi + 8], eax
// 006f6192  8b0db802a500         mov ecx, dword ptr [0xa502b8]
// 006f6198  3bc1                 cmp eax, ecx
// 006f619a  7d03                 jge 0x6f619f
// 006f619c  894e08               mov dword ptr [esi + 8], ecx
// 006f619f  55                   push ebp
// 006f61a0  8bce                 mov ecx, esi
// 006f61a2  e8f9fbf7ff           call 0x675da0
// 006f61a7  5f                   pop edi
// 006f61a8  5e                   pop esi
// 006f61a9  5d                   pop ebp
// 006f61aa  5b                   pop ebx
// 006f61ab  c20800               ret 8
// 006f61ae  b856555555           mov eax, 0x55555556
// 006f61b3  f7e9                 imul ecx
// 006f61b5  8bc2                 mov eax, edx
// 006f61b7  c1e81f               shr eax, 0x1f
// 006f61ba  03c2                 add eax, edx
// 006f61bc  3bf8                 cmp edi, eax
// 006f61be  7f19                 jg 0x6f61d9
// 006f61c0  807c241800           cmp byte ptr [esp + 0x18], 0
// 006f61c5  7412                 je 0x6f61d9
// 006f61c7  3bfb                 cmp edi, ebx
// 006f61c9  7e0e                 jle 0x6f61d9
// 006f61cb  3bfd                 cmp edi, ebp
// 006f61cd  7c02                 jl 0x6f61d1
// 006f61cf  8bfd                 mov edi, ebp
// 006f61d1  57                   push edi
// 006f61d2  8bce                 mov ecx, esi
// 006f61d4  e8c7fbf7ff           call 0x675da0
// 006f61d9  5f                   pop edi
// 006f61da  5e                   pop esi
// 006f61db  5d                   pop ebp
// 006f61dc  5b                   pop ebx
// 006f61dd  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp

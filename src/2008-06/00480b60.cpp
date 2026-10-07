// roc 2008-06 00480b60  unit: G3D::Win32Window  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00480b60
//
// 00480b60  6aff                 push -1
// 00480b62  689c6a7c00           push 0x7c6a9c
// 00480b67  64a100000000         mov eax, dword ptr fs:[0]
// 00480b6d  50                   push eax
// 00480b6e  64892500000000       mov dword ptr fs:[0], esp
// 00480b75  51                   push ecx
// 00480b76  53                   push ebx
// 00480b77  57                   push edi
// 00480b78  8bf9                 mov edi, ecx
// 00480b7a  33db                 xor ebx, ebx
// 00480b7c  395f04               cmp dword ptr [edi + 4], ebx
// 00480b7f  7e47                 jle 0x480bc8
// 00480b81  55                   push ebp
// 00480b82  56                   push esi
// 00480b83  33ed                 xor ebp, ebp
// 00480b85  8b37                 mov esi, dword ptr [edi]
// 00480b87  03f5                 add esi, ebp
// 00480b89  89742410             mov dword ptr [esp + 0x10], esi
// 00480b8d  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00480b90  50                   push eax
// 00480b91  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00480b99  e882710800           call 0x507d20
// 00480b9e  33c0                 xor eax, eax
// 00480ba0  83c404               add esp, 4
// 00480ba3  8d4e04               lea ecx, [esi + 4]
// 00480ba6  89462c               mov dword ptr [esi + 0x2c], eax
// 00480ba9  894630               mov dword ptr [esi + 0x30], eax
// 00480bac  894634               mov dword ptr [esi + 0x34], eax
// 00480baf  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00480bb7  ff1568248000         call dword ptr [0x802468]
// 00480bbd  43                   inc ebx
// 00480bbe  83c538               add ebp, 0x38
// 00480bc1  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00480bc4  7cbf                 jl 0x480b85
// 00480bc6  5e                   pop esi
// 00480bc7  5d                   pop ebp
// 00480bc8  8b0f                 mov ecx, dword ptr [edi]
// 00480bca  51                   push ecx
// 00480bcb  e850710800           call 0x507d20
// 00480bd0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00480bd4  83c404               add esp, 4
// 00480bd7  33c0                 xor eax, eax
// 00480bd9  8907                 mov dword ptr [edi], eax
// 00480bdb  894704               mov dword ptr [edi + 4], eax
// 00480bde  894708               mov dword ptr [edi + 8], eax
// 00480be1  5f                   pop edi
// 00480be2  5b                   pop ebx
// 00480be3  64890d00000000       mov dword ptr fs:[0], ecx
// 00480bea  83c410               add esp, 0x10
// 00480bed  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

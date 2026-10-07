// roc 2009-06 004aaa80  unit: G3D::Win32Window  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004aaa80
//
// 004aaa80  6aff                 push -1
// 004aaa82  683c188700           push 0x87183c
// 004aaa87  64a100000000         mov eax, dword ptr fs:[0]
// 004aaa8d  50                   push eax
// 004aaa8e  64892500000000       mov dword ptr fs:[0], esp
// 004aaa95  51                   push ecx
// 004aaa96  53                   push ebx
// 004aaa97  57                   push edi
// 004aaa98  8bf9                 mov edi, ecx
// 004aaa9a  33db                 xor ebx, ebx
// 004aaa9c  395f04               cmp dword ptr [edi + 4], ebx
// 004aaa9f  7e47                 jle 0x4aaae8
// 004aaaa1  55                   push ebp
// 004aaaa2  56                   push esi
// 004aaaa3  33ed                 xor ebp, ebp
// 004aaaa5  8b37                 mov esi, dword ptr [edi]
// 004aaaa7  03f5                 add esi, ebp
// 004aaaa9  89742410             mov dword ptr [esp + 0x10], esi
// 004aaaad  8b462c               mov eax, dword ptr [esi + 0x2c]
// 004aaab0  50                   push eax
// 004aaab1  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004aaab9  e8d2070c00           call 0x56b290
// 004aaabe  33c0                 xor eax, eax
// 004aaac0  83c404               add esp, 4
// 004aaac3  8d4e04               lea ecx, [esi + 4]
// 004aaac6  89462c               mov dword ptr [esi + 0x2c], eax
// 004aaac9  894630               mov dword ptr [esi + 0x30], eax
// 004aaacc  894634               mov dword ptr [esi + 0x34], eax
// 004aaacf  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004aaad7  ff15c4e48900         call dword ptr [0x89e4c4]
// 004aaadd  43                   inc ebx
// 004aaade  83c538               add ebp, 0x38
// 004aaae1  3b5f04               cmp ebx, dword ptr [edi + 4]
// 004aaae4  7cbf                 jl 0x4aaaa5
// 004aaae6  5e                   pop esi
// 004aaae7  5d                   pop ebp
// 004aaae8  8b0f                 mov ecx, dword ptr [edi]
// 004aaaea  51                   push ecx
// 004aaaeb  e8a0070c00           call 0x56b290
// 004aaaf0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004aaaf4  83c404               add esp, 4
// 004aaaf7  33c0                 xor eax, eax
// 004aaaf9  8907                 mov dword ptr [edi], eax
// 004aaafb  894704               mov dword ptr [edi + 4], eax
// 004aaafe  894708               mov dword ptr [edi + 8], eax
// 004aab01  5f                   pop edi
// 004aab02  5b                   pop ebx
// 004aab03  64890d00000000       mov dword ptr fs:[0], ecx
// 004aab0a  83c410               add esp, 0x10
// 004aab0d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

// roc 2009-12 004d7550  unit: G3D::Win32Window  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d7550
//
// 004d7550  6aff                 push -1
// 004d7552  687c3c9300           push 0x933c7c
// 004d7557  64a100000000         mov eax, dword ptr fs:[0]
// 004d755d  50                   push eax
// 004d755e  64892500000000       mov dword ptr fs:[0], esp
// 004d7565  51                   push ecx
// 004d7566  53                   push ebx
// 004d7567  57                   push edi
// 004d7568  8bf9                 mov edi, ecx
// 004d756a  33db                 xor ebx, ebx
// 004d756c  395f04               cmp dword ptr [edi + 4], ebx
// 004d756f  7e47                 jle 0x4d75b8
// 004d7571  55                   push ebp
// 004d7572  56                   push esi
// 004d7573  33ed                 xor ebp, ebp
// 004d7575  8b37                 mov esi, dword ptr [edi]
// 004d7577  03f5                 add esi, ebp
// 004d7579  89742410             mov dword ptr [esp + 0x10], esi
// 004d757d  8b462c               mov eax, dword ptr [esi + 0x2c]
// 004d7580  50                   push eax
// 004d7581  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004d7589  e8522e1100           call 0x5ea3e0
// 004d758e  33c0                 xor eax, eax
// 004d7590  83c404               add esp, 4
// 004d7593  8d4e04               lea ecx, [esi + 4]
// 004d7596  89462c               mov dword ptr [esi + 0x2c], eax
// 004d7599  894630               mov dword ptr [esi + 0x30], eax
// 004d759c  894634               mov dword ptr [esi + 0x34], eax
// 004d759f  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004d75a7  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d75ad  43                   inc ebx
// 004d75ae  83c538               add ebp, 0x38
// 004d75b1  3b5f04               cmp ebx, dword ptr [edi + 4]
// 004d75b4  7cbf                 jl 0x4d7575
// 004d75b6  5e                   pop esi
// 004d75b7  5d                   pop ebp
// 004d75b8  8b0f                 mov ecx, dword ptr [edi]
// 004d75ba  51                   push ecx
// 004d75bb  e8202e1100           call 0x5ea3e0
// 004d75c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d75c4  83c404               add esp, 4
// 004d75c7  33c0                 xor eax, eax
// 004d75c9  8907                 mov dword ptr [edi], eax
// 004d75cb  894704               mov dword ptr [edi + 4], eax
// 004d75ce  894708               mov dword ptr [edi + 8], eax
// 004d75d1  5f                   pop edi
// 004d75d2  5b                   pop ebx
// 004d75d3  64890d00000000       mov dword ptr fs:[0], ecx
// 004d75da  83c410               add esp, 0x10
// 004d75dd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

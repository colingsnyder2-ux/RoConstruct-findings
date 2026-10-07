// roc 2009-06 004acfe0  unit: G3D::Win32Window  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004acfe0
//
// 004acfe0  6aff                 push -1
// 004acfe2  68477f8500           push 0x857f47
// 004acfe7  64a100000000         mov eax, dword ptr fs:[0]
// 004acfed  50                   push eax
// 004acfee  64892500000000       mov dword ptr fs:[0], esp
// 004acff5  81eca4010000         sub esp, 0x1a4
// 004acffb  53                   push ebx
// 004acffc  56                   push esi
// 004acffd  57                   push edi
// 004acffe  8d4c2414             lea ecx, [esp + 0x14]
// 004ad002  ff15c0e48900         call dword ptr [0x89e4c0]
// 004ad008  33f6                 xor esi, esi
// 004ad00a  89742440             mov dword ptr [esp + 0x40], esi
// 004ad00e  89742444             mov dword ptr [esp + 0x44], esi
// 004ad012  8974243c             mov dword ptr [esp + 0x3c], esi
// 004ad016  8bbc24c0010000       mov edi, dword ptr [esp + 0x1c0]
// 004ad01d  8b9c24c4010000       mov ebx, dword ptr [esp + 0x1c4]
// 004ad024  8b03                 mov eax, dword ptr [ebx]
// 004ad026  8b08                 mov ecx, dword ptr [eax]
// 004ad028  56                   push esi
// 004ad029  8d542414             lea edx, [esp + 0x14]
// 004ad02d  52                   push edx
// 004ad02e  8d5704               lea edx, [edi + 4]
// 004ad031  52                   push edx
// 004ad032  50                   push eax
// 004ad033  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004ad036  c78424c801000001000000 mov dword ptr [esp + 0x1c8], 1
// 004ad041  ffd0                 call eax
// 004ad043  85c0                 test eax, eax
// 004ad045  0f85c5000000         jne 0x4ad110
// 004ad04b  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ad04f  8b5310               mov edx, dword ptr [ebx + 0x10]
// 004ad052  8b08                 mov ecx, dword ptr [eax]
// 004ad054  6a06                 push 6
// 004ad056  52                   push edx
// 004ad057  50                   push eax
// 004ad058  8b4134               mov eax, dword ptr [ecx + 0x34]
// 004ad05b  ffd0                 call eax
// 004ad05d  85c0                 test eax, eax
// 004ad05f  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ad063  8b08                 mov ecx, dword ptr [eax]
// 004ad065  7515                 jne 0x4ad07c
// 004ad067  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 004ad06a  68c01f8c00           push 0x8c1fc0
// 004ad06f  50                   push eax
// 004ad070  ffd2                 call edx
// 004ad072  85c0                 test eax, eax
// 004ad074  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ad078  740d                 je 0x4ad087
// 004ad07a  8b08                 mov ecx, dword ptr [eax]
// 004ad07c  8b5108               mov edx, dword ptr [ecx + 8]
// 004ad07f  50                   push eax
// 004ad080  ffd2                 call edx
// 004ad082  e989000000           jmp 0x4ad110
// 004ad087  8d542448             lea edx, [esp + 0x48]
// 004ad08b  c74424482c000000     mov dword ptr [esp + 0x48], 0x2c
// 004ad093  8b08                 mov ecx, dword ptr [eax]
// 004ad095  52                   push edx
// 004ad096  50                   push eax
// 004ad097  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004ad09a  ffd0                 call eax
// 004ad09c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 004ad0a0  81c72c010000         add edi, 0x12c
// 004ad0a6  894c2438             mov dword ptr [esp + 0x38], ecx
// 004ad0aa  57                   push edi
// 004ad0ab  8d4c2418             lea ecx, [esp + 0x18]
// 004ad0af  ff15a8e48900         call dword ptr [0x89e4a8]
// 004ad0b5  bf3c010000           mov edi, 0x13c
// 004ad0ba  8d9b00000000         lea ebx, [ebx]
// 004ad0c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ad0c4  6a01                 push 1
// 004ad0c6  8d0cb500000000       lea ecx, [esi*4]
// 004ad0cd  51                   push ecx
// 004ad0ce  8d4c247c             lea ecx, [esp + 0x7c]
// 004ad0d2  897c247c             mov dword ptr [esp + 0x7c], edi
// 004ad0d6  8b10                 mov edx, dword ptr [eax]
// 004ad0d8  8b5238               mov edx, dword ptr [edx + 0x38]
// 004ad0db  51                   push ecx
// 004ad0dc  50                   push eax
// 004ad0dd  ffd2                 call edx
// 004ad0df  85c0                 test eax, eax
// 004ad0e1  7512                 jne 0x4ad0f5
// 004ad0e3  8d44240c             lea eax, [esp + 0xc]
// 004ad0e7  50                   push eax
// 004ad0e8  8d4c2440             lea ecx, [esp + 0x40]
// 004ad0ec  89742410             mov dword ptr [esp + 0x10], esi
// 004ad0f0  e81bd9ffff           call 0x4aaa10
// 004ad0f5  46                   inc esi
// 004ad0f6  83fe08               cmp esi, 8
// 004ad0f9  7cc5                 jl 0x4ad0c0
// 004ad0fb  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004ad0ff  8d542410             lea edx, [esp + 0x10]
// 004ad103  894c2434             mov dword ptr [esp + 0x34], ecx
// 004ad107  52                   push edx
// 004ad108  8d4b04               lea ecx, [ebx + 4]
// 004ad10b  e8d0fdffff           call 0x4acee0
// 004ad110  8d4c2410             lea ecx, [esp + 0x10]
// 004ad114  c78424b8010000ffffffff mov dword ptr [esp + 0x1b8], 0xffffffff
// 004ad11f  e8fccaffff           call 0x4a9c20
// 004ad124  8b8c24b0010000       mov ecx, dword ptr [esp + 0x1b0]
// 004ad12b  5f                   pop edi
// 004ad12c  5e                   pop esi
// 004ad12d  b801000000           mov eax, 1
// 004ad132  5b                   pop ebx
// 004ad133  64890d00000000       mov dword ptr fs:[0], ecx
// 004ad13a  81c4b0010000         add esp, 0x1b0
// 004ad140  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?enumJoysticksCallback@_DirectInput@_internal@G3D@@CGHPBUDIDEVICEINSTANCEA@3@PAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

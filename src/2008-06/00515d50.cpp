// roc 2008-06 00515d50  unit: G3D::BinaryInput  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00515d50
//
// 00515d50  6aff                 push -1
// 00515d52  683af67c00           push 0x7cf63a
// 00515d57  64a100000000         mov eax, dword ptr fs:[0]
// 00515d5d  50                   push eax
// 00515d5e  64892500000000       mov dword ptr fs:[0], esp
// 00515d65  51                   push ecx
// 00515d66  53                   push ebx
// 00515d67  55                   push ebp
// 00515d68  33c0                 xor eax, eax
// 00515d6a  56                   push esi
// 00515d6b  8bf1                 mov esi, ecx
// 00515d6d  8944240c             mov dword ptr [esp + 0xc], eax
// 00515d71  57                   push edi
// 00515d72  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00515d76  8944241c             mov dword ptr [esp + 0x1c], eax
// 00515d7a  8b4644               mov eax, dword ptr [esi + 0x44]
// 00515d7d  8d0c38               lea ecx, [eax + edi]
// 00515d80  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00515d83  7e0e                 jle 0x515d93
// 00515d85  8b5634               mov edx, dword ptr [esi + 0x34]
// 00515d88  57                   push edi
// 00515d89  03d0                 add edx, eax
// 00515d8b  52                   push edx
// 00515d8c  8bce                 mov ecx, esi
// 00515d8e  e83dfaffff           call 0x5157d0
// 00515d93  8d4701               lea eax, [edi + 1]
// 00515d96  50                   push eax
// 00515d97  e89427ffff           call 0x508530
// 00515d9c  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00515d9f  034e44               add ecx, dword ptr [esi + 0x44]
// 00515da2  57                   push edi
// 00515da3  8be8                 mov ebp, eax
// 00515da5  51                   push ecx
// 00515da6  55                   push ebp
// 00515da7  e834ba1800           call 0x6a17e0
// 00515dac  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00515db0  83c410               add esp, 0x10
// 00515db3  55                   push ebp
// 00515db4  8bcb                 mov ecx, ebx
// 00515db6  c6042f00             mov byte ptr [edi + ebp], 0
// 00515dba  ff1558248000         call dword ptr [0x802458]
// 00515dc0  55                   push ebp
// 00515dc1  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00515dc9  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00515dd1  e82a1fffff           call 0x507d00
// 00515dd6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00515dda  83c404               add esp, 4
// 00515ddd  017e44               add dword ptr [esi + 0x44], edi
// 00515de0  5f                   pop edi
// 00515de1  5e                   pop esi
// 00515de2  5d                   pop ebp
// 00515de3  8bc3                 mov eax, ebx
// 00515de5  5b                   pop ebx
// 00515de6  64890d00000000       mov dword ptr fs:[0], ecx
// 00515ded  83c410               add esp, 0x10
// 00515df0  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?readString@BinaryInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp

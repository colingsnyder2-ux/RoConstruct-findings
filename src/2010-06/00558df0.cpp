// roc 2010-06 00558df0  unit: G3D::BinaryInput  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00558df0
//
// 00558df0  6aff                 push -1
// 00558df2  688af49900           push 0x99f48a
// 00558df7  64a100000000         mov eax, dword ptr fs:[0]
// 00558dfd  50                   push eax
// 00558dfe  64892500000000       mov dword ptr fs:[0], esp
// 00558e05  51                   push ecx
// 00558e06  53                   push ebx
// 00558e07  55                   push ebp
// 00558e08  33c0                 xor eax, eax
// 00558e0a  56                   push esi
// 00558e0b  8bf1                 mov esi, ecx
// 00558e0d  8944240c             mov dword ptr [esp + 0xc], eax
// 00558e11  57                   push edi
// 00558e12  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00558e16  8944241c             mov dword ptr [esp + 0x1c], eax
// 00558e1a  8b4644               mov eax, dword ptr [esi + 0x44]
// 00558e1d  8d0c38               lea ecx, [eax + edi]
// 00558e20  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00558e23  7e0e                 jle 0x558e33
// 00558e25  8b5634               mov edx, dword ptr [esi + 0x34]
// 00558e28  57                   push edi
// 00558e29  03d0                 add edx, eax
// 00558e2b  52                   push edx
// 00558e2c  8bce                 mov ecx, esi
// 00558e2e  e81dfaffff           call 0x558850
// 00558e33  8d4701               lea eax, [edi + 1]
// 00558e36  50                   push eax
// 00558e37  e8641dfbff           call 0x50aba0
// 00558e3c  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00558e3f  034e44               add ecx, dword ptr [esi + 0x44]
// 00558e42  57                   push edi
// 00558e43  8be8                 mov ebp, eax
// 00558e45  51                   push ecx
// 00558e46  55                   push ebp
// 00558e47  e8daff2400           call 0x7a8e26
// 00558e4c  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00558e50  83c410               add esp, 0x10
// 00558e53  55                   push ebp
// 00558e54  8bcb                 mov ecx, ebx
// 00558e56  c6042f00             mov byte ptr [edi + ebp], 0
// 00558e5a  ff1510a49e00         call dword ptr [0x9ea410]
// 00558e60  55                   push ebp
// 00558e61  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00558e69  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00558e71  e83a1dfbff           call 0x50abb0
// 00558e76  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00558e7a  83c404               add esp, 4
// 00558e7d  017e44               add dword ptr [esi + 0x44], edi
// 00558e80  5f                   pop edi
// 00558e81  5e                   pop esi
// 00558e82  5d                   pop ebp
// 00558e83  8bc3                 mov eax, ebx
// 00558e85  5b                   pop ebx
// 00558e86  64890d00000000       mov dword ptr fs:[0], ecx
// 00558e8d  83c410               add esp, 0x10
// 00558e90  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?readString@BinaryInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp

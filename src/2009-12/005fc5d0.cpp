// roc 2009-12 005fc5d0  unit: G3D::TextInput::WrongSymbol  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fc5d0
//
// 005fc5d0  6aff                 push -1
// 005fc5d2  6842fa9300           push 0x93fa42
// 005fc5d7  64a100000000         mov eax, dword ptr fs:[0]
// 005fc5dd  50                   push eax
// 005fc5de  64892500000000       mov dword ptr fs:[0], esp
// 005fc5e5  83ec30               sub esp, 0x30
// 005fc5e8  56                   push esi
// 005fc5e9  8d442408             lea eax, [esp + 8]
// 005fc5ed  50                   push eax
// 005fc5ee  c744240800000000     mov dword ptr [esp + 8], 0
// 005fc5f6  e875ffffff           call 0x5fc570
// 005fc5fb  8b742444             mov esi, dword ptr [esp + 0x44]
// 005fc5ff  50                   push eax
// 005fc600  8bce                 mov ecx, esi
// 005fc602  c744244001000000     mov dword ptr [esp + 0x40], 1
// 005fc60a  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fc610  8d4c2408             lea ecx, [esp + 8]
// 005fc614  c744240401000000     mov dword ptr [esp + 4], 1
// 005fc61c  c644243c00           mov byte ptr [esp + 0x3c], 0
// 005fc621  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc627  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005fc62b  8bc6                 mov eax, esi
// 005fc62d  5e                   pop esi
// 005fc62e  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc635  83c43c               add esp, 0x3c
// 005fc638  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?readString@TextInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp

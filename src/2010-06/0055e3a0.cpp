// roc 2010-06 0055e3a0  unit: G3D::TextInput::WrongSymbol  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055e3a0
//
// 0055e3a0  6aff                 push -1
// 0055e3a2  6842179900           push 0x991742
// 0055e3a7  64a100000000         mov eax, dword ptr fs:[0]
// 0055e3ad  50                   push eax
// 0055e3ae  64892500000000       mov dword ptr fs:[0], esp
// 0055e3b5  83ec30               sub esp, 0x30
// 0055e3b8  56                   push esi
// 0055e3b9  8d442408             lea eax, [esp + 8]
// 0055e3bd  50                   push eax
// 0055e3be  c744240800000000     mov dword ptr [esp + 8], 0
// 0055e3c6  e875ffffff           call 0x55e340
// 0055e3cb  8b742444             mov esi, dword ptr [esp + 0x44]
// 0055e3cf  50                   push eax
// 0055e3d0  8bce                 mov ecx, esi
// 0055e3d2  c744244001000000     mov dword ptr [esp + 0x40], 1
// 0055e3da  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055e3e0  8d4c2408             lea ecx, [esp + 8]
// 0055e3e4  c744240401000000     mov dword ptr [esp + 4], 1
// 0055e3ec  c644243c00           mov byte ptr [esp + 0x3c], 0
// 0055e3f1  ff1500a49e00         call dword ptr [0x9ea400]
// 0055e3f7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0055e3fb  8bc6                 mov eax, esi
// 0055e3fd  5e                   pop esi
// 0055e3fe  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e405  83c43c               add esp, 0x3c
// 0055e408  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?readString@TextInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp

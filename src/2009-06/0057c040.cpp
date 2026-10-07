// roc 2009-06 0057c040  unit: G3D::TextInput::WrongSymbol  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057c040
//
// 0057c040  6aff                 push -1
// 0057c042  68420b8600           push 0x860b42
// 0057c047  64a100000000         mov eax, dword ptr fs:[0]
// 0057c04d  50                   push eax
// 0057c04e  64892500000000       mov dword ptr fs:[0], esp
// 0057c055  83ec30               sub esp, 0x30
// 0057c058  56                   push esi
// 0057c059  8d442408             lea eax, [esp + 8]
// 0057c05d  50                   push eax
// 0057c05e  c744240800000000     mov dword ptr [esp + 8], 0
// 0057c066  e875ffffff           call 0x57bfe0
// 0057c06b  8b742444             mov esi, dword ptr [esp + 0x44]
// 0057c06f  50                   push eax
// 0057c070  8bce                 mov ecx, esi
// 0057c072  c744244001000000     mov dword ptr [esp + 0x40], 1
// 0057c07a  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057c080  8d4c2408             lea ecx, [esp + 8]
// 0057c084  c744240401000000     mov dword ptr [esp + 4], 1
// 0057c08c  c644243c00           mov byte ptr [esp + 0x3c], 0
// 0057c091  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057c097  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057c09b  8bc6                 mov eax, esi
// 0057c09d  5e                   pop esi
// 0057c09e  64890d00000000       mov dword ptr fs:[0], ecx
// 0057c0a5  83c43c               add esp, 0x3c
// 0057c0a8  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?readString@TextInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp

// roc 2008-06 00512ed0  unit: G3D::GCamera  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512ed0
//
// 00512ed0  6aff                 push -1
// 00512ed2  6809e77c00           push 0x7ce709
// 00512ed7  64a100000000         mov eax, dword ptr fs:[0]
// 00512edd  50                   push eax
// 00512ede  64892500000000       mov dword ptr fs:[0], esp
// 00512ee5  83ec1c               sub esp, 0x1c
// 00512ee8  53                   push ebx
// 00512ee9  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00512eed  56                   push esi
// 00512eee  8d442408             lea eax, [esp + 8]
// 00512ef2  50                   push eax
// 00512ef3  8bf1                 mov esi, ecx
// 00512ef5  e826f5ffff           call 0x512420
// 00512efa  83c404               add esp, 4
// 00512efd  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00512f01  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00512f09  7205                 jb 0x512f10
// 00512f0b  8b4004               mov eax, dword ptr [eax + 4]
// 00512f0e  eb03                 jmp 0x512f13
// 00512f10  83c004               add eax, 4
// 00512f13  50                   push eax
// 00512f14  68fc878200           push 0x8287fc
// 00512f19  56                   push esi
// 00512f1a  e891ffffff           call 0x512eb0
// 00512f1f  83c40c               add esp, 0xc
// 00512f22  8d4c2408             lea ecx, [esp + 8]
// 00512f26  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00512f2e  ff1568248000         call dword ptr [0x802468]
// 00512f34  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00512f38  5e                   pop esi
// 00512f39  5b                   pop ebx
// 00512f3a  64890d00000000       mov dword ptr fs:[0], ecx
// 00512f41  83c428               add esp, 0x28
// 00512f44  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeString@TextOutput@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp

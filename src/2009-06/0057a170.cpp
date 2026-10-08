// from server: 100% by auto
// roc 2009-06 0057a170  unit: G3D::LineSegment  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a170
//
// 0057a170  6aff                 push -1
// 0057a172  68d9b88500           push 0x85b8d9
// 0057a177  64a100000000         mov eax, dword ptr fs:[0]
// 0057a17d  50                   push eax
// 0057a17e  64892500000000       mov dword ptr fs:[0], esp
// 0057a185  83ec1c               sub esp, 0x1c
// 0057a188  53                   push ebx
// 0057a189  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0057a18d  56                   push esi
// 0057a18e  8d442408             lea eax, [esp + 8]
// 0057a192  50                   push eax
// 0057a193  8bf1                 mov esi, ecx
// 0057a195  e8d6f4ffff           call 0x579670
// 0057a19a  83c404               add esp, 4
// 0057a19d  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0057a1a1  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0057a1a9  7205                 jb 0x57a1b0
// 0057a1ab  8b4004               mov eax, dword ptr [eax + 4]
// 0057a1ae  eb03                 jmp 0x57a1b3
// 0057a1b0  83c004               add eax, 4
// 0057a1b3  50                   push eax
// 0057a1b4  6884ba8c00           push 0x8cba84
// 0057a1b9  56                   push esi
// 0057a1ba  e891ffffff           call 0x57a150
// 0057a1bf  83c40c               add esp, 0xc
// 0057a1c2  8d4c2408             lea ecx, [esp + 8]
// 0057a1c6  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0057a1ce  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057a1d4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057a1d8  5e                   pop esi
// 0057a1d9  5b                   pop ebx
// 0057a1da  64890d00000000       mov dword ptr fs:[0], ecx
// 0057a1e1  83c428               add esp, 0x28
// 0057a1e4  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeString@TextOutput@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp

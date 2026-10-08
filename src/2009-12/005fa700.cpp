// roc 2009-12 005fa700  unit: G3D::LineSegment  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fa700
//
// 005fa700  6aff                 push -1
// 005fa702  68a9e59200           push 0x92e5a9
// 005fa707  64a100000000         mov eax, dword ptr fs:[0]
// 005fa70d  50                   push eax
// 005fa70e  64892500000000       mov dword ptr fs:[0], esp
// 005fa715  83ec1c               sub esp, 0x1c
// 005fa718  53                   push ebx
// 005fa719  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005fa71d  56                   push esi
// 005fa71e  8d442408             lea eax, [esp + 8]
// 005fa722  50                   push eax
// 005fa723  8bf1                 mov esi, ecx
// 005fa725  e836f5ffff           call 0x5f9c60
// 005fa72a  83c404               add esp, 4
// 005fa72d  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005fa731  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005fa739  7205                 jb 0x5fa740
// 005fa73b  8b4004               mov eax, dword ptr [eax + 4]
// 005fa73e  eb03                 jmp 0x5fa743
// 005fa740  83c004               add eax, 4
// 005fa743  50                   push eax
// 005fa744  68f4289c00           push 0x9c28f4
// 005fa749  56                   push esi
// 005fa74a  e891ffffff           call 0x5fa6e0
// 005fa74f  83c40c               add esp, 0xc
// 005fa752  8d4c2408             lea ecx, [esp + 8]
// 005fa756  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005fa75e  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fa764  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005fa768  5e                   pop esi
// 005fa769  5b                   pop ebx
// 005fa76a  64890d00000000       mov dword ptr fs:[0], ecx
// 005fa771  83c428               add esp, 0x28
// 005fa774  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeString@TextOutput@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp

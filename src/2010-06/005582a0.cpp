// from server: 100% by auto
// roc 2010-06 005582a0  unit: seg_00550000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005582a0
//
// 005582a0  6aff                 push -1
// 005582a2  68095b9800           push 0x985b09
// 005582a7  64a100000000         mov eax, dword ptr fs:[0]
// 005582ad  50                   push eax
// 005582ae  64892500000000       mov dword ptr fs:[0], esp
// 005582b5  83ec1c               sub esp, 0x1c
// 005582b8  53                   push ebx
// 005582b9  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005582bd  56                   push esi
// 005582be  8d442408             lea eax, [esp + 8]
// 005582c2  50                   push eax
// 005582c3  8bf1                 mov esi, ecx
// 005582c5  e836f5ffff           call 0x557800
// 005582ca  83c404               add esp, 4
// 005582cd  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005582d1  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005582d9  7205                 jb 0x5582e0
// 005582db  8b4004               mov eax, dword ptr [eax + 4]
// 005582de  eb03                 jmp 0x5582e3
// 005582e0  83c004               add eax, 4
// 005582e3  50                   push eax
// 005582e4  68b408a200           push 0xa208b4
// 005582e9  56                   push esi
// 005582ea  e891ffffff           call 0x558280
// 005582ef  83c40c               add esp, 0xc
// 005582f2  8d4c2408             lea ecx, [esp + 8]
// 005582f6  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005582fe  ff1500a49e00         call dword ptr [0x9ea400]
// 00558304  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00558308  5e                   pop esi
// 00558309  5b                   pop ebx
// 0055830a  64890d00000000       mov dword ptr fs:[0], ecx
// 00558311  83c428               add esp, 0x28
// 00558314  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeString@TextOutput@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp

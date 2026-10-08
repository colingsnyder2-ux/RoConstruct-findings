// roc 2009-06 006b6330  unit: RBX::Unlocked  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b6330
//
// 006b6330  6aff                 push -1
// 006b6332  6838078700           push 0x870738
// 006b6337  64a100000000         mov eax, dword ptr fs:[0]
// 006b633d  50                   push eax
// 006b633e  64892500000000       mov dword ptr fs:[0], esp
// 006b6345  83ec14               sub esp, 0x14
// 006b6348  56                   push esi
// 006b6349  8bf1                 mov esi, ecx
// 006b634b  8b4618               mov eax, dword ptr [esi + 0x18]
// 006b634e  50                   push eax
// 006b634f  8d4c2408             lea ecx, [esp + 8]
// 006b6353  e8388e0200           call 0x6df190
// 006b6358  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006b635c  8b442428             mov eax, dword ptr [esp + 0x28]
// 006b6360  51                   push ecx
// 006b6361  8d542408             lea edx, [esp + 8]
// 006b6365  52                   push edx
// 006b6366  50                   push eax
// 006b6367  8bce                 mov ecx, esi
// 006b6369  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 006b6371  e8dafdffff           call 0x6b6150
// 006b6376  8d4c2404             lea ecx, [esp + 4]
// 006b637a  8bf0                 mov esi, eax
// 006b637c  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 006b6384  e8b7fbffff           call 0x6b5f40
// 006b6389  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b638d  8bc6                 mov eax, esi
// 006b638f  5e                   pop esi
// 006b6390  64890d00000000       mov dword ptr fs:[0], ecx
// 006b6397  83c420               add esp, 0x20
// 006b639a  c20800               ret 8
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getPartByLocalCharacter@MouseCommand@RBX@@QAEPAVPartInstance@2@ABVUIEvent@2@AAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp

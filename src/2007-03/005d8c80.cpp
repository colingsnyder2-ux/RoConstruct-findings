// roc 2007-03 005d8c80  unit: seg_005d0000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d8c80
//
// 005d8c80  6aff                 push -1
// 005d8c82  6898b87500           push 0x75b898
// 005d8c87  64a100000000         mov eax, dword ptr fs:[0]
// 005d8c8d  50                   push eax
// 005d8c8e  64892500000000       mov dword ptr fs:[0], esp
// 005d8c95  83ec14               sub esp, 0x14
// 005d8c98  56                   push esi
// 005d8c99  8bf1                 mov esi, ecx
// 005d8c9b  8b4618               mov eax, dword ptr [esi + 0x18]
// 005d8c9e  50                   push eax
// 005d8c9f  8d4c2408             lea ecx, [esp + 8]
// 005d8ca3  e8486b0300           call 0x60f7f0
// 005d8ca8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005d8cac  8b442428             mov eax, dword ptr [esp + 0x28]
// 005d8cb0  51                   push ecx
// 005d8cb1  8d542408             lea edx, [esp + 8]
// 005d8cb5  52                   push edx
// 005d8cb6  50                   push eax
// 005d8cb7  8bce                 mov ecx, esi
// 005d8cb9  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005d8cc1  e88afeffff           call 0x5d8b50
// 005d8cc6  8d4c2404             lea ecx, [esp + 4]
// 005d8cca  8bf0                 mov esi, eax
// 005d8ccc  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 005d8cd4  e8c7faffff           call 0x5d87a0
// 005d8cd9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005d8cdd  8bc6                 mov eax, esi
// 005d8cdf  5e                   pop esi
// 005d8ce0  64890d00000000       mov dword ptr fs:[0], ecx
// 005d8ce7  83c420               add esp, 0x20
// 005d8cea  c20800               ret 8
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getPartByLocalCharacter@MouseCommand@RBX@@QAEPAVPartInstance@2@ABVUIEvent@2@AAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp

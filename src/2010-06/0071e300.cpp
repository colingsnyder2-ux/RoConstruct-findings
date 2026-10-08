// roc 2010-06 0071e300  unit: RBX::Unlocked  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071e300
//
// 0071e300  6aff                 push -1
// 0071e302  6848859a00           push 0x9a8548
// 0071e307  64a100000000         mov eax, dword ptr fs:[0]
// 0071e30d  50                   push eax
// 0071e30e  64892500000000       mov dword ptr fs:[0], esp
// 0071e315  83ec14               sub esp, 0x14
// 0071e318  56                   push esi
// 0071e319  8bf1                 mov esi, ecx
// 0071e31b  8b4618               mov eax, dword ptr [esi + 0x18]
// 0071e31e  50                   push eax
// 0071e31f  8d4c2408             lea ecx, [esp + 8]
// 0071e323  e8d86a0400           call 0x764e00
// 0071e328  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0071e32c  8b442428             mov eax, dword ptr [esp + 0x28]
// 0071e330  51                   push ecx
// 0071e331  8d542408             lea edx, [esp + 8]
// 0071e335  52                   push edx
// 0071e336  50                   push eax
// 0071e337  8bce                 mov ecx, esi
// 0071e339  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0071e341  e8bafdffff           call 0x71e100
// 0071e346  8d4c2404             lea ecx, [esp + 4]
// 0071e34a  8bf0                 mov esi, eax
// 0071e34c  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0071e354  e847fbffff           call 0x71dea0
// 0071e359  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0071e35d  8bc6                 mov eax, esi
// 0071e35f  5e                   pop esi
// 0071e360  64890d00000000       mov dword ptr fs:[0], ecx
// 0071e367  83c420               add esp, 0x20
// 0071e36a  c20800               ret 8
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getPartByLocalCharacter@MouseCommand@RBX@@QAEPAVPartInstance@2@ABVUIEvent@2@AAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp

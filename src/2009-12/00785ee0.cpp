// roc 2009-12 00785ee0  unit: RBX::Unlocked  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00785ee0
//
// 00785ee0  6aff                 push -1
// 00785ee2  68e83a9500           push 0x953ae8
// 00785ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00785eed  50                   push eax
// 00785eee  64892500000000       mov dword ptr fs:[0], esp
// 00785ef5  83ec14               sub esp, 0x14
// 00785ef8  56                   push esi
// 00785ef9  8bf1                 mov esi, ecx
// 00785efb  8b4618               mov eax, dword ptr [esi + 0x18]
// 00785efe  50                   push eax
// 00785eff  8d4c2408             lea ecx, [esp + 8]
// 00785f03  e8c8790300           call 0x7bd8d0
// 00785f08  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00785f0c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00785f10  51                   push ecx
// 00785f11  8d542408             lea edx, [esp + 8]
// 00785f15  52                   push edx
// 00785f16  50                   push eax
// 00785f17  8bce                 mov ecx, esi
// 00785f19  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00785f21  e8bafdffff           call 0x785ce0
// 00785f26  8d4c2404             lea ecx, [esp + 4]
// 00785f2a  8bf0                 mov esi, eax
// 00785f2c  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00785f34  e847fbffff           call 0x785a80
// 00785f39  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00785f3d  8bc6                 mov eax, esi
// 00785f3f  5e                   pop esi
// 00785f40  64890d00000000       mov dword ptr fs:[0], ecx
// 00785f47  83c420               add esp, 0x20
// 00785f4a  c20800               ret 8
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getPartByLocalCharacter@MouseCommand@RBX@@QAEPAVPartInstance@2@ABVUIEvent@2@AAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp

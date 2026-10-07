// roc 2008-06 00518110  unit: G3D::TextInput::WrongSymbol  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00518110
//
// 00518110  6aff                 push -1
// 00518112  6832c87c00           push 0x7cc832
// 00518117  64a100000000         mov eax, dword ptr fs:[0]
// 0051811d  50                   push eax
// 0051811e  64892500000000       mov dword ptr fs:[0], esp
// 00518125  83ec30               sub esp, 0x30
// 00518128  56                   push esi
// 00518129  8d442408             lea eax, [esp + 8]
// 0051812d  50                   push eax
// 0051812e  c744240800000000     mov dword ptr [esp + 8], 0
// 00518136  e875ffffff           call 0x5180b0
// 0051813b  8b742444             mov esi, dword ptr [esp + 0x44]
// 0051813f  50                   push eax
// 00518140  8bce                 mov ecx, esi
// 00518142  c744244001000000     mov dword ptr [esp + 0x40], 1
// 0051814a  ff155c248000         call dword ptr [0x80245c]
// 00518150  8d4c2408             lea ecx, [esp + 8]
// 00518154  c744240401000000     mov dword ptr [esp + 4], 1
// 0051815c  c644243c00           mov byte ptr [esp + 0x3c], 0
// 00518161  ff1568248000         call dword ptr [0x802468]
// 00518167  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0051816b  8bc6                 mov eax, esi
// 0051816d  5e                   pop esi
// 0051816e  64890d00000000       mov dword ptr fs:[0], ecx
// 00518175  83c43c               add esp, 0x3c
// 00518178  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?readString@TextInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp

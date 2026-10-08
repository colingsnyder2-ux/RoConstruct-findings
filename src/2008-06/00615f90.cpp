// roc 2008-06 00615f90  unit: RBX::Unlocked  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00615f90
//
// 00615f90  6aff                 push -1
// 00615f92  68a88f7d00           push 0x7d8fa8
// 00615f97  64a100000000         mov eax, dword ptr fs:[0]
// 00615f9d  50                   push eax
// 00615f9e  64892500000000       mov dword ptr fs:[0], esp
// 00615fa5  83ec14               sub esp, 0x14
// 00615fa8  56                   push esi
// 00615fa9  8bf1                 mov esi, ecx
// 00615fab  8b4618               mov eax, dword ptr [esi + 0x18]
// 00615fae  50                   push eax
// 00615faf  8d4c2408             lea ecx, [esp + 8]
// 00615fb3  e8c8a30400           call 0x660380
// 00615fb8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00615fbc  8b442428             mov eax, dword ptr [esp + 0x28]
// 00615fc0  51                   push ecx
// 00615fc1  8d542408             lea edx, [esp + 8]
// 00615fc5  52                   push edx
// 00615fc6  50                   push eax
// 00615fc7  8bce                 mov ecx, esi
// 00615fc9  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00615fd1  e8bafdffff           call 0x615d90
// 00615fd6  8d4c2404             lea ecx, [esp + 4]
// 00615fda  8bf0                 mov esi, eax
// 00615fdc  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00615fe4  e897fbffff           call 0x615b80
// 00615fe9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00615fed  8bc6                 mov eax, esi
// 00615fef  5e                   pop esi
// 00615ff0  64890d00000000       mov dword ptr fs:[0], ecx
// 00615ff7  83c420               add esp, 0x20
// 00615ffa  c20800               ret 8
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getPartByLocalCharacter@MouseCommand@RBX@@QAEPAVPartInstance@2@ABVUIEvent@2@AAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp

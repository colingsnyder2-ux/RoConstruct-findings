// roc 2007-03 005a9c80  unit: seg_005a0000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a9c80
//
// 005a9c80  8b442404             mov eax, dword ptr [esp + 4]
// 005a9c84  56                   push esi
// 005a9c85  50                   push eax
// 005a9c86  6a01                 push 1
// 005a9c88  8bf1                 mov esi, ecx
// 005a9c8a  e8c1f3ffff           call 0x5a9050
// 005a9c8f  68f0f38b00           push 0x8bf3f0
// 005a9c94  8bce                 mov ecx, esi
// 005a9c96  e8a5a1e9ff           call 0x443e40
// 005a9c9b  5e                   pop esi
// 005a9c9c  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart1@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp

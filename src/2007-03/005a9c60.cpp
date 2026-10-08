// roc 2007-03 005a9c60  unit: seg_005a0000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a9c60
//
// 005a9c60  8b442404             mov eax, dword ptr [esp + 4]
// 005a9c64  56                   push esi
// 005a9c65  50                   push eax
// 005a9c66  6a00                 push 0
// 005a9c68  8bf1                 mov esi, ecx
// 005a9c6a  e8e1f3ffff           call 0x5a9050
// 005a9c6f  6810f48b00           push 0x8bf410
// 005a9c74  8bce                 mov ecx, esi
// 005a9c76  e8c5a1e9ff           call 0x443e40
// 005a9c7b  5e                   pop esi
// 005a9c7c  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart0@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp

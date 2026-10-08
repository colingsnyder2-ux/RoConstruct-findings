// roc 2008-06 005a01e0  unit: RBX::Workspace  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a01e0
//
// 005a01e0  8b442404             mov eax, dword ptr [esp + 4]
// 005a01e4  6a00                 push 0
// 005a01e6  68709f9300           push 0x939f70
// 005a01eb  687c909200           push 0x92907c
// 005a01f0  6a00                 push 0
// 005a01f2  50                   push eax
// 005a01f3  e8ce151000           call 0x6a17c6
// 005a01f8  83c414               add esp, 0x14
// 005a01fb  f7d8                 neg eax
// 005a01fd  1bc0                 sbb eax, eax
// 005a01ff  f7d8                 neg eax
// 005a0201  c20400               ret 4
// library rbxgs/v8datamodel\Workspace.cpp (function ?askAddChild@Workspace@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp

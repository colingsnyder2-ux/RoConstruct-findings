// roc 2007-08 0057aa90  unit: RBX::Workspace  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057aa90
//
// 0057aa90  8b442404             mov eax, dword ptr [esp + 4]
// 0057aa94  6a00                 push 0
// 0057aa96  68e88e8900           push 0x898ee8
// 0057aa9b  684c1f8800           push 0x881f4c
// 0057aaa0  6a00                 push 0
// 0057aaa2  50                   push eax
// 0057aaa3  e88e620b00           call 0x630d36
// 0057aaa8  83c414               add esp, 0x14
// 0057aaab  f7d8                 neg eax
// 0057aaad  1bc0                 sbb eax, eax
// 0057aaaf  f7d8                 neg eax
// 0057aab1  c20400               ret 4
// library rbxgs/v8datamodel\Workspace.cpp (function ?askAddChild@Workspace@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp

// roc 2007-03 0057a9a0  unit: seg_00570000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057a9a0
//
// 0057a9a0  8b442404             mov eax, dword ptr [esp + 4]
// 0057a9a4  6a00                 push 0
// 0057a9a6  68c4768900           push 0x8976c4
// 0057a9ab  6864108800           push 0x881064
// 0057a9b0  6a00                 push 0
// 0057a9b2  50                   push eax
// 0057a9b3  e80e480a00           call 0x61f1c6
// 0057a9b8  83c414               add esp, 0x14
// 0057a9bb  f7d8                 neg eax
// 0057a9bd  1bc0                 sbb eax, eax
// 0057a9bf  f7d8                 neg eax
// 0057a9c1  c20400               ret 4
// library rbxgs/v8datamodel\Workspace.cpp (function ?askAddChild@Workspace@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp

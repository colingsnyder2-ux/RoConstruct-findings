// roc 2009-12 0040f910  unit: ChatEnter  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040f910
//
// 0040f910  8b442404             mov eax, dword ptr [esp + 4]
// 0040f914  6a00                 push 0
// 0040f916  68b028b000           push 0xb028b0
// 0040f91b  6840feaf00           push 0xaffe40
// 0040f920  6a00                 push 0
// 0040f922  50                   push eax
// 0040f923  e882513e00           call 0x7f4aaa
// 0040f928  83c414               add esp, 0x14
// 0040f92b  f7d8                 neg eax
// 0040f92d  1bc0                 sbb eax, eax
// 0040f92f  f7d8                 neg eax
// 0040f931  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?askAddChild@GuiItem@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

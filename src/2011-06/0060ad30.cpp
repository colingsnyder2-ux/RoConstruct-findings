// roc 2011-06 0060ad30  unit: RBX::Humanoid  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060ad30
//
// 0060ad30  8b442404             mov eax, dword ptr [esp + 4]
// 0060ad34  6a00                 push 0
// 0060ad36  6834a9c100           push 0xc1a934
// 0060ad3b  68f871c000           push 0xc071f8
// 0060ad40  6a00                 push 0
// 0060ad42  50                   push eax
// 0060ad43  e8a2052000           call 0x80b2ea
// 0060ad48  83c414               add esp, 0x14
// 0060ad4b  f7d8                 neg eax
// 0060ad4d  1bc0                 sbb eax, eax
// 0060ad4f  f7d8                 neg eax
// 0060ad51  c20400               ret 4
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?askSetParent@ModelInstance@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp

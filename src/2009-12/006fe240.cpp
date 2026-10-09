// roc 2009-12 006fe240  unit: RBX::Humanoid  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fe240
//
// 006fe240  8b442404             mov eax, dword ptr [esp + 4]
// 006fe244  6a00                 push 0
// 006fe246  6840abb000           push 0xb0ab40
// 006fe24b  6840feaf00           push 0xaffe40
// 006fe250  6a00                 push 0
// 006fe252  50                   push eax
// 006fe253  e852680f00           call 0x7f4aaa
// 006fe258  83c414               add esp, 0x14
// 006fe25b  f7d8                 neg eax
// 006fe25d  1bc0                 sbb eax, eax
// 006fe25f  f7d8                 neg eax
// 006fe261  c20400               ret 4
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?askSetParent@ModelInstance@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp

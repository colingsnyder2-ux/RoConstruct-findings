// roc 2009-12 0068e140  unit: RBX::StarterGear  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068e140
//
// 0068e140  8b442404             mov eax, dword ptr [esp + 4]
// 0068e144  6a00                 push 0
// 0068e146  687069b300           push 0xb36970
// 0068e14b  6840feaf00           push 0xaffe40
// 0068e150  6a00                 push 0
// 0068e152  50                   push eax
// 0068e153  e852691600           call 0x7f4aaa
// 0068e158  83c414               add esp, 0x14
// 0068e15b  f7d8                 neg eax
// 0068e15d  1bc0                 sbb eax, eax
// 0068e15f  f7d8                 neg eax
// 0068e161  c20400               ret 4
// library rbxgs/v8datamodel\Hopper.cpp (function ?askAddChild@Hopper@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp

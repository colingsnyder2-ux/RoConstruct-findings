// roc 2007-03 0059cb10  unit: seg_00590000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059cb10
//
// 0059cb10  8b442404             mov eax, dword ptr [esp + 4]
// 0059cb14  6a00                 push 0
// 0059cb16  68b4358a00           push 0x8a35b4
// 0059cb1b  6864108800           push 0x881064
// 0059cb20  6a00                 push 0
// 0059cb22  50                   push eax
// 0059cb23  e89e260800           call 0x61f1c6
// 0059cb28  83c414               add esp, 0x14
// 0059cb2b  f7d8                 neg eax
// 0059cb2d  1bc0                 sbb eax, eax
// 0059cb2f  f7d8                 neg eax
// 0059cb31  c20400               ret 4
// library rbxgs/v8datamodel\Hopper.cpp (function ?askAddChild@Hopper@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp

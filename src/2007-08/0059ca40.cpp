// roc 2007-08 0059ca40  unit: RBX::VStarterPackService::?$FactoryProduct  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059ca40
//
// 0059ca40  8b442404             mov eax, dword ptr [esp + 4]
// 0059ca44  6a00                 push 0
// 0059ca46  68c4658a00           push 0x8a65c4
// 0059ca4b  684c1f8800           push 0x881f4c
// 0059ca50  6a00                 push 0
// 0059ca52  50                   push eax
// 0059ca53  e8de420900           call 0x630d36
// 0059ca58  83c414               add esp, 0x14
// 0059ca5b  f7d8                 neg eax
// 0059ca5d  1bc0                 sbb eax, eax
// 0059ca5f  f7d8                 neg eax
// 0059ca61  c20400               ret 4
// library rbxgs/v8datamodel\Hopper.cpp (function ?askAddChild@Hopper@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp

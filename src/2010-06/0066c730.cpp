// roc 2010-06 0066c730  unit: RBX::Humanoid  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066c730
//
// 0066c730  8b442404             mov eax, dword ptr [esp + 4]
// 0066c734  6a00                 push 0
// 0066c736  687846b800           push 0xb84678
// 0066c73b  68408eb700           push 0xb78e40
// 0066c740  6a00                 push 0
// 0066c742  50                   push eax
// 0066c743  e8a2c41300           call 0x7a8bea
// 0066c748  83c414               add esp, 0x14
// 0066c74b  f7d8                 neg eax
// 0066c74d  1bc0                 sbb eax, eax
// 0066c74f  f7d8                 neg eax
// 0066c751  c20400               ret 4
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?askSetParent@ModelInstance@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp

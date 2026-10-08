// roc 2007-08 0054a500  unit: RBX::ServiceProvider  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054a500
//
// 0054a500  8b442404             mov eax, dword ptr [esp + 4]
// 0054a504  6a00                 push 0
// 0054a506  689c468800           push 0x88469c
// 0054a50b  684c1f8800           push 0x881f4c
// 0054a510  6a00                 push 0
// 0054a512  50                   push eax
// 0054a513  e81e680e00           call 0x630d36
// 0054a518  83c414               add esp, 0x14
// 0054a51b  f7d8                 neg eax
// 0054a51d  1bc0                 sbb eax, eax
// 0054a51f  f7d8                 neg eax
// 0054a521  c20400               ret 4
// library rbxgs/v8tree\Service.cpp (function ?askAddChild@ServiceProvider@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Service.cpp

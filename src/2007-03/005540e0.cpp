// roc 2007-03 005540e0  unit: seg_00550000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005540e0
//
// 005540e0  8b442404             mov eax, dword ptr [esp + 4]
// 005540e4  6a00                 push 0
// 005540e6  6854388800           push 0x883854
// 005540eb  6864108800           push 0x881064
// 005540f0  6a00                 push 0
// 005540f2  50                   push eax
// 005540f3  e8ceb00c00           call 0x61f1c6
// 005540f8  83c414               add esp, 0x14
// 005540fb  f7d8                 neg eax
// 005540fd  1bc0                 sbb eax, eax
// 005540ff  f7d8                 neg eax
// 00554101  c20400               ret 4
// library rbxgs/v8tree\Service.cpp (function ?askAddChild@ServiceProvider@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Service.cpp

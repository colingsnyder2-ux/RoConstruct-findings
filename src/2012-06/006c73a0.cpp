// roc 2012-06 006c73a0  unit: RBX::ServiceProvider  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006c73a0
//
// 006c73a0  8b442404             mov eax, dword ptr [esp + 4]
// 006c73a4  6a00                 push 0
// 006c73a6  68102dd600           push 0xd62d10
// 006c73ab  68e801d600           push 0xd601e8
// 006c73b0  6a00                 push 0
// 006c73b2  50                   push eax
// 006c73b3  e890c02b00           call 0x983448
// 006c73b8  83c414               add esp, 0x14
// 006c73bb  f7d8                 neg eax
// 006c73bd  1bc0                 sbb eax, eax
// 006c73bf  f7d8                 neg eax
// 006c73c1  c20400               ret 4
// library rbxgs/v8tree\Service.cpp (function ?askAddChild@ServiceProvider@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Service.cpp

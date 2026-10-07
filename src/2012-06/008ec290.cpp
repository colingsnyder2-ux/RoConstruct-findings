// roc 2012-06 008ec290  unit: RBX::VLuaDragger::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008ec290
//
// 008ec290  56                   push esi
// 008ec291  8b31                 mov esi, dword ptr [ecx]
// 008ec293  85f6                 test esi, esi
// 008ec295  7410                 je 0x8ec2a7
// 008ec297  8bce                 mov ecx, esi
// 008ec299  e882920600           call 0x955520
// 008ec29e  56                   push esi
// 008ec29f  e8705e0900           call 0x982114
// 008ec2a4  83c404               add esp, 4
// 008ec2a7  5e                   pop esi
// 008ec2a8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp

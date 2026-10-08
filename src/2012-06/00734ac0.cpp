// from server: 100% by auto
// roc 2012-06 00734ac0  unit: RBX::Frame::W4Style::?$EnumDesc  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00734ac0
//
// 00734ac0  56                   push esi
// 00734ac1  8b31                 mov esi, dword ptr [ecx]
// 00734ac3  85f6                 test esi, esi
// 00734ac5  7410                 je 0x734ad7
// 00734ac7  8bce                 mov ecx, esi
// 00734ac9  e822fdffff           call 0x7347f0
// 00734ace  56                   push esi
// 00734acf  e840d62400           call 0x982114
// 00734ad4  83c404               add esp, 4
// 00734ad7  5e                   pop esi
// 00734ad8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp

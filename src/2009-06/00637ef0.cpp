// from server: 100% by auto
// roc 2009-06 00637ef0  unit: RBX::VScriptContext::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00637ef0
//
// 00637ef0  56                   push esi
// 00637ef1  8b31                 mov esi, dword ptr [ecx]
// 00637ef3  85f6                 test esi, esi
// 00637ef5  7410                 je 0x637f07
// 00637ef7  8bce                 mov ecx, esi
// 00637ef9  e8d2f5ffff           call 0x6374d0
// 00637efe  56                   push esi
// 00637eff  e82e0b0e00           call 0x718a32
// 00637f04  83c404               add esp, 4
// 00637f07  5e                   pop esi
// 00637f08  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp

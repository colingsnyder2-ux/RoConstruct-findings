// from server: 100% by auto
// roc 2011-06 0071bcb0  unit: RBX::VLuaDragger::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071bcb0
//
// 0071bcb0  56                   push esi
// 0071bcb1  8b31                 mov esi, dword ptr [ecx]
// 0071bcb3  85f6                 test esi, esi
// 0071bcb5  7410                 je 0x71bcc7
// 0071bcb7  8bce                 mov ecx, esi
// 0071bcb9  e822db0900           call 0x7b97e0
// 0071bcbe  56                   push esi
// 0071bcbf  e894e30e00           call 0x80a058
// 0071bcc4  83c404               add esp, 4
// 0071bcc7  5e                   pop esi
// 0071bcc8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp

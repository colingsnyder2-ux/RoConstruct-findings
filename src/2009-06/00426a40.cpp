// roc 2009-06 00426a40  unit: boost::any::H::?$holder  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00426a40
//
// 00426a40  56                   push esi
// 00426a41  8b31                 mov esi, dword ptr [ecx]
// 00426a43  85f6                 test esi, esi
// 00426a45  7410                 je 0x426a57
// 00426a47  8bce                 mov ecx, esi
// 00426a49  e872fcffff           call 0x4266c0
// 00426a4e  56                   push esi
// 00426a4f  e8de1f2f00           call 0x718a32
// 00426a54  83c404               add esp, 4
// 00426a57  5e                   pop esi
// 00426a58  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp

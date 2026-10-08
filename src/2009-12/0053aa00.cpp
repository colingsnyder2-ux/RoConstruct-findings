// roc 2009-12 0053aa00  unit: G3D::VRay::?$holder  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053aa00
//
// 0053aa00  56                   push esi
// 0053aa01  8b31                 mov esi, dword ptr [ecx]
// 0053aa03  85f6                 test esi, esi
// 0053aa05  7410                 je 0x53aa17
// 0053aa07  8bce                 mov ecx, esi
// 0053aa09  e8628cedff           call 0x413670
// 0053aa0e  56                   push esi
// 0053aa0f  e8468e2b00           call 0x7f385a
// 0053aa14  83c404               add esp, 4
// 0053aa17  5e                   pop esi
// 0053aa18  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp

// roc 2008-06 0042d960  unit: boost::any::H::?$holder  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042d960
//
// 0042d960  56                   push esi
// 0042d961  8b31                 mov esi, dword ptr [ecx]
// 0042d963  85f6                 test esi, esi
// 0042d965  7410                 je 0x42d977
// 0042d967  8bce                 mov ecx, esi
// 0042d969  e8c2fcffff           call 0x42d630
// 0042d96e  56                   push esi
// 0042d96f  e8062d2700           call 0x6a067a
// 0042d974  83c404               add esp, 4
// 0042d977  5e                   pop esi
// 0042d978  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp

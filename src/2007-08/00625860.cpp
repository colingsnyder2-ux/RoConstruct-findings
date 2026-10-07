// roc 2007-08 00625860  unit: RBX::PartDragTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00625860
//
// 00625860  56                   push esi
// 00625861  8b31                 mov esi, dword ptr [ecx]
// 00625863  85f6                 test esi, esi
// 00625865  7410                 je 0x625877
// 00625867  8bce                 mov ecx, esi
// 00625869  e8f2590000           call 0x62b260
// 0062586e  56                   push esi
// 0062586f  e8eea30000           call 0x62fc62
// 00625874  83c404               add esp, 4
// 00625877  5e                   pop esi
// 00625878  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp

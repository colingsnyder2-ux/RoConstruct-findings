// from server: 100% by auto
// roc 2011-06 00786730  unit: RBX::ResizeTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00786730
//
// 00786730  56                   push esi
// 00786731  8b31                 mov esi, dword ptr [ecx]
// 00786733  85f6                 test esi, esi
// 00786735  7410                 je 0x786747
// 00786737  8bce                 mov ecx, esi
// 00786739  e8c27efdff           call 0x75e600
// 0078673e  56                   push esi
// 0078673f  e814390800           call 0x80a058
// 00786744  83c404               add esp, 4
// 00786747  5e                   pop esi
// 00786748  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp

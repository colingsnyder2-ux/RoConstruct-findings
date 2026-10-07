// roc 2012-06 007934a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007934a0
//
// 007934a0  56                   push esi
// 007934a1  8b31                 mov esi, dword ptr [ecx]
// 007934a3  85f6                 test esi, esi
// 007934a5  742e                 je 0x7934d5
// 007934a7  8b4604               mov eax, dword ptr [esi + 4]
// 007934aa  85c0                 test eax, eax
// 007934ac  7409                 je 0x7934b7
// 007934ae  50                   push eax
// 007934af  e860ec1e00           call 0x982114
// 007934b4  83c404               add esp, 4
// 007934b7  56                   push esi
// 007934b8  c7460400000000       mov dword ptr [esi + 4], 0
// 007934bf  c7460800000000       mov dword ptr [esi + 8], 0
// 007934c6  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 007934cd  e842ec1e00           call 0x982114
// 007934d2  83c404               add esp, 4
// 007934d5  5e                   pop esi
// 007934d6  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1?$scoped_ptr@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp

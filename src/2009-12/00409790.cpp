// roc 2009-12 00409790  unit: boost::any::_N::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00409790
//
// 00409790  56                   push esi
// 00409791  6a08                 push 8
// 00409793  8bf1                 mov esi, ecx
// 00409795  e8c6a03e00           call 0x7f3860
// 0040979a  83c404               add esp, 4
// 0040979d  85c0                 test eax, eax
// 0040979f  740e                 je 0x4097af
// 004097a1  c700ecfe9900         mov dword ptr [eax], 0x99feec
// 004097a7  8a4e04               mov cl, byte ptr [esi + 4]
// 004097aa  884804               mov byte ptr [eax + 4], cl
// 004097ad  5e                   pop esi
// 004097ae  c3                   ret 
// 004097af  33c0                 xor eax, eax
// 004097b1  5e                   pop esi
// 004097b2  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@_N@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp

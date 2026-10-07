// roc 2010-06 00409830  unit: boost::any::_N::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00409830
//
// 00409830  56                   push esi
// 00409831  6a08                 push 8
// 00409833  8bf1                 mov esi, ecx
// 00409835  e866e13900           call 0x7a79a0
// 0040983a  83c404               add esp, 4
// 0040983d  85c0                 test eax, eax
// 0040983f  740e                 je 0x40984f
// 00409841  c700a40aa000         mov dword ptr [eax], 0xa00aa4
// 00409847  8a4e04               mov cl, byte ptr [esi + 4]
// 0040984a  884804               mov byte ptr [eax + 4], cl
// 0040984d  5e                   pop esi
// 0040984e  c3                   ret 
// 0040984f  33c0                 xor eax, eax
// 00409851  5e                   pop esi
// 00409852  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@_N@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp

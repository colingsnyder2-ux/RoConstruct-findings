// roc 2009-06 00409880  unit: boost::any::_N::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00409880
//
// 00409880  56                   push esi
// 00409881  6a08                 push 8
// 00409883  8bf1                 mov esi, ecx
// 00409885  e8aef13000           call 0x718a38
// 0040988a  83c404               add esp, 4
// 0040988d  85c0                 test eax, eax
// 0040988f  740e                 je 0x40989f
// 00409891  c700a0d38a00         mov dword ptr [eax], 0x8ad3a0
// 00409897  8a4e04               mov cl, byte ptr [esi + 4]
// 0040989a  884804               mov byte ptr [eax + 4], cl
// 0040989d  5e                   pop esi
// 0040989e  c3                   ret 
// 0040989f  33c0                 xor eax, eax
// 004098a1  5e                   pop esi
// 004098a2  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@_N@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp

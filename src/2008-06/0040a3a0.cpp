// roc 2008-06 0040a3a0  unit: boost::any::_N::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a3a0
//
// 0040a3a0  56                   push esi
// 0040a3a1  6a08                 push 8
// 0040a3a3  8bf1                 mov esi, ecx
// 0040a3a5  e876652900           call 0x6a0920
// 0040a3aa  83c404               add esp, 4
// 0040a3ad  85c0                 test eax, eax
// 0040a3af  740e                 je 0x40a3bf
// 0040a3b1  c70084ba8000         mov dword ptr [eax], 0x80ba84
// 0040a3b7  8a4e04               mov cl, byte ptr [esi + 4]
// 0040a3ba  884804               mov byte ptr [eax + 4], cl
// 0040a3bd  5e                   pop esi
// 0040a3be  c3                   ret 
// 0040a3bf  33c0                 xor eax, eax
// 0040a3c1  5e                   pop esi
// 0040a3c2  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@_N@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp

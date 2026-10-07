// roc 2011-06 0040b610  unit: boost::any::_N::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040b610
//
// 0040b610  56                   push esi
// 0040b611  6a08                 push 8
// 0040b613  8bf1                 mov esi, ecx
// 0040b615  e844ea3f00           call 0x80a05e
// 0040b61a  83c404               add esp, 4
// 0040b61d  85c0                 test eax, eax
// 0040b61f  740e                 je 0x40b62f
// 0040b621  c7005cc1a500         mov dword ptr [eax], 0xa5c15c
// 0040b627  8a4e04               mov cl, byte ptr [esi + 4]
// 0040b62a  884804               mov byte ptr [eax + 4], cl
// 0040b62d  5e                   pop esi
// 0040b62e  c3                   ret 
// 0040b62f  33c0                 xor eax, eax
// 0040b631  5e                   pop esi
// 0040b632  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@_N@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp

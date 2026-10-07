// roc 2007-08 0042d6d0  unit: boost::any::_N::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042d6d0
//
// 0042d6d0  56                   push esi
// 0042d6d1  6a08                 push 8
// 0042d6d3  8bf1                 mov esi, ecx
// 0042d6d5  e81c282000           call 0x62fef6
// 0042d6da  83c404               add esp, 4
// 0042d6dd  85c0                 test eax, eax
// 0042d6df  740e                 je 0x42d6ef
// 0042d6e1  c700fca57800         mov dword ptr [eax], 0x78a5fc
// 0042d6e7  8a4e04               mov cl, byte ptr [esi + 4]
// 0042d6ea  884804               mov byte ptr [eax + 4], cl
// 0042d6ed  5e                   pop esi
// 0042d6ee  c3                   ret 
// 0042d6ef  33c0                 xor eax, eax
// 0042d6f1  5e                   pop esi
// 0042d6f2  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@_N@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp

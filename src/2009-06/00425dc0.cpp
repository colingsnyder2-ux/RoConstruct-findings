// from server: 100% by auto
// roc 2009-06 00425dc0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00425dc0
//
// 00425dc0  6aff                 push -1
// 00425dc2  687b9c8600           push 0x869c7b
// 00425dc7  64a100000000         mov eax, dword ptr fs:[0]
// 00425dcd  50                   push eax
// 00425dce  64892500000000       mov dword ptr fs:[0], esp
// 00425dd5  51                   push ecx
// 00425dd6  56                   push esi
// 00425dd7  6a20                 push 0x20
// 00425dd9  8bf1                 mov esi, ecx
// 00425ddb  e8582c2f00           call 0x718a38
// 00425de0  83c404               add esp, 4
// 00425de3  89442404             mov dword ptr [esp + 4], eax
// 00425de7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00425def  85c0                 test eax, eax
// 00425df1  741b                 je 0x425e0e
// 00425df3  83c604               add esi, 4
// 00425df6  56                   push esi
// 00425df7  8bc8                 mov ecx, eax
// 00425df9  e862ffffff           call 0x425d60
// 00425dfe  5e                   pop esi
// 00425dff  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00425e03  64890d00000000       mov dword ptr fs:[0], ecx
// 00425e0a  83c410               add esp, 0x10
// 00425e0d  c3                   ret 
// 00425e0e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00425e12  33c0                 xor eax, eax
// 00425e14  5e                   pop esi
// 00425e15  64890d00000000       mov dword ptr fs:[0], ecx
// 00425e1c  83c410               add esp, 0x10
// 00425e1f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp

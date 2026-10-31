// roc 2010-06 009dba40  unit: seg_009d0000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dba40
//
// 009dba40  833d7018c00000       cmp dword ptr [0xc01870], 0
// 009dba47  7443                 je 0x9dba8c
// 009dba49  833d7818c00000       cmp dword ptr [0xc01878], 0
// 009dba50  7414                 je 0x9dba66
// 009dba52  687018c000           push 0xc01870
// 009dba57  e86417a7ff           call 0x44d1c0
// 009dba5c  c7057818c00000000000 mov dword ptr [0xc01878], 0
// 009dba66  a19418c000           mov eax, dword ptr [0xc01894]
// 009dba6b  85c0                 test eax, eax
// 009dba6d  7408                 je 0x9dba77
// 009dba6f  8b08                 mov ecx, dword ptr [eax]
// 009dba71  8b5108               mov edx, dword ptr [ecx + 8]
// 009dba74  50                   push eax
// 009dba75  ffd2                 call edx
// 009dba77  687c18c000           push 0xc0187c
// 009dba7c  ff15bca39e00         call dword ptr [0x9ea3bc]
// 009dba82  c7057018c00000000000 mov dword ptr [0xc01870], 0
// 009dba8c  c3                   ret 
// copied from an identical function in another client (function ?roc_atl_module_term@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp
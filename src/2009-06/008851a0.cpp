// roc 2009-06 008851a0  unit: seg_00880000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008851a0
//
// 008851a0  b90cb0a300           mov ecx, 0xa3b00c
// 008851a5  c7051897a300fcafa300 mov dword ptr [0xa39718], 0xa3affc
// 008851af  e86cddb7ff           call 0x402f20
// 008851b4  85c0                 test eax, eax
// 008851b6  7d09                 jge 0x8851c1
// 008851b8  c60550b1a30001       mov byte ptr [0xa3b150], 1
// 008851bf  eb0a                 jmp 0x8851cb
// 008851c1  c70500b0a30024000000 mov dword ptr [0xa3b000], 0x24
// 008851cb  6830498900           push 0x894930
// 008851d0  c705fcafa30020728b00 mov dword ptr [0xa3affc], 0x8b7220
// 008851da  e81c49e9ff           call 0x719afb
// 008851df  59                   pop ecx
// 008851e0  c3                   ret 
// copied from an identical function in another client (function ??__Eroc_atl_module@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp
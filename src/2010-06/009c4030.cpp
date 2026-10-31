// roc 2010-06 009c4030  unit: seg_009c0000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4030
//
// 009c4030  b97c18c000           mov ecx, 0xc0187c
// 009c4035  c705b0fabf006c18c000 mov dword ptr [0xbffab0], 0xc0186c
// 009c403f  e8fceba3ff           call 0x402c40
// 009c4044  85c0                 test eax, eax
// 009c4046  7d09                 jge 0x9c4051
// 009c4048  c605c019c00001       mov byte ptr [0xc019c0], 1
// 009c404f  eb0a                 jmp 0x9c405b
// 009c4051  c7057018c00024000000 mov dword ptr [0xc01870], 0x24
// 009c405b  6840ba9d00           push 0x9dba40
// 009c4060  c7056c18c0009cc2a000 mov dword ptr [0xc0186c], 0xa0c29c
// 009c406a  e8f449deff           call 0x7a8a63
// 009c406f  59                   pop ecx
// 009c4070  c3                   ret 
// copied from an identical function in another client (function ??__Eroc_atl_module@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp
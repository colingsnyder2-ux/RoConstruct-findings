// roc 2012-06 00aeb330  unit: seg_00ae0000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb330
//
// 00aeb330  b99ca0e100           mov ecx, 0xe1a09c
// 00aeb335  c705c463e1008ca0e100 mov dword ptr [0xe163c4], 0xe1a08c
// 00aeb33f  e8dc8e91ff           call 0x404220
// 00aeb344  85c0                 test eax, eax
// 00aeb346  7d09                 jge 0xaeb351
// 00aeb348  c60564a2e10001       mov byte ptr [0xe1a264], 1
// 00aeb34f  eb0a                 jmp 0xaeb35b
// 00aeb351  c70590a0e10024000000 mov dword ptr [0xe1a090], 0x24
// 00aeb35b  689025b100           push 0xb12590
// 00aeb360  c7058ca0e100e49fb500 mov dword ptr [0xe1a08c], 0xb59fe4
// 00aeb36a  e8867ee9ff           call 0x9831f5
// 00aeb36f  59                   pop ecx
// 00aeb370  c3                   ret 
// copied from an identical function in another client (function ??__Eroc_atl_module@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp
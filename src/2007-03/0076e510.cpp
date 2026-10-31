// roc 2007-03 0076e510  unit: seg_00760000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076e510
//
// 0076e510  b994628b00           mov ecx, 0x8b6294
// 0076e515  c7055c538b0084628b00 mov dword ptr [0x8b535c], 0x8b6284
// 0076e51f  e8bc33c9ff           call 0x4018e0
// 0076e524  85c0                 test eax, eax
// 0076e526  7d09                 jge 0x76e531
// 0076e528  c605c0638b0001       mov byte ptr [0x8b63c0], 1
// 0076e52f  eb0a                 jmp 0x76e53b
// 0076e531  c70588628b0024000000 mov dword ptr [0x8b6288], 0x24
// 0076e53b  68507d7700           push 0x777d50
// 0076e540  c70584628b007cf77800 mov dword ptr [0x8b6284], 0x78f77c
// 0076e54a  e8640cebff           call 0x61f1b3
// 0076e54f  59                   pop ecx
// 0076e550  c3                   ret 
// copied from an identical function in another client (function ??__Eroc_atl_module@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp
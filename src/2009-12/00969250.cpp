// roc 2009-12 00969250  unit: seg_00960000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00969250
//
// 00969250  b9bcb2b700           mov ecx, 0xb7b2bc
// 00969255  c7050095b700acb2b700 mov dword ptr [0xb79500], 0xb7b2ac
// 0096925f  e88c99a9ff           call 0x402bf0
// 00969264  85c0                 test eax, eax
// 00969266  7d09                 jge 0x969271
// 00969268  c60500b4b70001       mov byte ptr [0xb7b400], 1
// 0096926f  eb0a                 jmp 0x96927b
// 00969271  c705b0b2b70024000000 mov dword ptr [0xb7b2b0], 0x24
// 0096927b  6820e89700           push 0x97e820
// 00969280  c705acb2b70090b49a00 mov dword ptr [0xb7b2ac], 0x9ab490
// 0096928a  e89ab6e8ff           call 0x7f4929
// 0096928f  59                   pop ecx
// 00969290  c3                   ret 
// copied from an identical function in another client (function ??__Eroc_atl_module@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp
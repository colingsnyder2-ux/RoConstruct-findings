// roc 2007-08 0076d2e0  unit: seg_00760000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d2e0
//
// 0076d2e0  b964bd8b00           mov ecx, 0x8bbd64
// 0076d2e5  c70544ae8b0054bd8b00 mov dword ptr [0x8bae44], 0x8bbd54
// 0076d2ef  e8dc45c9ff           call 0x4018d0
// 0076d2f4  85c0                 test eax, eax
// 0076d2f6  7d09                 jge 0x76d301
// 0076d2f8  c60598be8b0001       mov byte ptr [0x8bbe98], 1
// 0076d2ff  eb0a                 jmp 0x76d30b
// 0076d301  c70558bd8b0024000000 mov dword ptr [0x8bbd58], 0x24
// 0076d30b  68607d7700           push 0x777d60
// 0076d310  c70554bd8b0078077900 mov dword ptr [0x8bbd54], 0x790778
// 0076d31a  e8043aecff           call 0x630d23
// 0076d31f  59                   pop ecx
// 0076d320  c3                   ret 
// copied from an identical function in another client (function ??__Eroc_atl_module@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp
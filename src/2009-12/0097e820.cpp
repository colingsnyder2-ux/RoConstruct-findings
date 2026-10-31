// roc 2009-12 0097e820  unit: seg_00970000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097e820
//
// 0097e820  833db0b2b70000       cmp dword ptr [0xb7b2b0], 0
// 0097e827  7443                 je 0x97e86c
// 0097e829  833db8b2b70000       cmp dword ptr [0xb7b2b8], 0
// 0097e830  7414                 je 0x97e846
// 0097e832  68b0b2b700           push 0xb7b2b0
// 0097e837  e8e4c9acff           call 0x44b220
// 0097e83c  c705b8b2b70000000000 mov dword ptr [0xb7b2b8], 0
// 0097e846  a1d4b2b700           mov eax, dword ptr [0xb7b2d4]
// 0097e84b  85c0                 test eax, eax
// 0097e84d  7408                 je 0x97e857
// 0097e84f  8b08                 mov ecx, dword ptr [eax]
// 0097e851  8b5108               mov edx, dword ptr [ecx + 8]
// 0097e854  50                   push eax
// 0097e855  ffd2                 call edx
// 0097e857  68bcb2b700           push 0xb7b2bc
// 0097e85c  ff15d0b29800         call dword ptr [0x98b2d0]
// 0097e862  c705b0b2b70000000000 mov dword ptr [0xb7b2b0], 0
// 0097e86c  c3                   ret 
// copied from an identical function in another client (function ?roc_atl_module_term@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp
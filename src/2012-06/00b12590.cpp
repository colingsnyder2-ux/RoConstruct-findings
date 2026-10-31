// roc 2012-06 00b12590  unit: seg_00b10000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b12590
//
// 00b12590  833d90a0e10000       cmp dword ptr [0xe1a090], 0
// 00b12597  7443                 je 0xb125dc
// 00b12599  833d98a0e10000       cmp dword ptr [0xe1a098], 0
// 00b125a0  7414                 je 0xb125b6
// 00b125a2  6890a0e100           push 0xe1a090
// 00b125a7  e8f4a295ff           call 0x46c8a0
// 00b125ac  c70598a0e10000000000 mov dword ptr [0xe1a098], 0
// 00b125b6  a1b4a0e100           mov eax, dword ptr [0xe1a0b4]
// 00b125bb  85c0                 test eax, eax
// 00b125bd  7408                 je 0xb125c7
// 00b125bf  8b08                 mov ecx, dword ptr [eax]
// 00b125c1  8b5108               mov edx, dword ptr [ecx + 8]
// 00b125c4  50                   push eax
// 00b125c5  ffd2                 call edx
// 00b125c7  689ca0e100           push 0xe1a09c
// 00b125cc  ff15d821b200         call dword ptr [0xb221d8]
// 00b125d2  c70590a0e10000000000 mov dword ptr [0xe1a090], 0
// 00b125dc  c3                   ret 
// copied from an identical function in another client (function ?roc_atl_module_term@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp
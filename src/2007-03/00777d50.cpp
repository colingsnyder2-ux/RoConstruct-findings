// roc 2007-03 00777d50  unit: seg_00770000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777d50
//
// 00777d50  833d88628b0000       cmp dword ptr [0x8b6288], 0
// 00777d57  7443                 je 0x777d9c
// 00777d59  833d90628b0000       cmp dword ptr [0x8b6290], 0
// 00777d60  7414                 je 0x777d76
// 00777d62  6888628b00           push 0x8b6288
// 00777d67  e8d4feccff           call 0x447c40
// 00777d6c  c70590628b0000000000 mov dword ptr [0x8b6290], 0
// 00777d76  a1ac628b00           mov eax, dword ptr [0x8b62ac]
// 00777d7b  85c0                 test eax, eax
// 00777d7d  7408                 je 0x777d87
// 00777d7f  8b08                 mov ecx, dword ptr [eax]
// 00777d81  8b5108               mov edx, dword ptr [ecx + 8]
// 00777d84  50                   push eax
// 00777d85  ffd2                 call edx
// 00777d87  6894628b00           push 0x8b6294
// 00777d8c  ff15c4d27700         call dword ptr [0x77d2c4]
// 00777d92  c70588628b0000000000 mov dword ptr [0x8b6288], 0
// 00777d9c  c3                   ret 
// copied from an identical function in another client (function ?roc_atl_module_term@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp
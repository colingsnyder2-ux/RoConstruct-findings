// from server: 100% by king_originala
// roc 2008-06 007fae10  unit: seg_007f0000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fae10
//
// 007fae10  833db8db960000       cmp dword ptr [0x96dbb8], 0
// 007fae17  7443                 je 0x7fae5c
// 007fae19  833dc0db960000       cmp dword ptr [0x96dbc0], 0
// 007fae20  7414                 je 0x7fae36
// 007fae22  68b8db9600           push 0x96dbb8
// 007fae27  e834f2c4ff           call 0x44a060
// 007fae2c  c705c0db960000000000 mov dword ptr [0x96dbc0], 0
// 007fae36  a1dcdb9600           mov eax, dword ptr [0x96dbdc]
// 007fae3b  85c0                 test eax, eax
// 007fae3d  7408                 je 0x7fae47
// 007fae3f  8b08                 mov ecx, dword ptr [eax]
// 007fae41  8b5108               mov edx, dword ptr [ecx + 8]
// 007fae44  50                   push eax
// 007fae45  ffd2                 call edx
// 007fae47  68c4db9600           push 0x96dbc4
// 007fae4c  ff15dc228000         call dword ptr [0x8022dc]
// 007fae52  c705b8db960000000000 mov dword ptr [0x96dbb8], 0
// 007fae5c  c3                   ret 

// from server: 66% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_unit_aa49747d7f898d5b.cpp

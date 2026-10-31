// roc 2011-06 00a31770  unit: seg_00a30000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a31770
//
// 00a31770  833ddc37cb0000       cmp dword ptr [0xcb37dc], 0
// 00a31777  7443                 je 0xa317bc
// 00a31779  833de437cb0000       cmp dword ptr [0xcb37e4], 0
// 00a31780  7414                 je 0xa31796
// 00a31782  68dc37cb00           push 0xcb37dc
// 00a31787  e89473a2ff           call 0x458b20
// 00a3178c  c705e437cb0000000000 mov dword ptr [0xcb37e4], 0
// 00a31796  a10038cb00           mov eax, dword ptr [0xcb3800]
// 00a3179b  85c0                 test eax, eax
// 00a3179d  7408                 je 0xa317a7
// 00a3179f  8b08                 mov ecx, dword ptr [eax]
// 00a317a1  8b5108               mov edx, dword ptr [ecx + 8]
// 00a317a4  50                   push eax
// 00a317a5  ffd2                 call edx
// 00a317a7  68e837cb00           push 0xcb37e8
// 00a317ac  ff159c03a400         call dword ptr [0xa4039c]
// 00a317b2  c705dc37cb0000000000 mov dword ptr [0xcb37dc], 0
// 00a317bc  c3                   ret 
// copied from an identical function in another client (function ?roc_atl_module_term@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp
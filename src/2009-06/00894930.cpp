// roc 2009-06 00894930  unit: seg_00890000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894930
//
// 00894930  833d00b0a30000       cmp dword ptr [0xa3b000], 0
// 00894937  7443                 je 0x89497c
// 00894939  833d08b0a30000       cmp dword ptr [0xa3b008], 0
// 00894940  7414                 je 0x894956
// 00894942  6800b0a300           push 0xa3b000
// 00894947  e83406bbff           call 0x444f80
// 0089494c  c70508b0a30000000000 mov dword ptr [0xa3b008], 0
// 00894956  a124b0a300           mov eax, dword ptr [0xa3b024]
// 0089495b  85c0                 test eax, eax
// 0089495d  7408                 je 0x894967
// 0089495f  8b08                 mov ecx, dword ptr [eax]
// 00894961  8b5108               mov edx, dword ptr [ecx + 8]
// 00894964  50                   push eax
// 00894965  ffd2                 call edx
// 00894967  680cb0a300           push 0xa3b00c
// 0089496c  ff1544e38900         call dword ptr [0x89e344]
// 00894972  c70500b0a30000000000 mov dword ptr [0xa3b000], 0
// 0089497c  c3                   ret 
// copied from an identical function in another client (function ?roc_atl_module_term@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp
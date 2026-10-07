// roc 2009-06 006f0280  unit: seg_006f0000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f0280
//
// 006f0280  83ec20               sub esp, 0x20
// 006f0283  53                   push ebx
// 006f0284  56                   push esi
// 006f0285  57                   push edi
// 006f0286  8bf0                 mov esi, eax
// 006f0288  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 006f028b  8d7c2414             lea edi, [esp + 0x14]
// 006f028f  e84ce7ffff           call 0x6ee9e0
// 006f0294  837c24140d           cmp dword ptr [esp + 0x14], 0xd
// 006f0299  7523                 jne 0x6f02be
// 006f029b  8b03                 mov eax, dword ptr [ebx]
// 006f029d  8b480c               mov ecx, dword ptr [eax + 0xc]
// 006f02a0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006f02a4  8d0491               lea eax, [ecx + edx*4]
// 006f02a7  8b08                 mov ecx, dword ptr [eax]
// 006f02a9  5f                   pop edi
// 006f02aa  81e1ff7f80ff         and ecx, 0xff807fff
// 006f02b0  81c900400000         or ecx, 0x4000
// 006f02b6  5e                   pop esi
// 006f02b7  8908                 mov dword ptr [eax], ecx
// 006f02b9  5b                   pop ebx
// 006f02ba  83c420               add esp, 0x20
// 006f02bd  c3                   ret 
// 006f02be  6a01                 push 1
// 006f02c0  8d542410             lea edx, [esp + 0x10]
// 006f02c4  52                   push edx
// 006f02c5  56                   push esi
// 006f02c6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006f02ce  e87defffff           call 0x6ef250
// 006f02d3  83c40c               add esp, 0xc
// 006f02d6  5f                   pop edi
// 006f02d7  5e                   pop esi
// 006f02d8  5b                   pop ebx
// 006f02d9  83c420               add esp, 0x20
// 006f02dc  c3                   ret 
// library lua-5.1.4/lparser.c (function _exprstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

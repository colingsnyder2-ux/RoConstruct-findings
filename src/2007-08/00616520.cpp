// from server: 100% by auto
// roc 2007-08 00616520  unit: seg_00610000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00616520
//
// 00616520  83ec20               sub esp, 0x20
// 00616523  53                   push ebx
// 00616524  56                   push esi
// 00616525  57                   push edi
// 00616526  8bf0                 mov esi, eax
// 00616528  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 0061652b  8d7c2414             lea edi, [esp + 0x14]
// 0061652f  e86ce7ffff           call 0x614ca0
// 00616534  837c24140d           cmp dword ptr [esp + 0x14], 0xd
// 00616539  7523                 jne 0x61655e
// 0061653b  8b03                 mov eax, dword ptr [ebx]
// 0061653d  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00616540  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00616544  8d0491               lea eax, [ecx + edx*4]
// 00616547  8b08                 mov ecx, dword ptr [eax]
// 00616549  5f                   pop edi
// 0061654a  81e1ff7f80ff         and ecx, 0xff807fff
// 00616550  81c900400000         or ecx, 0x4000
// 00616556  5e                   pop esi
// 00616557  8908                 mov dword ptr [eax], ecx
// 00616559  5b                   pop ebx
// 0061655a  83c420               add esp, 0x20
// 0061655d  c3                   ret 
// 0061655e  6a01                 push 1
// 00616560  8d542410             lea edx, [esp + 0x10]
// 00616564  52                   push edx
// 00616565  56                   push esi
// 00616566  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0061656e  e89defffff           call 0x615510
// 00616573  83c40c               add esp, 0xc
// 00616576  5f                   pop edi
// 00616577  5e                   pop esi
// 00616578  5b                   pop ebx
// 00616579  83c420               add esp, 0x20
// 0061657c  c3                   ret 
// library lua-5.1.4/lparser.c (function _exprstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

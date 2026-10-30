// from server: 100% by auto
// roc 2011-06 007dd9e0  unit: seg_007d0000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dd9e0
//
// 007dd9e0  83ec20               sub esp, 0x20
// 007dd9e3  53                   push ebx
// 007dd9e4  56                   push esi
// 007dd9e5  57                   push edi
// 007dd9e6  8bf0                 mov esi, eax
// 007dd9e8  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 007dd9eb  8d7c2414             lea edi, [esp + 0x14]
// 007dd9ef  e80ce7ffff           call 0x7dc100
// 007dd9f4  837c24140d           cmp dword ptr [esp + 0x14], 0xd
// 007dd9f9  7523                 jne 0x7dda1e
// 007dd9fb  8b03                 mov eax, dword ptr [ebx]
// 007dd9fd  8b480c               mov ecx, dword ptr [eax + 0xc]
// 007dda00  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007dda04  8d0491               lea eax, [ecx + edx*4]
// 007dda07  8b08                 mov ecx, dword ptr [eax]
// 007dda09  5f                   pop edi
// 007dda0a  81e1ff7f80ff         and ecx, 0xff807fff
// 007dda10  81c900400000         or ecx, 0x4000
// 007dda16  5e                   pop esi
// 007dda17  8908                 mov dword ptr [eax], ecx
// 007dda19  5b                   pop ebx
// 007dda1a  83c420               add esp, 0x20
// 007dda1d  c3                   ret 
// 007dda1e  6a01                 push 1
// 007dda20  8d542410             lea edx, [esp + 0x10]
// 007dda24  52                   push edx
// 007dda25  56                   push esi
// 007dda26  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007dda2e  e84defffff           call 0x7dc980
// 007dda33  83c40c               add esp, 0xc
// 007dda36  5f                   pop edi
// 007dda37  5e                   pop esi
// 007dda38  5b                   pop ebx
// 007dda39  83c420               add esp, 0x20
// 007dda3c  c3                   ret 
// library lua-5.1.4/lparser.c (function _exprstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

// roc 2008-06 006631e0  unit: RBX::FilterStairs  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006631e0
//
// 006631e0  83ec20               sub esp, 0x20
// 006631e3  53                   push ebx
// 006631e4  56                   push esi
// 006631e5  57                   push edi
// 006631e6  8bf0                 mov esi, eax
// 006631e8  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 006631eb  8d7c2414             lea edi, [esp + 0x14]
// 006631ef  e87ce7ffff           call 0x661970
// 006631f4  837c24140d           cmp dword ptr [esp + 0x14], 0xd
// 006631f9  7523                 jne 0x66321e
// 006631fb  8b03                 mov eax, dword ptr [ebx]
// 006631fd  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00663200  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00663204  8d0491               lea eax, [ecx + edx*4]
// 00663207  8b08                 mov ecx, dword ptr [eax]
// 00663209  5f                   pop edi
// 0066320a  81e1ff7f80ff         and ecx, 0xff807fff
// 00663210  81c900400000         or ecx, 0x4000
// 00663216  5e                   pop esi
// 00663217  8908                 mov dword ptr [eax], ecx
// 00663219  5b                   pop ebx
// 0066321a  83c420               add esp, 0x20
// 0066321d  c3                   ret 
// 0066321e  6a01                 push 1
// 00663220  8d542410             lea edx, [esp + 0x10]
// 00663224  52                   push edx
// 00663225  56                   push esi
// 00663226  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0066322e  e8adefffff           call 0x6621e0
// 00663233  83c40c               add esp, 0xc
// 00663236  5f                   pop edi
// 00663237  5e                   pop esi
// 00663238  5b                   pop ebx
// 00663239  83c420               add esp, 0x20
// 0066323c  c3                   ret 
// library lua-5.1.4/lparser.c (function _exprstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

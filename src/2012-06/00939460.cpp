// roc 2012-06 00939460  unit: seg_00930000  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00939460
//
// 00939460  83ec1c               sub esp, 0x1c
// 00939463  53                   push ebx
// 00939464  55                   push ebp
// 00939465  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00939469  56                   push esi
// 0093946a  8bf0                 mov esi, eax
// 0093946c  8b4610               mov eax, dword ptr [esi + 0x10]
// 0093946f  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 00939472  57                   push edi
// 00939473  8b7e04               mov edi, dword ptr [esi + 4]
// 00939476  897c2410             mov dword ptr [esp + 0x10], edi
// 0093947a  83f828               cmp eax, 0x28
// 0093947d  745b                 je 0x9394da
// 0093947f  83f87b               cmp eax, 0x7b
// 00939482  7449                 je 0x9394cd
// 00939484  3d1e010000           cmp eax, 0x11e
// 00939489  7416                 je 0x9394a1
// 0093948b  6898fcbf00           push 0xbffc98
// 00939490  56                   push esi
// 00939491  e87addffff           call 0x937210
// 00939496  83c408               add esp, 8
// 00939499  5f                   pop edi
// 0093949a  5e                   pop esi
// 0093949b  5d                   pop ebp
// 0093949c  5b                   pop ebx
// 0093949d  83c41c               add esp, 0x1c
// 009394a0  c3                   ret 
// 009394a1  8b4618               mov eax, dword ptr [esi + 0x18]
// 009394a4  50                   push eax
// 009394a5  53                   push ebx
// 009394a6  e815df0200           call 0x9673c0
// 009394ab  83c9ff               or ecx, 0xffffffff
// 009394ae  56                   push esi
// 009394af  894c2430             mov dword ptr [esp + 0x30], ecx
// 009394b3  894c2434             mov dword ptr [esp + 0x34], ecx
// 009394b7  c744242004000000     mov dword ptr [esp + 0x20], 4
// 009394bf  89442428             mov dword ptr [esp + 0x28], eax
// 009394c3  e8f8eeffff           call 0x9383c0
// 009394c8  83c40c               add esp, 0xc
// 009394cb  eb69                 jmp 0x939536
// 009394cd  8d442414             lea eax, [esp + 0x14]
// 009394d1  8bce                 mov ecx, esi
// 009394d3  e828faffff           call 0x938f00
// 009394d8  eb5c                 jmp 0x939536
// 009394da  3b7e08               cmp edi, dword ptr [esi + 8]
// 009394dd  740e                 je 0x9394ed
// 009394df  6864fcbf00           push 0xbffc64
// 009394e4  56                   push esi
// 009394e5  e826ddffff           call 0x937210
// 009394ea  83c408               add esp, 8
// 009394ed  56                   push esi
// 009394ee  e8cdeeffff           call 0x9383c0
// 009394f3  83c404               add esp, 4
// 009394f6  837e1029             cmp dword ptr [esi + 0x10], 0x29
// 009394fa  750a                 jne 0x939506
// 009394fc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00939504  eb1b                 jmp 0x939521
// 00939506  8d7c2414             lea edi, [esp + 0x14]
// 0093950a  e811ffffff           call 0x939420
// 0093950f  6aff                 push -1
// 00939511  8bc7                 mov eax, edi
// 00939513  50                   push eax
// 00939514  53                   push ebx
// 00939515  e836df0200           call 0x967450
// 0093951a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0093951e  83c40c               add esp, 0xc
// 00939521  8bc7                 mov eax, edi
// 00939523  6a28                 push 0x28
// 00939525  bf29000000           mov edi, 0x29
// 0093952a  e851efffff           call 0x938480
// 0093952f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00939533  83c404               add esp, 4
// 00939536  8b442414             mov eax, dword ptr [esp + 0x14]
// 0093953a  8b7508               mov esi, dword ptr [ebp + 8]
// 0093953d  83f80d               cmp eax, 0xd
// 00939540  741f                 je 0x939561
// 00939542  83f80e               cmp eax, 0xe
// 00939545  741a                 je 0x939561
// 00939547  85c0                 test eax, eax
// 00939549  740e                 je 0x939559
// 0093954b  8d4c2414             lea ecx, [esp + 0x14]
// 0093954f  51                   push ecx
// 00939550  53                   push ebx
// 00939551  e81ae80200           call 0x967d70
// 00939556  83c408               add esp, 8
// 00939559  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0093955c  2bc6                 sub eax, esi
// 0093955e  48                   dec eax
// 0093955f  eb03                 jmp 0x939564
// 00939561  83c8ff               or eax, 0xffffffff
// 00939564  6a02                 push 2
// 00939566  40                   inc eax
// 00939567  50                   push eax
// 00939568  56                   push esi
// 00939569  6a1c                 push 0x1c
// 0093956b  53                   push ebx
// 0093956c  e8dfe10200           call 0x967750
// 00939571  83c9ff               or ecx, 0xffffffff
// 00939574  57                   push edi
// 00939575  53                   push ebx
// 00939576  894d10               mov dword ptr [ebp + 0x10], ecx
// 00939579  894d14               mov dword ptr [ebp + 0x14], ecx
// 0093957c  c745000d000000       mov dword ptr [ebp], 0xd
// 00939583  894508               mov dword ptr [ebp + 8], eax
// 00939586  e805e10200           call 0x967690
// 0093958b  83c41c               add esp, 0x1c
// 0093958e  46                   inc esi
// 0093958f  5f                   pop edi
// 00939590  897324               mov dword ptr [ebx + 0x24], esi
// 00939593  5e                   pop esi
// 00939594  5d                   pop ebp
// 00939595  5b                   pop ebx
// 00939596  83c41c               add esp, 0x1c
// 00939599  c3                   ret 
// library lua-5.1.4/lparser.c (function _funcargs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

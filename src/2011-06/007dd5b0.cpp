// from server: 100% by auto
// roc 2011-06 007dd5b0  unit: seg_007d0000  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dd5b0
//
// 007dd5b0  51                   push ecx
// 007dd5b1  53                   push ebx
// 007dd5b2  56                   push esi
// 007dd5b3  8bf0                 mov esi, eax
// 007dd5b5  57                   push edi
// 007dd5b6  8b7e30               mov edi, dword ptr [esi + 0x30]
// 007dd5b9  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 007dd5c1  e86affffff           call 0x7dd530
// 007dd5c6  817e1005010000       cmp dword ptr [esi + 0x10], 0x105
// 007dd5cd  8bd8                 mov ebx, eax
// 007dd5cf  752c                 jne 0x7dd5fd
// 007dd5d1  57                   push edi
// 007dd5d2  e869530100           call 0x7f2940
// 007dd5d7  50                   push eax
// 007dd5d8  8d442414             lea eax, [esp + 0x14]
// 007dd5dc  50                   push eax
// 007dd5dd  57                   push edi
// 007dd5de  e86d4c0100           call 0x7f2250
// 007dd5e3  53                   push ebx
// 007dd5e4  57                   push edi
// 007dd5e5  e826540100           call 0x7f2a10
// 007dd5ea  83c418               add esp, 0x18
// 007dd5ed  e83effffff           call 0x7dd530
// 007dd5f2  817e1005010000       cmp dword ptr [esi + 0x10], 0x105
// 007dd5f9  8bd8                 mov ebx, eax
// 007dd5fb  74d4                 je 0x7dd5d1
// 007dd5fd  817e1004010000       cmp dword ptr [esi + 0x10], 0x104
// 007dd604  752b                 jne 0x7dd631
// 007dd606  57                   push edi
// 007dd607  e834530100           call 0x7f2940
// 007dd60c  50                   push eax
// 007dd60d  8d4c2414             lea ecx, [esp + 0x14]
// 007dd611  51                   push ecx
// 007dd612  57                   push edi
// 007dd613  e8384c0100           call 0x7f2250
// 007dd618  53                   push ebx
// 007dd619  57                   push edi
// 007dd61a  e8f1530100           call 0x7f2a10
// 007dd61f  56                   push esi
// 007dd620  e8fb250000           call 0x7dfc20
// 007dd625  83c41c               add esp, 0x1c
// 007dd628  8bc6                 mov eax, esi
// 007dd62a  e871f2ffff           call 0x7dc8a0
// 007dd62f  eb0f                 jmp 0x7dd640
// 007dd631  53                   push ebx
// 007dd632  8d542410             lea edx, [esp + 0x10]
// 007dd636  52                   push edx
// 007dd637  57                   push edi
// 007dd638  e8134c0100           call 0x7f2250
// 007dd63d  83c40c               add esp, 0xc
// 007dd640  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007dd644  50                   push eax
// 007dd645  57                   push edi
// 007dd646  e8c5530100           call 0x7f2a10
// 007dd64b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007dd64f  680a010000           push 0x10a
// 007dd654  bf06010000           mov edi, 0x106
// 007dd659  e812d9ffff           call 0x7daf70
// 007dd65e  83c40c               add esp, 0xc
// 007dd661  5f                   pop edi
// 007dd662  5e                   pop esi
// 007dd663  5b                   pop ebx
// 007dd664  59                   pop ecx
// 007dd665  c3                   ret 
// library lua-5.1.4/lparser.c (function _ifstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

// roc 2010-06 00781110  unit: seg_00780000  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00781110
//
// 00781110  51                   push ecx
// 00781111  53                   push ebx
// 00781112  56                   push esi
// 00781113  8bf0                 mov esi, eax
// 00781115  57                   push edi
// 00781116  8b7e30               mov edi, dword ptr [esi + 0x30]
// 00781119  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00781121  e86affffff           call 0x781090
// 00781126  817e1005010000       cmp dword ptr [esi + 0x10], 0x105
// 0078112d  8bd8                 mov ebx, eax
// 0078112f  752c                 jne 0x78115d
// 00781131  57                   push edi
// 00781132  e8b9eb0000           call 0x78fcf0
// 00781137  50                   push eax
// 00781138  8d442414             lea eax, [esp + 0x14]
// 0078113c  50                   push eax
// 0078113d  57                   push edi
// 0078113e  e8ede40000           call 0x78f630
// 00781143  53                   push ebx
// 00781144  57                   push edi
// 00781145  e876ec0000           call 0x78fdc0
// 0078114a  83c418               add esp, 0x18
// 0078114d  e83effffff           call 0x781090
// 00781152  817e1005010000       cmp dword ptr [esi + 0x10], 0x105
// 00781159  8bd8                 mov ebx, eax
// 0078115b  74d4                 je 0x781131
// 0078115d  817e1004010000       cmp dword ptr [esi + 0x10], 0x104
// 00781164  752b                 jne 0x781191
// 00781166  57                   push edi
// 00781167  e884eb0000           call 0x78fcf0
// 0078116c  50                   push eax
// 0078116d  8d4c2414             lea ecx, [esp + 0x14]
// 00781171  51                   push ecx
// 00781172  57                   push edi
// 00781173  e8b8e40000           call 0x78f630
// 00781178  53                   push ebx
// 00781179  57                   push edi
// 0078117a  e841ec0000           call 0x78fdc0
// 0078117f  56                   push esi
// 00781180  e8fb270000           call 0x783980
// 00781185  83c41c               add esp, 0x1c
// 00781188  8bc6                 mov eax, esi
// 0078118a  e881f2ffff           call 0x780410
// 0078118f  eb0f                 jmp 0x7811a0
// 00781191  53                   push ebx
// 00781192  8d542410             lea edx, [esp + 0x10]
// 00781196  52                   push edx
// 00781197  57                   push edi
// 00781198  e893e40000           call 0x78f630
// 0078119d  83c40c               add esp, 0xc
// 007811a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007811a4  50                   push eax
// 007811a5  57                   push edi
// 007811a6  e815ec0000           call 0x78fdc0
// 007811ab  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007811af  680a010000           push 0x10a
// 007811b4  bf06010000           mov edi, 0x106
// 007811b9  e872d9ffff           call 0x77eb30
// 007811be  83c40c               add esp, 0xc
// 007811c1  5f                   pop edi
// 007811c2  5e                   pop esi
// 007811c3  5b                   pop ebx
// 007811c4  59                   pop ecx
// 007811c5  c3                   ret 
// library lua-5.1.4/lparser.c (function _ifstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

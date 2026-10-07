// roc 2008-06 0065ef40  unit: seg_00650000  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065ef40
//
// 0065ef40  83ec7c               sub esp, 0x7c
// 0065ef43  53                   push ebx
// 0065ef44  8bd8                 mov ebx, eax
// 0065ef46  33c0                 xor eax, eax
// 0065ef48  89442414             mov dword ptr [esp + 0x14], eax
// 0065ef4c  89442418             mov dword ptr [esp + 0x18], eax
// 0065ef50  8944241c             mov dword ptr [esp + 0x1c], eax
// 0065ef54  89442420             mov dword ptr [esp + 0x20], eax
// 0065ef58  89442424             mov dword ptr [esp + 0x24], eax
// 0065ef5c  89442428             mov dword ptr [esp + 0x28], eax
// 0065ef60  8944242c             mov dword ptr [esp + 0x2c], eax
// 0065ef64  89442430             mov dword ptr [esp + 0x30], eax
// 0065ef68  89442434             mov dword ptr [esp + 0x34], eax
// 0065ef6c  89442438             mov dword ptr [esp + 0x38], eax
// 0065ef70  8944243c             mov dword ptr [esp + 0x3c], eax
// 0065ef74  89442440             mov dword ptr [esp + 0x40], eax
// 0065ef78  89442444             mov dword ptr [esp + 0x44], eax
// 0065ef7c  89442448             mov dword ptr [esp + 0x48], eax
// 0065ef80  8944244c             mov dword ptr [esp + 0x4c], eax
// 0065ef84  89442450             mov dword ptr [esp + 0x50], eax
// 0065ef88  89442454             mov dword ptr [esp + 0x54], eax
// 0065ef8c  89442458             mov dword ptr [esp + 0x58], eax
// 0065ef90  8944245c             mov dword ptr [esp + 0x5c], eax
// 0065ef94  89442460             mov dword ptr [esp + 0x60], eax
// 0065ef98  89442464             mov dword ptr [esp + 0x64], eax
// 0065ef9c  89442468             mov dword ptr [esp + 0x68], eax
// 0065efa0  8944246c             mov dword ptr [esp + 0x6c], eax
// 0065efa4  89442470             mov dword ptr [esp + 0x70], eax
// 0065efa8  89442474             mov dword ptr [esp + 0x74], eax
// 0065efac  89442478             mov dword ptr [esp + 0x78], eax
// 0065efb0  8944247c             mov dword ptr [esp + 0x7c], eax
// 0065efb4  56                   push esi
// 0065efb5  8d442418             lea eax, [esp + 0x18]
// 0065efb9  50                   push eax
// 0065efba  53                   push ebx
// 0065efbb  e8f0f6ffff           call 0x65e6b0
// 0065efc0  8d4c2410             lea ecx, [esp + 0x10]
// 0065efc4  51                   push ecx
// 0065efc5  8d542424             lea edx, [esp + 0x24]
// 0065efc9  52                   push edx
// 0065efca  89442418             mov dword ptr [esp + 0x18], eax
// 0065efce  8bf0                 mov esi, eax
// 0065efd0  e85bf7ffff           call 0x65e730
// 0065efd5  83c410               add esp, 0x10
// 0065efd8  03f0                 add esi, eax
// 0065efda  837f0803             cmp dword ptr [edi + 8], 3
// 0065efde  7543                 jne 0x65f023
// 0065efe0  dd07                 fld qword ptr [edi]
// 0065efe2  dd5c2410             fstp qword ptr [esp + 0x10]
// 0065efe6  dd442410             fld qword ptr [esp + 0x10]
// 0065efea  db5c240c             fistp dword ptr [esp + 0xc]
// 0065efee  db44240c             fild dword ptr [esp + 0xc]
// 0065eff2  dc5c2410             fcomp qword ptr [esp + 0x10]
// 0065eff6  dfe0                 fnstsw ax
// 0065eff8  f6c444               test ah, 0x44
// 0065effb  7a26                 jp 0x65f023
// 0065effd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065f001  85c0                 test eax, eax
// 0065f003  7e1e                 jle 0x65f023
// 0065f005  3d00000004           cmp eax, 0x4000000
// 0065f00a  7f17                 jg 0x65f023
// 0065f00c  48                   dec eax
// 0065f00d  50                   push eax
// 0065f00e  e82d36fcff           call 0x622640
// 0065f013  8d448420             lea eax, [esp + eax*4 + 0x20]
// 0065f017  83c404               add esp, 4
// 0065f01a  ff00                 inc dword ptr [eax]
// 0065f01c  b801000000           mov eax, 1
// 0065f021  eb02                 jmp 0x65f025
// 0065f023  33c0                 xor eax, eax
// 0065f025  01442408             add dword ptr [esp + 8], eax
// 0065f029  8d442408             lea eax, [esp + 8]
// 0065f02d  50                   push eax
// 0065f02e  8d44241c             lea eax, [esp + 0x1c]
// 0065f032  e819f6ffff           call 0x65e650
// 0065f037  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065f03b  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 0065f042  2bf0                 sub esi, eax
// 0065f044  46                   inc esi
// 0065f045  56                   push esi
// 0065f046  51                   push ecx
// 0065f047  52                   push edx
// 0065f048  8bc3                 mov eax, ebx
// 0065f04a  e8c1fcffff           call 0x65ed10
// 0065f04f  83c410               add esp, 0x10
// 0065f052  5e                   pop esi
// 0065f053  5b                   pop ebx
// 0065f054  83c47c               add esp, 0x7c
// 0065f057  c3                   ret 
// library lua-5.1.4/ltable.c (function _rehash)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltable.c

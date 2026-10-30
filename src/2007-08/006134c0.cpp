// from server: 100% by auto
// roc 2007-08 006134c0  unit: seg_00610000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006134c0
//
// 006134c0  51                   push ecx
// 006134c1  85c0                 test eax, eax
// 006134c3  57                   push edi
// 006134c4  7451                 je 0x613517
// 006134c6  8d7810               lea edi, [eax + 0x10]
// 006134c9  85ff                 test edi, edi
// 006134cb  744a                 je 0x613517
// 006134cd  8b400c               mov eax, dword ptr [eax + 0xc]
// 006134d0  83c001               add eax, 1
// 006134d3  837e1000             cmp dword ptr [esi + 0x10], 0
// 006134d7  89442404             mov dword ptr [esp + 4], eax
// 006134db  7561                 jne 0x61353e
// 006134dd  8b4608               mov eax, dword ptr [esi + 8]
// 006134e0  8b16                 mov edx, dword ptr [esi]
// 006134e2  50                   push eax
// 006134e3  8b4604               mov eax, dword ptr [esi + 4]
// 006134e6  6a04                 push 4
// 006134e8  8d4c240c             lea ecx, [esp + 0xc]
// 006134ec  51                   push ecx
// 006134ed  52                   push edx
// 006134ee  ffd0                 call eax
// 006134f0  894610               mov dword ptr [esi + 0x10], eax
// 006134f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 006134f7  83c410               add esp, 0x10
// 006134fa  837e1000             cmp dword ptr [esi + 0x10], 0
// 006134fe  753e                 jne 0x61353e
// 00613500  8b4e08               mov ecx, dword ptr [esi + 8]
// 00613503  8b16                 mov edx, dword ptr [esi]
// 00613505  51                   push ecx
// 00613506  50                   push eax
// 00613507  8b4604               mov eax, dword ptr [esi + 4]
// 0061350a  57                   push edi
// 0061350b  52                   push edx
// 0061350c  ffd0                 call eax
// 0061350e  83c410               add esp, 0x10
// 00613511  894610               mov dword ptr [esi + 0x10], eax
// 00613514  5f                   pop edi
// 00613515  59                   pop ecx
// 00613516  c3                   ret 
// 00613517  837e1000             cmp dword ptr [esi + 0x10], 0
// 0061351b  c744240400000000     mov dword ptr [esp + 4], 0
// 00613523  7519                 jne 0x61353e
// 00613525  8b4e08               mov ecx, dword ptr [esi + 8]
// 00613528  8b06                 mov eax, dword ptr [esi]
// 0061352a  51                   push ecx
// 0061352b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0061352e  6a04                 push 4
// 00613530  8d54240c             lea edx, [esp + 0xc]
// 00613534  52                   push edx
// 00613535  50                   push eax
// 00613536  ffd1                 call ecx
// 00613538  894610               mov dword ptr [esi + 0x10], eax
// 0061353b  83c410               add esp, 0x10
// 0061353e  5f                   pop edi
// 0061353f  59                   pop ecx
// 00613540  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpString)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c

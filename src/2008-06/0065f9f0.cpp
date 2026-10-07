// roc 2008-06 0065f9f0  unit: seg_00650000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f9f0
//
// 0065f9f0  51                   push ecx
// 0065f9f1  57                   push edi
// 0065f9f2  85c0                 test eax, eax
// 0065f9f4  744f                 je 0x65fa45
// 0065f9f6  8d7810               lea edi, [eax + 0x10]
// 0065f9f9  85ff                 test edi, edi
// 0065f9fb  7448                 je 0x65fa45
// 0065f9fd  8b400c               mov eax, dword ptr [eax + 0xc]
// 0065fa00  40                   inc eax
// 0065fa01  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fa05  89442404             mov dword ptr [esp + 4], eax
// 0065fa09  7561                 jne 0x65fa6c
// 0065fa0b  8b4608               mov eax, dword ptr [esi + 8]
// 0065fa0e  8b16                 mov edx, dword ptr [esi]
// 0065fa10  50                   push eax
// 0065fa11  8b4604               mov eax, dword ptr [esi + 4]
// 0065fa14  6a04                 push 4
// 0065fa16  8d4c240c             lea ecx, [esp + 0xc]
// 0065fa1a  51                   push ecx
// 0065fa1b  52                   push edx
// 0065fa1c  ffd0                 call eax
// 0065fa1e  894610               mov dword ptr [esi + 0x10], eax
// 0065fa21  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065fa25  83c410               add esp, 0x10
// 0065fa28  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fa2c  753e                 jne 0x65fa6c
// 0065fa2e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0065fa31  8b16                 mov edx, dword ptr [esi]
// 0065fa33  51                   push ecx
// 0065fa34  50                   push eax
// 0065fa35  8b4604               mov eax, dword ptr [esi + 4]
// 0065fa38  57                   push edi
// 0065fa39  52                   push edx
// 0065fa3a  ffd0                 call eax
// 0065fa3c  83c410               add esp, 0x10
// 0065fa3f  894610               mov dword ptr [esi + 0x10], eax
// 0065fa42  5f                   pop edi
// 0065fa43  59                   pop ecx
// 0065fa44  c3                   ret 
// 0065fa45  837e1000             cmp dword ptr [esi + 0x10], 0
// 0065fa49  c744240400000000     mov dword ptr [esp + 4], 0
// 0065fa51  7519                 jne 0x65fa6c
// 0065fa53  8b4e08               mov ecx, dword ptr [esi + 8]
// 0065fa56  8b06                 mov eax, dword ptr [esi]
// 0065fa58  51                   push ecx
// 0065fa59  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065fa5c  6a04                 push 4
// 0065fa5e  8d54240c             lea edx, [esp + 0xc]
// 0065fa62  52                   push edx
// 0065fa63  50                   push eax
// 0065fa64  ffd1                 call ecx
// 0065fa66  894610               mov dword ptr [esi + 0x10], eax
// 0065fa69  83c410               add esp, 0x10
// 0065fa6c  5f                   pop edi
// 0065fa6d  59                   pop ecx
// 0065fa6e  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpString)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c

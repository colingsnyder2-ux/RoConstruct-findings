// from server: 100% by auto
// roc 2009-06 006ed240  unit: seg_006e0000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed240
//
// 006ed240  51                   push ecx
// 006ed241  57                   push edi
// 006ed242  85c0                 test eax, eax
// 006ed244  744f                 je 0x6ed295
// 006ed246  8d7810               lea edi, [eax + 0x10]
// 006ed249  85ff                 test edi, edi
// 006ed24b  7448                 je 0x6ed295
// 006ed24d  8b400c               mov eax, dword ptr [eax + 0xc]
// 006ed250  40                   inc eax
// 006ed251  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed255  89442404             mov dword ptr [esp + 4], eax
// 006ed259  7561                 jne 0x6ed2bc
// 006ed25b  8b4608               mov eax, dword ptr [esi + 8]
// 006ed25e  8b16                 mov edx, dword ptr [esi]
// 006ed260  50                   push eax
// 006ed261  8b4604               mov eax, dword ptr [esi + 4]
// 006ed264  6a04                 push 4
// 006ed266  8d4c240c             lea ecx, [esp + 0xc]
// 006ed26a  51                   push ecx
// 006ed26b  52                   push edx
// 006ed26c  ffd0                 call eax
// 006ed26e  894610               mov dword ptr [esi + 0x10], eax
// 006ed271  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ed275  83c410               add esp, 0x10
// 006ed278  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed27c  753e                 jne 0x6ed2bc
// 006ed27e  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ed281  8b16                 mov edx, dword ptr [esi]
// 006ed283  51                   push ecx
// 006ed284  50                   push eax
// 006ed285  8b4604               mov eax, dword ptr [esi + 4]
// 006ed288  57                   push edi
// 006ed289  52                   push edx
// 006ed28a  ffd0                 call eax
// 006ed28c  83c410               add esp, 0x10
// 006ed28f  894610               mov dword ptr [esi + 0x10], eax
// 006ed292  5f                   pop edi
// 006ed293  59                   pop ecx
// 006ed294  c3                   ret 
// 006ed295  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ed299  c744240400000000     mov dword ptr [esp + 4], 0
// 006ed2a1  7519                 jne 0x6ed2bc
// 006ed2a3  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ed2a6  8b06                 mov eax, dword ptr [esi]
// 006ed2a8  51                   push ecx
// 006ed2a9  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ed2ac  6a04                 push 4
// 006ed2ae  8d54240c             lea edx, [esp + 0xc]
// 006ed2b2  52                   push edx
// 006ed2b3  50                   push eax
// 006ed2b4  ffd1                 call ecx
// 006ed2b6  894610               mov dword ptr [esi + 0x10], eax
// 006ed2b9  83c410               add esp, 0x10
// 006ed2bc  5f                   pop edi
// 006ed2bd  59                   pop ecx
// 006ed2be  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpString)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c

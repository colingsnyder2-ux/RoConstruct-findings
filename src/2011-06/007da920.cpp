// from server: 100% by auto
// roc 2011-06 007da920  unit: seg_007d0000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da920
//
// 007da920  51                   push ecx
// 007da921  57                   push edi
// 007da922  85c0                 test eax, eax
// 007da924  744f                 je 0x7da975
// 007da926  8d7810               lea edi, [eax + 0x10]
// 007da929  85ff                 test edi, edi
// 007da92b  7448                 je 0x7da975
// 007da92d  8b400c               mov eax, dword ptr [eax + 0xc]
// 007da930  40                   inc eax
// 007da931  837e1000             cmp dword ptr [esi + 0x10], 0
// 007da935  89442404             mov dword ptr [esp + 4], eax
// 007da939  7561                 jne 0x7da99c
// 007da93b  8b4608               mov eax, dword ptr [esi + 8]
// 007da93e  8b16                 mov edx, dword ptr [esi]
// 007da940  50                   push eax
// 007da941  8b4604               mov eax, dword ptr [esi + 4]
// 007da944  6a04                 push 4
// 007da946  8d4c240c             lea ecx, [esp + 0xc]
// 007da94a  51                   push ecx
// 007da94b  52                   push edx
// 007da94c  ffd0                 call eax
// 007da94e  894610               mov dword ptr [esi + 0x10], eax
// 007da951  8b442414             mov eax, dword ptr [esp + 0x14]
// 007da955  83c410               add esp, 0x10
// 007da958  837e1000             cmp dword ptr [esi + 0x10], 0
// 007da95c  753e                 jne 0x7da99c
// 007da95e  8b4e08               mov ecx, dword ptr [esi + 8]
// 007da961  8b16                 mov edx, dword ptr [esi]
// 007da963  51                   push ecx
// 007da964  50                   push eax
// 007da965  8b4604               mov eax, dword ptr [esi + 4]
// 007da968  57                   push edi
// 007da969  52                   push edx
// 007da96a  ffd0                 call eax
// 007da96c  83c410               add esp, 0x10
// 007da96f  894610               mov dword ptr [esi + 0x10], eax
// 007da972  5f                   pop edi
// 007da973  59                   pop ecx
// 007da974  c3                   ret 
// 007da975  837e1000             cmp dword ptr [esi + 0x10], 0
// 007da979  c744240400000000     mov dword ptr [esp + 4], 0
// 007da981  7519                 jne 0x7da99c
// 007da983  8b4e08               mov ecx, dword ptr [esi + 8]
// 007da986  8b06                 mov eax, dword ptr [esi]
// 007da988  51                   push ecx
// 007da989  8b4e04               mov ecx, dword ptr [esi + 4]
// 007da98c  6a04                 push 4
// 007da98e  8d54240c             lea edx, [esp + 0xc]
// 007da992  52                   push edx
// 007da993  50                   push eax
// 007da994  ffd1                 call ecx
// 007da996  894610               mov dword ptr [esi + 0x10], eax
// 007da999  83c410               add esp, 0x10
// 007da99c  5f                   pop edi
// 007da99d  59                   pop ecx
// 007da99e  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpString)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c

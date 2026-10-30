// from server: 100% by auto
// roc 2007-08 00614550  unit: seg_00610000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00614550
//
// 00614550  837e2400             cmp dword ptr [esi + 0x24], 0
// 00614554  7456                 je 0x6145ac
// 00614556  8b06                 mov eax, dword ptr [esi]
// 00614558  83f80d               cmp eax, 0xd
// 0061455b  742c                 je 0x614589
// 0061455d  83f80e               cmp eax, 0xe
// 00614560  7427                 je 0x614589
// 00614562  85c0                 test eax, eax
// 00614564  740a                 je 0x614570
// 00614566  56                   push esi
// 00614567  57                   push edi
// 00614568  e8234e0100           call 0x629390
// 0061456d  83c408               add esp, 8
// 00614570  8b4624               mov eax, dword ptr [esi + 0x24]
// 00614573  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00614576  8b5618               mov edx, dword ptr [esi + 0x18]
// 00614579  50                   push eax
// 0061457a  8b4208               mov eax, dword ptr [edx + 8]
// 0061457d  51                   push ecx
// 0061457e  50                   push eax
// 0061457f  57                   push edi
// 00614580  e85b480100           call 0x628de0
// 00614585  83c410               add esp, 0x10
// 00614588  c3                   ret 
// 00614589  6aff                 push -1
// 0061458b  56                   push esi
// 0061458c  57                   push edi
// 0061458d  e8fe440100           call 0x628a90
// 00614592  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00614595  8b5618               mov edx, dword ptr [esi + 0x18]
// 00614598  8b4208               mov eax, dword ptr [edx + 8]
// 0061459b  6aff                 push -1
// 0061459d  51                   push ecx
// 0061459e  50                   push eax
// 0061459f  57                   push edi
// 006145a0  e83b480100           call 0x628de0
// 006145a5  83c41c               add esp, 0x1c
// 006145a8  834620ff             add dword ptr [esi + 0x20], -1
// 006145ac  c3                   ret 
// library lua-5.1.4/lparser.c (function _lastlistfield)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

// roc 2009-06 006ee290  unit: seg_006e0000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ee290
//
// 006ee290  837e2400             cmp dword ptr [esi + 0x24], 0
// 006ee294  7455                 je 0x6ee2eb
// 006ee296  8b06                 mov eax, dword ptr [esi]
// 006ee298  83f80d               cmp eax, 0xd
// 006ee29b  742c                 je 0x6ee2c9
// 006ee29d  83f80e               cmp eax, 0xe
// 006ee2a0  7427                 je 0x6ee2c9
// 006ee2a2  85c0                 test eax, eax
// 006ee2a4  740a                 je 0x6ee2b0
// 006ee2a6  56                   push esi
// 006ee2a7  57                   push edi
// 006ee2a8  e833c50000           call 0x6fa7e0
// 006ee2ad  83c408               add esp, 8
// 006ee2b0  8b4624               mov eax, dword ptr [esi + 0x24]
// 006ee2b3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006ee2b6  8b5618               mov edx, dword ptr [esi + 0x18]
// 006ee2b9  50                   push eax
// 006ee2ba  8b4208               mov eax, dword ptr [edx + 8]
// 006ee2bd  51                   push ecx
// 006ee2be  50                   push eax
// 006ee2bf  57                   push edi
// 006ee2c0  e86bbf0000           call 0x6fa230
// 006ee2c5  83c410               add esp, 0x10
// 006ee2c8  c3                   ret 
// 006ee2c9  6aff                 push -1
// 006ee2cb  56                   push esi
// 006ee2cc  57                   push edi
// 006ee2cd  e80ebc0000           call 0x6f9ee0
// 006ee2d2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006ee2d5  8b5618               mov edx, dword ptr [esi + 0x18]
// 006ee2d8  8b4208               mov eax, dword ptr [edx + 8]
// 006ee2db  6aff                 push -1
// 006ee2dd  51                   push ecx
// 006ee2de  50                   push eax
// 006ee2df  57                   push edi
// 006ee2e0  e84bbf0000           call 0x6fa230
// 006ee2e5  83c41c               add esp, 0x1c
// 006ee2e8  ff4e20               dec dword ptr [esi + 0x20]
// 006ee2eb  c3                   ret 
// library lua-5.1.4/lparser.c (function _lastlistfield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

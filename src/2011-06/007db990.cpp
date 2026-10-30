// from server: 100% by auto
// roc 2011-06 007db990  unit: seg_007d0000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007db990
//
// 007db990  837e2400             cmp dword ptr [esi + 0x24], 0
// 007db994  7455                 je 0x7db9eb
// 007db996  8b06                 mov eax, dword ptr [esi]
// 007db998  83f80d               cmp eax, 0xd
// 007db99b  742c                 je 0x7db9c9
// 007db99d  83f80e               cmp eax, 0xe
// 007db9a0  7427                 je 0x7db9c9
// 007db9a2  85c0                 test eax, eax
// 007db9a4  740a                 je 0x7db9b0
// 007db9a6  56                   push esi
// 007db9a7  57                   push edi
// 007db9a8  e823740100           call 0x7f2dd0
// 007db9ad  83c408               add esp, 8
// 007db9b0  8b4624               mov eax, dword ptr [esi + 0x24]
// 007db9b3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007db9b6  8b5618               mov edx, dword ptr [esi + 0x18]
// 007db9b9  50                   push eax
// 007db9ba  8b4208               mov eax, dword ptr [edx + 8]
// 007db9bd  51                   push ecx
// 007db9be  50                   push eax
// 007db9bf  57                   push edi
// 007db9c0  e84b6e0100           call 0x7f2810
// 007db9c5  83c410               add esp, 0x10
// 007db9c8  c3                   ret 
// 007db9c9  6aff                 push -1
// 007db9cb  56                   push esi
// 007db9cc  57                   push edi
// 007db9cd  e8de6a0100           call 0x7f24b0
// 007db9d2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007db9d5  8b5618               mov edx, dword ptr [esi + 0x18]
// 007db9d8  8b4208               mov eax, dword ptr [edx + 8]
// 007db9db  6aff                 push -1
// 007db9dd  51                   push ecx
// 007db9de  50                   push eax
// 007db9df  57                   push edi
// 007db9e0  e82b6e0100           call 0x7f2810
// 007db9e5  83c41c               add esp, 0x1c
// 007db9e8  ff4e20               dec dword ptr [esi + 0x20]
// 007db9eb  c3                   ret 
// library lua-5.1.4/lparser.c (function _lastlistfield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

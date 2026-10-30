// from server: 100% by auto
// roc 2008-06 00661220  unit: RBX::FilterStairs  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00661220
//
// 00661220  837e2400             cmp dword ptr [esi + 0x24], 0
// 00661224  7455                 je 0x66127b
// 00661226  8b06                 mov eax, dword ptr [esi]
// 00661228  83f80d               cmp eax, 0xd
// 0066122b  742c                 je 0x661259
// 0066122d  83f80e               cmp eax, 0xe
// 00661230  7427                 je 0x661259
// 00661232  85c0                 test eax, eax
// 00661234  740a                 je 0x661240
// 00661236  56                   push esi
// 00661237  57                   push edi
// 00661238  e8f3a50000           call 0x66b830
// 0066123d  83c408               add esp, 8
// 00661240  8b4624               mov eax, dword ptr [esi + 0x24]
// 00661243  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00661246  8b5618               mov edx, dword ptr [esi + 0x18]
// 00661249  50                   push eax
// 0066124a  8b4208               mov eax, dword ptr [edx + 8]
// 0066124d  51                   push ecx
// 0066124e  50                   push eax
// 0066124f  57                   push edi
// 00661250  e83ba00000           call 0x66b290
// 00661255  83c410               add esp, 0x10
// 00661258  c3                   ret 
// 00661259  6aff                 push -1
// 0066125b  56                   push esi
// 0066125c  57                   push edi
// 0066125d  e8de9c0000           call 0x66af40
// 00661262  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00661265  8b5618               mov edx, dword ptr [esi + 0x18]
// 00661268  8b4208               mov eax, dword ptr [edx + 8]
// 0066126b  6aff                 push -1
// 0066126d  51                   push ecx
// 0066126e  50                   push eax
// 0066126f  57                   push edi
// 00661270  e81ba00000           call 0x66b290
// 00661275  83c41c               add esp, 0x1c
// 00661278  ff4e20               dec dword ptr [esi + 0x20]
// 0066127b  c3                   ret 
// library lua-5.1.4/lparser.c (function _lastlistfield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

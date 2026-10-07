// roc 2012-06 00938ea0  unit: seg_00930000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00938ea0
//
// 00938ea0  837e2400             cmp dword ptr [esi + 0x24], 0
// 00938ea4  7455                 je 0x938efb
// 00938ea6  8b06                 mov eax, dword ptr [esi]
// 00938ea8  83f80d               cmp eax, 0xd
// 00938eab  742c                 je 0x938ed9
// 00938ead  83f80e               cmp eax, 0xe
// 00938eb0  7427                 je 0x938ed9
// 00938eb2  85c0                 test eax, eax
// 00938eb4  740a                 je 0x938ec0
// 00938eb6  56                   push esi
// 00938eb7  57                   push edi
// 00938eb8  e8b3ee0200           call 0x967d70
// 00938ebd  83c408               add esp, 8
// 00938ec0  8b4624               mov eax, dword ptr [esi + 0x24]
// 00938ec3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00938ec6  8b5618               mov edx, dword ptr [esi + 0x18]
// 00938ec9  50                   push eax
// 00938eca  8b4208               mov eax, dword ptr [edx + 8]
// 00938ecd  51                   push ecx
// 00938ece  50                   push eax
// 00938ecf  57                   push edi
// 00938ed0  e8dbe80200           call 0x9677b0
// 00938ed5  83c410               add esp, 0x10
// 00938ed8  c3                   ret 
// 00938ed9  6aff                 push -1
// 00938edb  56                   push esi
// 00938edc  57                   push edi
// 00938edd  e86ee50200           call 0x967450
// 00938ee2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00938ee5  8b5618               mov edx, dword ptr [esi + 0x18]
// 00938ee8  8b4208               mov eax, dword ptr [edx + 8]
// 00938eeb  6aff                 push -1
// 00938eed  51                   push ecx
// 00938eee  50                   push eax
// 00938eef  57                   push edi
// 00938ef0  e8bbe80200           call 0x9677b0
// 00938ef5  83c41c               add esp, 0x1c
// 00938ef8  ff4e20               dec dword ptr [esi + 0x20]
// 00938efb  c3                   ret 
// library lua-5.1.4/lparser.c (function _lastlistfield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

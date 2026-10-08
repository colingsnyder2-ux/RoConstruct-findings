// from server: 100% by auto
// roc 2010-06 0077f530  unit: seg_00770000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077f530
//
// 0077f530  837e2400             cmp dword ptr [esi + 0x24], 0
// 0077f534  7455                 je 0x77f58b
// 0077f536  8b06                 mov eax, dword ptr [esi]
// 0077f538  83f80d               cmp eax, 0xd
// 0077f53b  742c                 je 0x77f569
// 0077f53d  83f80e               cmp eax, 0xe
// 0077f540  7427                 je 0x77f569
// 0077f542  85c0                 test eax, eax
// 0077f544  740a                 je 0x77f550
// 0077f546  56                   push esi
// 0077f547  57                   push edi
// 0077f548  e8230c0100           call 0x790170
// 0077f54d  83c408               add esp, 8
// 0077f550  8b4624               mov eax, dword ptr [esi + 0x24]
// 0077f553  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0077f556  8b5618               mov edx, dword ptr [esi + 0x18]
// 0077f559  50                   push eax
// 0077f55a  8b4208               mov eax, dword ptr [edx + 8]
// 0077f55d  51                   push ecx
// 0077f55e  50                   push eax
// 0077f55f  57                   push edi
// 0077f560  e85b060100           call 0x78fbc0
// 0077f565  83c410               add esp, 0x10
// 0077f568  c3                   ret 
// 0077f569  6aff                 push -1
// 0077f56b  56                   push esi
// 0077f56c  57                   push edi
// 0077f56d  e8ee020100           call 0x78f860
// 0077f572  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0077f575  8b5618               mov edx, dword ptr [esi + 0x18]
// 0077f578  8b4208               mov eax, dword ptr [edx + 8]
// 0077f57b  6aff                 push -1
// 0077f57d  51                   push ecx
// 0077f57e  50                   push eax
// 0077f57f  57                   push edi
// 0077f580  e83b060100           call 0x78fbc0
// 0077f585  83c41c               add esp, 0x1c
// 0077f588  ff4e20               dec dword ptr [esi + 0x20]
// 0077f58b  c3                   ret 
// library lua-5.1.4/lparser.c (function _lastlistfield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

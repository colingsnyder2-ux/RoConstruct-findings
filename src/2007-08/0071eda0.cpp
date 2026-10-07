// roc 2007-08 0071eda0  unit: CXTPDialogBar  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071eda0
//
// 0071eda0  56                   push esi
// 0071eda1  8bf0                 mov esi, eax
// 0071eda3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0071eda6  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0071eda9  57                   push edi
// 0071edaa  8b7814               mov edi, dword ptr [eax + 0x14]
// 0071edad  3bf9                 cmp edi, ecx
// 0071edaf  7602                 jbe 0x71edb3
// 0071edb1  8bf9                 mov edi, ecx
// 0071edb3  85ff                 test edi, edi
// 0071edb5  7435                 je 0x71edec
// 0071edb7  8b4010               mov eax, dword ptr [eax + 0x10]
// 0071edba  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0071edbd  57                   push edi
// 0071edbe  50                   push eax
// 0071edbf  51                   push ecx
// 0071edc0  e8871ff1ff           call 0x630d4c
// 0071edc5  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0071edc8  017e0c               add dword ptr [esi + 0xc], edi
// 0071edcb  017810               add dword ptr [eax + 0x10], edi
// 0071edce  017e14               add dword ptr [esi + 0x14], edi
// 0071edd1  297e10               sub dword ptr [esi + 0x10], edi
// 0071edd4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0071edd7  297814               sub dword ptr [eax + 0x14], edi
// 0071edda  8b761c               mov esi, dword ptr [esi + 0x1c]
// 0071eddd  83c40c               add esp, 0xc
// 0071ede0  837e1400             cmp dword ptr [esi + 0x14], 0
// 0071ede4  7506                 jne 0x71edec
// 0071ede6  8b5608               mov edx, dword ptr [esi + 8]
// 0071ede9  895610               mov dword ptr [esi + 0x10], edx
// 0071edec  5f                   pop edi
// 0071eded  5e                   pop esi
// 0071edee  c3                   ret 
// library zlib-1.2.3/deflate.c (function _flush_pending)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c

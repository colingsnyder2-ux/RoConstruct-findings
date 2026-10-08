// roc 2007-03 0072be50  unit: seg_00720000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072be50
//
// 0072be50  56                   push esi
// 0072be51  8bf0                 mov esi, eax
// 0072be53  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0072be56  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0072be59  57                   push edi
// 0072be5a  8b7814               mov edi, dword ptr [eax + 0x14]
// 0072be5d  3bf9                 cmp edi, ecx
// 0072be5f  7602                 jbe 0x72be63
// 0072be61  8bf9                 mov edi, ecx
// 0072be63  85ff                 test edi, edi
// 0072be65  7435                 je 0x72be9c
// 0072be67  8b4010               mov eax, dword ptr [eax + 0x10]
// 0072be6a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0072be6d  57                   push edi
// 0072be6e  50                   push eax
// 0072be6f  51                   push ecx
// 0072be70  e86d33efff           call 0x61f1e2
// 0072be75  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0072be78  017e0c               add dword ptr [esi + 0xc], edi
// 0072be7b  017810               add dword ptr [eax + 0x10], edi
// 0072be7e  017e14               add dword ptr [esi + 0x14], edi
// 0072be81  297e10               sub dword ptr [esi + 0x10], edi
// 0072be84  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0072be87  297814               sub dword ptr [eax + 0x14], edi
// 0072be8a  8b761c               mov esi, dword ptr [esi + 0x1c]
// 0072be8d  83c40c               add esp, 0xc
// 0072be90  837e1400             cmp dword ptr [esi + 0x14], 0
// 0072be94  7506                 jne 0x72be9c
// 0072be96  8b5608               mov edx, dword ptr [esi + 8]
// 0072be99  895610               mov dword ptr [esi + 0x10], edx
// 0072be9c  5f                   pop edi
// 0072be9d  5e                   pop esi
// 0072be9e  c3                   ret 
// library zlib-1.2.3/deflate.c (function _flush_pending)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c

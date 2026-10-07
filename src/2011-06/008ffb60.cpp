// roc 2011-06 008ffb60  unit: CXTPRibbonSystemPopupBar  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ffb60
//
// 008ffb60  56                   push esi
// 008ffb61  8bf0                 mov esi, eax
// 008ffb63  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008ffb66  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008ffb69  57                   push edi
// 008ffb6a  8b7814               mov edi, dword ptr [eax + 0x14]
// 008ffb6d  3bf9                 cmp edi, ecx
// 008ffb6f  7602                 jbe 0x8ffb73
// 008ffb71  8bf9                 mov edi, ecx
// 008ffb73  85ff                 test edi, edi
// 008ffb75  7435                 je 0x8ffbac
// 008ffb77  8b4010               mov eax, dword ptr [eax + 0x10]
// 008ffb7a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008ffb7d  57                   push edi
// 008ffb7e  50                   push eax
// 008ffb7f  51                   push ecx
// 008ffb80  e857baf0ff           call 0x80b5dc
// 008ffb85  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008ffb88  017e0c               add dword ptr [esi + 0xc], edi
// 008ffb8b  017810               add dword ptr [eax + 0x10], edi
// 008ffb8e  017e14               add dword ptr [esi + 0x14], edi
// 008ffb91  297e10               sub dword ptr [esi + 0x10], edi
// 008ffb94  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008ffb97  297814               sub dword ptr [eax + 0x14], edi
// 008ffb9a  8b761c               mov esi, dword ptr [esi + 0x1c]
// 008ffb9d  83c40c               add esp, 0xc
// 008ffba0  837e1400             cmp dword ptr [esi + 0x14], 0
// 008ffba4  7506                 jne 0x8ffbac
// 008ffba6  8b5608               mov edx, dword ptr [esi + 8]
// 008ffba9  895610               mov dword ptr [esi + 0x10], edx
// 008ffbac  5f                   pop edi
// 008ffbad  5e                   pop esi
// 008ffbae  c3                   ret 
// library zlib-1.2.3/deflate.c (function _flush_pending)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c

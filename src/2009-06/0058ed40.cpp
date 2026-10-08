// from server: 100% by auto
// roc 2009-06 0058ed40  unit: seg_00580000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058ed40
//
// 0058ed40  56                   push esi
// 0058ed41  8bf0                 mov esi, eax
// 0058ed43  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0058ed46  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0058ed49  57                   push edi
// 0058ed4a  8b7814               mov edi, dword ptr [eax + 0x14]
// 0058ed4d  3bf9                 cmp edi, ecx
// 0058ed4f  7602                 jbe 0x58ed53
// 0058ed51  8bf9                 mov edi, ecx
// 0058ed53  85ff                 test edi, edi
// 0058ed55  7435                 je 0x58ed8c
// 0058ed57  8b4010               mov eax, dword ptr [eax + 0x10]
// 0058ed5a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0058ed5d  57                   push edi
// 0058ed5e  50                   push eax
// 0058ed5f  51                   push ecx
// 0058ed60  e851b11800           call 0x719eb6
// 0058ed65  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0058ed68  017e0c               add dword ptr [esi + 0xc], edi
// 0058ed6b  017810               add dword ptr [eax + 0x10], edi
// 0058ed6e  017e14               add dword ptr [esi + 0x14], edi
// 0058ed71  297e10               sub dword ptr [esi + 0x10], edi
// 0058ed74  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0058ed77  297814               sub dword ptr [eax + 0x14], edi
// 0058ed7a  8b761c               mov esi, dword ptr [esi + 0x1c]
// 0058ed7d  83c40c               add esp, 0xc
// 0058ed80  837e1400             cmp dword ptr [esi + 0x14], 0
// 0058ed84  7506                 jne 0x58ed8c
// 0058ed86  8b5608               mov edx, dword ptr [esi + 8]
// 0058ed89  895610               mov dword ptr [esi + 0x10], edx
// 0058ed8c  5f                   pop edi
// 0058ed8d  5e                   pop esi
// 0058ed8e  c3                   ret 
// library zlib-1.2.3/deflate.c (function _flush_pending)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c

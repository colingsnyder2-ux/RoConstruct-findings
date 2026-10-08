// from server: 100% by auto
// roc 2012-06 00a77ee0  unit: CXTPRibbonSystemPopupBar  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a77ee0
//
// 00a77ee0  56                   push esi
// 00a77ee1  8bf0                 mov esi, eax
// 00a77ee3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a77ee6  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00a77ee9  57                   push edi
// 00a77eea  8b7814               mov edi, dword ptr [eax + 0x14]
// 00a77eed  3bf9                 cmp edi, ecx
// 00a77eef  7602                 jbe 0xa77ef3
// 00a77ef1  8bf9                 mov edi, ecx
// 00a77ef3  85ff                 test edi, edi
// 00a77ef5  7435                 je 0xa77f2c
// 00a77ef7  8b4010               mov eax, dword ptr [eax + 0x10]
// 00a77efa  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a77efd  57                   push edi
// 00a77efe  50                   push eax
// 00a77eff  51                   push ecx
// 00a77f00  e857b7f0ff           call 0x98365c
// 00a77f05  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a77f08  017e0c               add dword ptr [esi + 0xc], edi
// 00a77f0b  017810               add dword ptr [eax + 0x10], edi
// 00a77f0e  017e14               add dword ptr [esi + 0x14], edi
// 00a77f11  297e10               sub dword ptr [esi + 0x10], edi
// 00a77f14  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a77f17  297814               sub dword ptr [eax + 0x14], edi
// 00a77f1a  8b761c               mov esi, dword ptr [esi + 0x1c]
// 00a77f1d  83c40c               add esp, 0xc
// 00a77f20  837e1400             cmp dword ptr [esi + 0x14], 0
// 00a77f24  7506                 jne 0xa77f2c
// 00a77f26  8b5608               mov edx, dword ptr [esi + 8]
// 00a77f29  895610               mov dword ptr [esi + 0x10], edx
// 00a77f2c  5f                   pop edi
// 00a77f2d  5e                   pop esi
// 00a77f2e  c3                   ret 
// library zlib-1.2.3/deflate.c (function _flush_pending)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c

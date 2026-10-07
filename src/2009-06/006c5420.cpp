// roc 2009-06 006c5420  unit: lua_exception  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c5420
//
// 006c5420  56                   push esi
// 006c5421  8bf0                 mov esi, eax
// 006c5423  0fbe06               movsx eax, byte ptr [esi]
// 006c5426  46                   inc esi
// 006c5427  83f825               cmp eax, 0x25
// 006c542a  7442                 je 0x6c546e
// 006c542c  83f85b               cmp eax, 0x5b
// 006c542f  7404                 je 0x6c5435
// 006c5431  8bc6                 mov eax, esi
// 006c5433  5e                   pop esi
// 006c5434  c3                   ret 
// 006c5435  803e5e               cmp byte ptr [esi], 0x5e
// 006c5438  7506                 jne 0x6c5440
// 006c543a  46                   inc esi
// 006c543b  eb03                 jmp 0x6c5440
// 006c543d  8d4900               lea ecx, [ecx]
// 006c5440  803e00               cmp byte ptr [esi], 0
// 006c5443  7511                 jne 0x6c5456
// 006c5445  8b4708               mov eax, dword ptr [edi + 8]
// 006c5448  68dcbb8e00           push 0x8ebbdc
// 006c544d  50                   push eax
// 006c544e  e8ed4dffff           call 0x6ba240
// 006c5453  83c408               add esp, 8
// 006c5456  8a0e                 mov cl, byte ptr [esi]
// 006c5458  46                   inc esi
// 006c5459  80f925               cmp cl, 0x25
// 006c545c  7506                 jne 0x6c5464
// 006c545e  803e00               cmp byte ptr [esi], 0
// 006c5461  7401                 je 0x6c5464
// 006c5463  46                   inc esi
// 006c5464  803e5d               cmp byte ptr [esi], 0x5d
// 006c5467  75d7                 jne 0x6c5440
// 006c5469  8d4601               lea eax, [esi + 1]
// 006c546c  5e                   pop esi
// 006c546d  c3                   ret 
// 006c546e  803e00               cmp byte ptr [esi], 0
// 006c5471  7511                 jne 0x6c5484
// 006c5473  8b5708               mov edx, dword ptr [edi + 8]
// 006c5476  68b8bb8e00           push 0x8ebbb8
// 006c547b  52                   push edx
// 006c547c  e8bf4dffff           call 0x6ba240
// 006c5481  83c408               add esp, 8
// 006c5484  8d4601               lea eax, [esi + 1]
// 006c5487  5e                   pop esi
// 006c5488  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _classend)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c

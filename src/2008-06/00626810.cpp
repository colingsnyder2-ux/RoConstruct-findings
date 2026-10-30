// from server: 100% by auto
// roc 2008-06 00626810  unit: seg_00620000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00626810
//
// 00626810  56                   push esi
// 00626811  8bf0                 mov esi, eax
// 00626813  0fbe06               movsx eax, byte ptr [esi]
// 00626816  46                   inc esi
// 00626817  83f825               cmp eax, 0x25
// 0062681a  7442                 je 0x62685e
// 0062681c  83f85b               cmp eax, 0x5b
// 0062681f  7404                 je 0x626825
// 00626821  8bc6                 mov eax, esi
// 00626823  5e                   pop esi
// 00626824  c3                   ret 
// 00626825  803e5e               cmp byte ptr [esi], 0x5e
// 00626828  7506                 jne 0x626830
// 0062682a  46                   inc esi
// 0062682b  eb03                 jmp 0x626830
// 0062682d  8d4900               lea ecx, [ecx]
// 00626830  803e00               cmp byte ptr [esi], 0
// 00626833  7511                 jne 0x626846
// 00626835  8b4708               mov eax, dword ptr [edi + 8]
// 00626838  6894518400           push 0x845194
// 0062683d  50                   push eax
// 0062683e  e81da4feff           call 0x610c60
// 00626843  83c408               add esp, 8
// 00626846  8a0e                 mov cl, byte ptr [esi]
// 00626848  46                   inc esi
// 00626849  80f925               cmp cl, 0x25
// 0062684c  7506                 jne 0x626854
// 0062684e  803e00               cmp byte ptr [esi], 0
// 00626851  7401                 je 0x626854
// 00626853  46                   inc esi
// 00626854  803e5d               cmp byte ptr [esi], 0x5d
// 00626857  75d7                 jne 0x626830
// 00626859  8d4601               lea eax, [esi + 1]
// 0062685c  5e                   pop esi
// 0062685d  c3                   ret 
// 0062685e  803e00               cmp byte ptr [esi], 0
// 00626861  7511                 jne 0x626874
// 00626863  8b5708               mov edx, dword ptr [edi + 8]
// 00626866  6870518400           push 0x845170
// 0062686b  52                   push edx
// 0062686c  e8efa3feff           call 0x610c60
// 00626871  83c408               add esp, 8
// 00626874  8d4601               lea eax, [esi + 1]
// 00626877  5e                   pop esi
// 00626878  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _classend)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c

// from server: 100% by auto
// roc 2012-06 00856840  unit: lua_exception  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00856840
//
// 00856840  56                   push esi
// 00856841  8bf0                 mov esi, eax
// 00856843  0fbe06               movsx eax, byte ptr [esi]
// 00856846  46                   inc esi
// 00856847  83f825               cmp eax, 0x25
// 0085684a  7442                 je 0x85688e
// 0085684c  83f85b               cmp eax, 0x5b
// 0085684f  7404                 je 0x856855
// 00856851  8bc6                 mov eax, esi
// 00856853  5e                   pop esi
// 00856854  c3                   ret 
// 00856855  803e5e               cmp byte ptr [esi], 0x5e
// 00856858  7506                 jne 0x856860
// 0085685a  46                   inc esi
// 0085685b  eb03                 jmp 0x856860
// 0085685d  8d4900               lea ecx, [ecx]
// 00856860  803e00               cmp byte ptr [esi], 0
// 00856863  7511                 jne 0x856876
// 00856865  8b4708               mov eax, dword ptr [edi + 8]
// 00856868  681c3ebd00           push 0xbd3e1c
// 0085686d  50                   push eax
// 0085686e  e82dc6fdff           call 0x832ea0
// 00856873  83c408               add esp, 8
// 00856876  8a0e                 mov cl, byte ptr [esi]
// 00856878  46                   inc esi
// 00856879  80f925               cmp cl, 0x25
// 0085687c  7506                 jne 0x856884
// 0085687e  803e00               cmp byte ptr [esi], 0
// 00856881  7401                 je 0x856884
// 00856883  46                   inc esi
// 00856884  803e5d               cmp byte ptr [esi], 0x5d
// 00856887  75d7                 jne 0x856860
// 00856889  8d4601               lea eax, [esi + 1]
// 0085688c  5e                   pop esi
// 0085688d  c3                   ret 
// 0085688e  803e00               cmp byte ptr [esi], 0
// 00856891  7511                 jne 0x8568a4
// 00856893  8b5708               mov edx, dword ptr [edi + 8]
// 00856896  68f83dbd00           push 0xbd3df8
// 0085689b  52                   push edx
// 0085689c  e8ffc5fdff           call 0x832ea0
// 008568a1  83c408               add esp, 8
// 008568a4  8d4601               lea eax, [esi + 1]
// 008568a7  5e                   pop esi
// 008568a8  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _classend)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c

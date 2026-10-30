// from server: 100% by auto
// roc 2011-06 00780a60  unit: lua_exception  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00780a60
//
// 00780a60  56                   push esi
// 00780a61  8bf0                 mov esi, eax
// 00780a63  0fbe06               movsx eax, byte ptr [esi]
// 00780a66  46                   inc esi
// 00780a67  83f825               cmp eax, 0x25
// 00780a6a  7442                 je 0x780aae
// 00780a6c  83f85b               cmp eax, 0x5b
// 00780a6f  7404                 je 0x780a75
// 00780a71  8bc6                 mov eax, esi
// 00780a73  5e                   pop esi
// 00780a74  c3                   ret 
// 00780a75  803e5e               cmp byte ptr [esi], 0x5e
// 00780a78  7506                 jne 0x780a80
// 00780a7a  46                   inc esi
// 00780a7b  eb03                 jmp 0x780a80
// 00780a7d  8d4900               lea ecx, [ecx]
// 00780a80  803e00               cmp byte ptr [esi], 0
// 00780a83  7511                 jne 0x780a96
// 00780a85  8b4708               mov eax, dword ptr [edi + 8]
// 00780a88  686c7dab00           push 0xab7d6c
// 00780a8d  50                   push eax
// 00780a8e  e87d2cfeff           call 0x763710
// 00780a93  83c408               add esp, 8
// 00780a96  8a0e                 mov cl, byte ptr [esi]
// 00780a98  46                   inc esi
// 00780a99  80f925               cmp cl, 0x25
// 00780a9c  7506                 jne 0x780aa4
// 00780a9e  803e00               cmp byte ptr [esi], 0
// 00780aa1  7401                 je 0x780aa4
// 00780aa3  46                   inc esi
// 00780aa4  803e5d               cmp byte ptr [esi], 0x5d
// 00780aa7  75d7                 jne 0x780a80
// 00780aa9  8d4601               lea eax, [esi + 1]
// 00780aac  5e                   pop esi
// 00780aad  c3                   ret 
// 00780aae  803e00               cmp byte ptr [esi], 0
// 00780ab1  7511                 jne 0x780ac4
// 00780ab3  8b5708               mov edx, dword ptr [edi + 8]
// 00780ab6  68487dab00           push 0xab7d48
// 00780abb  52                   push edx
// 00780abc  e84f2cfeff           call 0x763710
// 00780ac1  83c408               add esp, 8
// 00780ac4  8d4601               lea eax, [esi + 1]
// 00780ac7  5e                   pop esi
// 00780ac8  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _classend)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c

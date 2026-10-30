// from server: 100% by auto
// roc 2007-08 005ca050  unit: seg_005c0000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ca050
//
// 005ca050  56                   push esi
// 005ca051  8bf0                 mov esi, eax
// 005ca053  0fbe06               movsx eax, byte ptr [esi]
// 005ca056  83c601               add esi, 1
// 005ca059  83f825               cmp eax, 0x25
// 005ca05c  7444                 je 0x5ca0a2
// 005ca05e  83f85b               cmp eax, 0x5b
// 005ca061  7404                 je 0x5ca067
// 005ca063  8bc6                 mov eax, esi
// 005ca065  5e                   pop esi
// 005ca066  c3                   ret 
// 005ca067  803e5e               cmp byte ptr [esi], 0x5e
// 005ca06a  7504                 jne 0x5ca070
// 005ca06c  83c601               add esi, 1
// 005ca06f  90                   nop 
// 005ca070  803e00               cmp byte ptr [esi], 0
// 005ca073  7511                 jne 0x5ca086
// 005ca075  8b4708               mov eax, dword ptr [edi + 8]
// 005ca078  68149f7b00           push 0x7b9f14
// 005ca07d  50                   push eax
// 005ca07e  e85d48ffff           call 0x5be8e0
// 005ca083  83c408               add esp, 8
// 005ca086  8a0e                 mov cl, byte ptr [esi]
// 005ca088  83c601               add esi, 1
// 005ca08b  80f925               cmp cl, 0x25
// 005ca08e  7508                 jne 0x5ca098
// 005ca090  803e00               cmp byte ptr [esi], 0
// 005ca093  7403                 je 0x5ca098
// 005ca095  83c601               add esi, 1
// 005ca098  803e5d               cmp byte ptr [esi], 0x5d
// 005ca09b  75d3                 jne 0x5ca070
// 005ca09d  8d4601               lea eax, [esi + 1]
// 005ca0a0  5e                   pop esi
// 005ca0a1  c3                   ret 
// 005ca0a2  803e00               cmp byte ptr [esi], 0
// 005ca0a5  7511                 jne 0x5ca0b8
// 005ca0a7  8b5708               mov edx, dword ptr [edi + 8]
// 005ca0aa  68f09e7b00           push 0x7b9ef0
// 005ca0af  52                   push edx
// 005ca0b0  e82b48ffff           call 0x5be8e0
// 005ca0b5  83c408               add esp, 8
// 005ca0b8  8d4601               lea eax, [esi + 1]
// 005ca0bb  5e                   pop esi
// 005ca0bc  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _classend)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c

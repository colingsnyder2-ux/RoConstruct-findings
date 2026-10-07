// roc 2007-08 005ca280  unit: seg_005c0000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ca280
//
// 005ca280  56                   push esi
// 005ca281  57                   push edi
// 005ca282  8bf8                 mov edi, eax
// 005ca284  803f00               cmp byte ptr [edi], 0
// 005ca287  8bf1                 mov esi, ecx
// 005ca289  7406                 je 0x5ca291
// 005ca28b  807f0100             cmp byte ptr [edi + 1], 0
// 005ca28f  7511                 jne 0x5ca2a2
// 005ca291  8b4308               mov eax, dword ptr [ebx + 8]
// 005ca294  68349f7b00           push 0x7b9f34
// 005ca299  50                   push eax
// 005ca29a  e84146ffff           call 0x5be8e0
// 005ca29f  83c408               add esp, 8
// 005ca2a2  8a07                 mov al, byte ptr [edi]
// 005ca2a4  3806                 cmp byte ptr [esi], al
// 005ca2a6  7405                 je 0x5ca2ad
// 005ca2a8  5f                   pop edi
// 005ca2a9  33c0                 xor eax, eax
// 005ca2ab  5e                   pop esi
// 005ca2ac  c3                   ret 
// 005ca2ad  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005ca2b0  0fbe7f01             movsx edi, byte ptr [edi + 1]
// 005ca2b4  ba01000000           mov edx, 1
// 005ca2b9  03f2                 add esi, edx
// 005ca2bb  3bf1                 cmp esi, ecx
// 005ca2bd  55                   push ebp
// 005ca2be  0fbee8               movsx ebp, al
// 005ca2c1  7321                 jae 0x5ca2e4
// 005ca2c3  0fbe06               movsx eax, byte ptr [esi]
// 005ca2c6  3bc7                 cmp eax, edi
// 005ca2c8  750c                 jne 0x5ca2d6
// 005ca2ca  83ea01               sub edx, 1
// 005ca2cd  750e                 jne 0x5ca2dd
// 005ca2cf  5d                   pop ebp
// 005ca2d0  5f                   pop edi
// 005ca2d1  8d4601               lea eax, [esi + 1]
// 005ca2d4  5e                   pop esi
// 005ca2d5  c3                   ret 
// 005ca2d6  3bc5                 cmp eax, ebp
// 005ca2d8  7503                 jne 0x5ca2dd
// 005ca2da  83c201               add edx, 1
// 005ca2dd  83c601               add esi, 1
// 005ca2e0  3bf1                 cmp esi, ecx
// 005ca2e2  72df                 jb 0x5ca2c3
// 005ca2e4  5d                   pop ebp
// 005ca2e5  5f                   pop edi
// 005ca2e6  33c0                 xor eax, eax
// 005ca2e8  5e                   pop esi
// 005ca2e9  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _matchbalance)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c

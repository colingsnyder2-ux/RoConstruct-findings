// from server: 100% by auto
// roc 2007-08 005ca4d0  unit: seg_005c0000  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ca4d0
//
// 005ca4d0  83c0cf               add eax, -0x31
// 005ca4d3  56                   push esi
// 005ca4d4  57                   push edi
// 005ca4d5  8bf1                 mov esi, ecx
// 005ca4d7  780c                 js 0x5ca4e5
// 005ca4d9  3b460c               cmp eax, dword ptr [esi + 0xc]
// 005ca4dc  7d07                 jge 0x5ca4e5
// 005ca4de  837cc614ff           cmp dword ptr [esi + eax*8 + 0x14], -1
// 005ca4e3  7511                 jne 0x5ca4f6
// 005ca4e5  8b4608               mov eax, dword ptr [esi + 8]
// 005ca4e8  68c09e7b00           push 0x7b9ec0
// 005ca4ed  50                   push eax
// 005ca4ee  e8ed43ffff           call 0x5be8e0
// 005ca4f3  83c408               add esp, 8
// 005ca4f6  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ca4f9  8b7cc614             mov edi, dword ptr [esi + eax*8 + 0x14]
// 005ca4fd  2bcb                 sub ecx, ebx
// 005ca4ff  3bcf                 cmp ecx, edi
// 005ca501  0f8290000000         jb 0x5ca597
// 005ca507  83ff04               cmp edi, 4
// 005ca50a  8b44c610             mov eax, dword ptr [esi + eax*8 + 0x10]
// 005ca50e  55                   push ebp
// 005ca50f  8bcf                 mov ecx, edi
// 005ca511  8bd3                 mov edx, ebx
// 005ca513  7214                 jb 0x5ca529
// 005ca515  8b30                 mov esi, dword ptr [eax]
// 005ca517  3b32                 cmp esi, dword ptr [edx]
// 005ca519  7512                 jne 0x5ca52d
// 005ca51b  83e904               sub ecx, 4
// 005ca51e  83c204               add edx, 4
// 005ca521  83c004               add eax, 4
// 005ca524  83f904               cmp ecx, 4
// 005ca527  73ec                 jae 0x5ca515
// 005ca529  85c9                 test ecx, ecx
// 005ca52b  745d                 je 0x5ca58a
// 005ca52d  0fb630               movzx esi, byte ptr [eax]
// 005ca530  0fb62a               movzx ebp, byte ptr [edx]
// 005ca533  2bf5                 sub esi, ebp
// 005ca535  7545                 jne 0x5ca57c
// 005ca537  83e901               sub ecx, 1
// 005ca53a  83c201               add edx, 1
// 005ca53d  83c001               add eax, 1
// 005ca540  85c9                 test ecx, ecx
// 005ca542  7446                 je 0x5ca58a
// 005ca544  0fb630               movzx esi, byte ptr [eax]
// 005ca547  0fb62a               movzx ebp, byte ptr [edx]
// 005ca54a  2bf5                 sub esi, ebp
// 005ca54c  752e                 jne 0x5ca57c
// 005ca54e  83e901               sub ecx, 1
// 005ca551  83c201               add edx, 1
// 005ca554  83c001               add eax, 1
// 005ca557  85c9                 test ecx, ecx
// 005ca559  742f                 je 0x5ca58a
// 005ca55b  0fb630               movzx esi, byte ptr [eax]
// 005ca55e  0fb62a               movzx ebp, byte ptr [edx]
// 005ca561  2bf5                 sub esi, ebp
// 005ca563  7517                 jne 0x5ca57c
// 005ca565  83e901               sub ecx, 1
// 005ca568  83c201               add edx, 1
// 005ca56b  83c001               add eax, 1
// 005ca56e  85c9                 test ecx, ecx
// 005ca570  7418                 je 0x5ca58a
// 005ca572  0fb630               movzx esi, byte ptr [eax]
// 005ca575  0fb612               movzx edx, byte ptr [edx]
// 005ca578  2bf2                 sub esi, edx
// 005ca57a  740e                 je 0x5ca58a
// 005ca57c  85f6                 test esi, esi
// 005ca57e  b801000000           mov eax, 1
// 005ca583  7f07                 jg 0x5ca58c
// 005ca585  83c8ff               or eax, 0xffffffff
// 005ca588  eb02                 jmp 0x5ca58c
// 005ca58a  33c0                 xor eax, eax
// 005ca58c  85c0                 test eax, eax
// 005ca58e  5d                   pop ebp
// 005ca58f  7506                 jne 0x5ca597
// 005ca591  8d041f               lea eax, [edi + ebx]
// 005ca594  5f                   pop edi
// 005ca595  5e                   pop esi
// 005ca596  c3                   ret 
// 005ca597  5f                   pop edi
// 005ca598  33c0                 xor eax, eax
// 005ca59a  5e                   pop esi
// 005ca59b  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _match_capture)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c

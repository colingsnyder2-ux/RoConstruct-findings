// from server: 100% by auto
// roc 2012-06 00856cc0  unit: lua_exception  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00856cc0
//
// 00856cc0  83c0cf               add eax, -0x31
// 00856cc3  55                   push ebp
// 00856cc4  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00856cc8  56                   push esi
// 00856cc9  57                   push edi
// 00856cca  8bf1                 mov esi, ecx
// 00856ccc  780c                 js 0x856cda
// 00856cce  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00856cd1  7d07                 jge 0x856cda
// 00856cd3  837cc614ff           cmp dword ptr [esi + eax*8 + 0x14], -1
// 00856cd8  7511                 jne 0x856ceb
// 00856cda  8b4608               mov eax, dword ptr [esi + 8]
// 00856cdd  68c83dbd00           push 0xbd3dc8
// 00856ce2  50                   push eax
// 00856ce3  e8b8c1fdff           call 0x832ea0
// 00856ce8  83c408               add esp, 8
// 00856ceb  8b4e04               mov ecx, dword ptr [esi + 4]
// 00856cee  8b7cc614             mov edi, dword ptr [esi + eax*8 + 0x14]
// 00856cf2  2bcd                 sub ecx, ebp
// 00856cf4  3bcf                 cmp ecx, edi
// 00856cf6  724c                 jb 0x856d44
// 00856cf8  8b74c610             mov esi, dword ptr [esi + eax*8 + 0x10]
// 00856cfc  8bcf                 mov ecx, edi
// 00856cfe  8bd5                 mov edx, ebp
// 00856d00  83ff04               cmp edi, 4
// 00856d03  7214                 jb 0x856d19
// 00856d05  8b06                 mov eax, dword ptr [esi]
// 00856d07  3b02                 cmp eax, dword ptr [edx]
// 00856d09  7539                 jne 0x856d44
// 00856d0b  83e904               sub ecx, 4
// 00856d0e  83c204               add edx, 4
// 00856d11  83c604               add esi, 4
// 00856d14  83f904               cmp ecx, 4
// 00856d17  73ec                 jae 0x856d05
// 00856d19  85c9                 test ecx, ecx
// 00856d1b  7420                 je 0x856d3d
// 00856d1d  8a02                 mov al, byte ptr [edx]
// 00856d1f  3a06                 cmp al, byte ptr [esi]
// 00856d21  7521                 jne 0x856d44
// 00856d23  83f901               cmp ecx, 1
// 00856d26  7615                 jbe 0x856d3d
// 00856d28  8a4201               mov al, byte ptr [edx + 1]
// 00856d2b  3a4601               cmp al, byte ptr [esi + 1]
// 00856d2e  7514                 jne 0x856d44
// 00856d30  83f902               cmp ecx, 2
// 00856d33  7608                 jbe 0x856d3d
// 00856d35  8a4a02               mov cl, byte ptr [edx + 2]
// 00856d38  3a4e02               cmp cl, byte ptr [esi + 2]
// 00856d3b  7507                 jne 0x856d44
// 00856d3d  8d042f               lea eax, [edi + ebp]
// 00856d40  5f                   pop edi
// 00856d41  5e                   pop esi
// 00856d42  5d                   pop ebp
// 00856d43  c3                   ret 
// 00856d44  5f                   pop edi
// 00856d45  5e                   pop esi
// 00856d46  33c0                 xor eax, eax
// 00856d48  5d                   pop ebp
// 00856d49  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _match_capture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c

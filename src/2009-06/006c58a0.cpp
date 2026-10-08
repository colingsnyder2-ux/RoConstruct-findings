// from server: 100% by auto
// roc 2009-06 006c58a0  unit: lua_exception  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c58a0
//
// 006c58a0  83c0cf               add eax, -0x31
// 006c58a3  55                   push ebp
// 006c58a4  8b6c2408             mov ebp, dword ptr [esp + 8]
// 006c58a8  56                   push esi
// 006c58a9  57                   push edi
// 006c58aa  8bf1                 mov esi, ecx
// 006c58ac  780c                 js 0x6c58ba
// 006c58ae  3b460c               cmp eax, dword ptr [esi + 0xc]
// 006c58b1  7d07                 jge 0x6c58ba
// 006c58b3  837cc614ff           cmp dword ptr [esi + eax*8 + 0x14], -1
// 006c58b8  7511                 jne 0x6c58cb
// 006c58ba  8b4608               mov eax, dword ptr [esi + 8]
// 006c58bd  6888bb8e00           push 0x8ebb88
// 006c58c2  50                   push eax
// 006c58c3  e87849ffff           call 0x6ba240
// 006c58c8  83c408               add esp, 8
// 006c58cb  8b4e04               mov ecx, dword ptr [esi + 4]
// 006c58ce  8b7cc614             mov edi, dword ptr [esi + eax*8 + 0x14]
// 006c58d2  2bcd                 sub ecx, ebp
// 006c58d4  3bcf                 cmp ecx, edi
// 006c58d6  724c                 jb 0x6c5924
// 006c58d8  8b74c610             mov esi, dword ptr [esi + eax*8 + 0x10]
// 006c58dc  8bcf                 mov ecx, edi
// 006c58de  8bd5                 mov edx, ebp
// 006c58e0  83ff04               cmp edi, 4
// 006c58e3  7214                 jb 0x6c58f9
// 006c58e5  8b06                 mov eax, dword ptr [esi]
// 006c58e7  3b02                 cmp eax, dword ptr [edx]
// 006c58e9  7539                 jne 0x6c5924
// 006c58eb  83e904               sub ecx, 4
// 006c58ee  83c204               add edx, 4
// 006c58f1  83c604               add esi, 4
// 006c58f4  83f904               cmp ecx, 4
// 006c58f7  73ec                 jae 0x6c58e5
// 006c58f9  85c9                 test ecx, ecx
// 006c58fb  7420                 je 0x6c591d
// 006c58fd  8a02                 mov al, byte ptr [edx]
// 006c58ff  3a06                 cmp al, byte ptr [esi]
// 006c5901  7521                 jne 0x6c5924
// 006c5903  83f901               cmp ecx, 1
// 006c5906  7615                 jbe 0x6c591d
// 006c5908  8a4201               mov al, byte ptr [edx + 1]
// 006c590b  3a4601               cmp al, byte ptr [esi + 1]
// 006c590e  7514                 jne 0x6c5924
// 006c5910  83f902               cmp ecx, 2
// 006c5913  7608                 jbe 0x6c591d
// 006c5915  8a4a02               mov cl, byte ptr [edx + 2]
// 006c5918  3a4e02               cmp cl, byte ptr [esi + 2]
// 006c591b  7507                 jne 0x6c5924
// 006c591d  8d042f               lea eax, [edi + ebp]
// 006c5920  5f                   pop edi
// 006c5921  5e                   pop esi
// 006c5922  5d                   pop ebp
// 006c5923  c3                   ret 
// 006c5924  5f                   pop edi
// 006c5925  5e                   pop esi
// 006c5926  33c0                 xor eax, eax
// 006c5928  5d                   pop ebp
// 006c5929  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _match_capture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c

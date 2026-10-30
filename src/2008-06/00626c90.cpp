// from server: 100% by auto
// roc 2008-06 00626c90  unit: seg_00620000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00626c90
//
// 00626c90  83c0cf               add eax, -0x31
// 00626c93  55                   push ebp
// 00626c94  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00626c98  56                   push esi
// 00626c99  57                   push edi
// 00626c9a  8bf1                 mov esi, ecx
// 00626c9c  780c                 js 0x626caa
// 00626c9e  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00626ca1  7d07                 jge 0x626caa
// 00626ca3  837cc614ff           cmp dword ptr [esi + eax*8 + 0x14], -1
// 00626ca8  7511                 jne 0x626cbb
// 00626caa  8b4608               mov eax, dword ptr [esi + 8]
// 00626cad  6840518400           push 0x845140
// 00626cb2  50                   push eax
// 00626cb3  e8a89ffeff           call 0x610c60
// 00626cb8  83c408               add esp, 8
// 00626cbb  8b4e04               mov ecx, dword ptr [esi + 4]
// 00626cbe  8b7cc614             mov edi, dword ptr [esi + eax*8 + 0x14]
// 00626cc2  2bcd                 sub ecx, ebp
// 00626cc4  3bcf                 cmp ecx, edi
// 00626cc6  724c                 jb 0x626d14
// 00626cc8  8b74c610             mov esi, dword ptr [esi + eax*8 + 0x10]
// 00626ccc  8bcf                 mov ecx, edi
// 00626cce  8bd5                 mov edx, ebp
// 00626cd0  83ff04               cmp edi, 4
// 00626cd3  7214                 jb 0x626ce9
// 00626cd5  8b06                 mov eax, dword ptr [esi]
// 00626cd7  3b02                 cmp eax, dword ptr [edx]
// 00626cd9  7539                 jne 0x626d14
// 00626cdb  83e904               sub ecx, 4
// 00626cde  83c204               add edx, 4
// 00626ce1  83c604               add esi, 4
// 00626ce4  83f904               cmp ecx, 4
// 00626ce7  73ec                 jae 0x626cd5
// 00626ce9  85c9                 test ecx, ecx
// 00626ceb  7420                 je 0x626d0d
// 00626ced  8a02                 mov al, byte ptr [edx]
// 00626cef  3a06                 cmp al, byte ptr [esi]
// 00626cf1  7521                 jne 0x626d14
// 00626cf3  83f901               cmp ecx, 1
// 00626cf6  7615                 jbe 0x626d0d
// 00626cf8  8a4201               mov al, byte ptr [edx + 1]
// 00626cfb  3a4601               cmp al, byte ptr [esi + 1]
// 00626cfe  7514                 jne 0x626d14
// 00626d00  83f902               cmp ecx, 2
// 00626d03  7608                 jbe 0x626d0d
// 00626d05  8a4a02               mov cl, byte ptr [edx + 2]
// 00626d08  3a4e02               cmp cl, byte ptr [esi + 2]
// 00626d0b  7507                 jne 0x626d14
// 00626d0d  8d042f               lea eax, [edi + ebp]
// 00626d10  5f                   pop edi
// 00626d11  5e                   pop esi
// 00626d12  5d                   pop ebp
// 00626d13  c3                   ret 
// 00626d14  5f                   pop edi
// 00626d15  5e                   pop esi
// 00626d16  33c0                 xor eax, eax
// 00626d18  5d                   pop ebp
// 00626d19  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _match_capture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c

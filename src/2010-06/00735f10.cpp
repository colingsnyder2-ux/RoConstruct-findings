// from server: 100% by auto
// roc 2010-06 00735f10  unit: seg_00730000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735f10
//
// 00735f10  83c0cf               add eax, -0x31
// 00735f13  55                   push ebp
// 00735f14  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00735f18  56                   push esi
// 00735f19  57                   push edi
// 00735f1a  8bf1                 mov esi, ecx
// 00735f1c  780c                 js 0x735f2a
// 00735f1e  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00735f21  7d07                 jge 0x735f2a
// 00735f23  837cc614ff           cmp dword ptr [esi + eax*8 + 0x14], -1
// 00735f28  7511                 jne 0x735f3b
// 00735f2a  8b4608               mov eax, dword ptr [esi + 8]
// 00735f2d  6808e3a400           push 0xa4e308
// 00735f32  50                   push eax
// 00735f33  e868c5feff           call 0x7224a0
// 00735f38  83c408               add esp, 8
// 00735f3b  8b4e04               mov ecx, dword ptr [esi + 4]
// 00735f3e  8b7cc614             mov edi, dword ptr [esi + eax*8 + 0x14]
// 00735f42  2bcd                 sub ecx, ebp
// 00735f44  3bcf                 cmp ecx, edi
// 00735f46  724c                 jb 0x735f94
// 00735f48  8b74c610             mov esi, dword ptr [esi + eax*8 + 0x10]
// 00735f4c  8bcf                 mov ecx, edi
// 00735f4e  8bd5                 mov edx, ebp
// 00735f50  83ff04               cmp edi, 4
// 00735f53  7214                 jb 0x735f69
// 00735f55  8b06                 mov eax, dword ptr [esi]
// 00735f57  3b02                 cmp eax, dword ptr [edx]
// 00735f59  7539                 jne 0x735f94
// 00735f5b  83e904               sub ecx, 4
// 00735f5e  83c204               add edx, 4
// 00735f61  83c604               add esi, 4
// 00735f64  83f904               cmp ecx, 4
// 00735f67  73ec                 jae 0x735f55
// 00735f69  85c9                 test ecx, ecx
// 00735f6b  7420                 je 0x735f8d
// 00735f6d  8a02                 mov al, byte ptr [edx]
// 00735f6f  3a06                 cmp al, byte ptr [esi]
// 00735f71  7521                 jne 0x735f94
// 00735f73  83f901               cmp ecx, 1
// 00735f76  7615                 jbe 0x735f8d
// 00735f78  8a4201               mov al, byte ptr [edx + 1]
// 00735f7b  3a4601               cmp al, byte ptr [esi + 1]
// 00735f7e  7514                 jne 0x735f94
// 00735f80  83f902               cmp ecx, 2
// 00735f83  7608                 jbe 0x735f8d
// 00735f85  8a4a02               mov cl, byte ptr [edx + 2]
// 00735f88  3a4e02               cmp cl, byte ptr [esi + 2]
// 00735f8b  7507                 jne 0x735f94
// 00735f8d  8d042f               lea eax, [edi + ebp]
// 00735f90  5f                   pop edi
// 00735f91  5e                   pop esi
// 00735f92  5d                   pop ebp
// 00735f93  c3                   ret 
// 00735f94  5f                   pop edi
// 00735f95  5e                   pop esi
// 00735f96  33c0                 xor eax, eax
// 00735f98  5d                   pop ebp
// 00735f99  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _match_capture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c

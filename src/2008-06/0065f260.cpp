// roc 2008-06 0065f260  unit: seg_00650000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f260
//
// 0065f260  55                   push ebp
// 0065f261  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0065f265  8d4701               lea eax, [edi + 1]
// 0065f268  56                   push esi
// 0065f269  83f8ed               cmp eax, -0x13
// 0065f26c  7609                 jbe 0x65f277
// 0065f26e  53                   push ebx
// 0065f26f  e85c140000           call 0x6606d0
// 0065f274  83c404               add esp, 4
// 0065f277  8d4f11               lea ecx, [edi + 0x11]
// 0065f27a  51                   push ecx
// 0065f27b  6a00                 push 0
// 0065f27d  6a00                 push 0
// 0065f27f  53                   push ebx
// 0065f280  e86b140000           call 0x6606f0
// 0065f285  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065f289  8bf0                 mov esi, eax
// 0065f28b  897e0c               mov dword ptr [esi + 0xc], edi
// 0065f28e  896e08               mov dword ptr [esi + 8], ebp
// 0065f291  8b5310               mov edx, dword ptr [ebx + 0x10]
// 0065f294  8a4214               mov al, byte ptr [edx + 0x14]
// 0065f297  57                   push edi
// 0065f298  51                   push ecx
// 0065f299  8d5610               lea edx, [esi + 0x10]
// 0065f29c  2403                 and al, 3
// 0065f29e  52                   push edx
// 0065f29f  884605               mov byte ptr [esi + 5], al
// 0065f2a2  c6460404             mov byte ptr [esi + 4], 4
// 0065f2a6  c6460600             mov byte ptr [esi + 6], 0
// 0065f2aa  e831250400           call 0x6a17e0
// 0065f2af  c6443e1000           mov byte ptr [esi + edi + 0x10], 0
// 0065f2b4  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0065f2b7  8b4808               mov ecx, dword ptr [eax + 8]
// 0065f2ba  8b10                 mov edx, dword ptr [eax]
// 0065f2bc  49                   dec ecx
// 0065f2bd  23e9                 and ebp, ecx
// 0065f2bf  8b0caa               mov ecx, dword ptr [edx + ebp*4]
// 0065f2c2  890e                 mov dword ptr [esi], ecx
// 0065f2c4  8b10                 mov edx, dword ptr [eax]
// 0065f2c6  8934aa               mov dword ptr [edx + ebp*4], esi
// 0065f2c9  ff4004               inc dword ptr [eax + 4]
// 0065f2cc  8b4804               mov ecx, dword ptr [eax + 4]
// 0065f2cf  8b4008               mov eax, dword ptr [eax + 8]
// 0065f2d2  83c41c               add esp, 0x1c
// 0065f2d5  3bc8                 cmp ecx, eax
// 0065f2d7  7613                 jbe 0x65f2ec
// 0065f2d9  3dfeffff3f           cmp eax, 0x3ffffffe
// 0065f2de  7f0c                 jg 0x65f2ec
// 0065f2e0  03c0                 add eax, eax
// 0065f2e2  50                   push eax
// 0065f2e3  53                   push ebx
// 0065f2e4  e8b7feffff           call 0x65f1a0
// 0065f2e9  83c408               add esp, 8
// 0065f2ec  8bc6                 mov eax, esi
// 0065f2ee  5e                   pop esi
// 0065f2ef  5d                   pop ebp
// 0065f2f0  c3                   ret 
// library lua-5.1.4/lstring.c (function _newlstr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c

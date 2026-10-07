// roc 2007-08 00617400  unit: seg_00610000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00617400
//
// 00617400  56                   push esi
// 00617401  8b733c               mov esi, dword ptr [ebx + 0x3c]
// 00617404  8b4e04               mov ecx, dword ptr [esi + 4]
// 00617407  8b4608               mov eax, dword ptr [esi + 8]
// 0061740a  83c101               add ecx, 1
// 0061740d  3bc8                 cmp ecx, eax
// 0061740f  764b                 jbe 0x61745c
// 00617411  3dfeffff7f           cmp eax, 0x7ffffffe
// 00617416  7210                 jb 0x617428
// 00617418  6a00                 push 0
// 0061741a  6830397c00           push 0x7c3930
// 0061741f  53                   push ebx
// 00617420  e8fb000000           call 0x617520
// 00617425  83c40c               add esp, 0xc
// 00617428  8b4608               mov eax, dword ptr [esi + 8]
// 0061742b  57                   push edi
// 0061742c  8d3c00               lea edi, [eax + eax]
// 0061742f  8d5701               lea edx, [edi + 1]
// 00617432  83fafd               cmp edx, -3
// 00617435  7713                 ja 0x61744a
// 00617437  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0061743a  57                   push edi
// 0061743b  50                   push eax
// 0061743c  8b06                 mov eax, dword ptr [esi]
// 0061743e  50                   push eax
// 0061743f  51                   push ecx
// 00617440  e8abc5ffff           call 0x6139f0
// 00617445  83c410               add esp, 0x10
// 00617448  eb0c                 jmp 0x617456
// 0061744a  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0061744d  52                   push edx
// 0061744e  e87dc5ffff           call 0x6139d0
// 00617453  83c404               add esp, 4
// 00617456  897e08               mov dword ptr [esi + 8], edi
// 00617459  8906                 mov dword ptr [esi], eax
// 0061745b  5f                   pop edi
// 0061745c  8b4604               mov eax, dword ptr [esi + 4]
// 0061745f  8b0e                 mov ecx, dword ptr [esi]
// 00617461  8a542408             mov dl, byte ptr [esp + 8]
// 00617465  881408               mov byte ptr [eax + ecx], dl
// 00617468  83460401             add dword ptr [esi + 4], 1
// 0061746c  5e                   pop esi
// 0061746d  c3                   ret 
// library lua-5.1.4/llex.c (function _save)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c

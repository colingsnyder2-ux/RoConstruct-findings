// from server: 100% by auto
// roc 2009-06 0057a3b0  unit: G3D::LineSegment  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a3b0
//
// 0057a3b0  83ec0c               sub esp, 0xc
// 0057a3b3  56                   push esi
// 0057a3b4  8bf1                 mov esi, ecx
// 0057a3b6  837e2402             cmp dword ptr [esi + 0x24], 2
// 0057a3ba  0f851a010000         jne 0x57a4da
// 0057a3c0  57                   push edi
// 0057a3c1  8b3d74e48900         mov edi, dword ptr [0x89e474]
// 0057a3c7  68e0be8c00           push 0x8cbee0
// 0057a3cc  56                   push esi
// 0057a3cd  ffd7                 call edi
// 0057a3cf  83c408               add esp, 8
// 0057a3d2  84c0                 test al, al
// 0057a3d4  742c                 je 0x57a402
// 0057a3d6  b801000000           mov eax, 1
// 0057a3db  8405c029a400         test byte ptr [0xa429c0], al
// 0057a3e1  7513                 jne 0x57a3f6
// 0057a3e3  0905c029a400         or dword ptr [0xa429c0], eax
// 0057a3e9  a1b0e58900           mov eax, dword ptr [0x89e5b0]
// 0057a3ee  dd00                 fld qword ptr [eax]
// 0057a3f0  dd1db829a400         fstp qword ptr [0xa429b8]
// 0057a3f6  dd05b829a400         fld qword ptr [0xa429b8]
// 0057a3fc  5f                   pop edi
// 0057a3fd  5e                   pop esi
// 0057a3fe  83c40c               add esp, 0xc
// 0057a401  c3                   ret 
// 0057a402  68d4be8c00           push 0x8cbed4
// 0057a407  56                   push esi
// 0057a408  ffd7                 call edi
// 0057a40a  83c408               add esp, 8
// 0057a40d  84c0                 test al, al
// 0057a40f  740d                 je 0x57a41e
// 0057a411  e8da37f2ff           call 0x49dbf0
// 0057a416  dd00                 fld qword ptr [eax]
// 0057a418  5f                   pop edi
// 0057a419  5e                   pop esi
// 0057a41a  83c40c               add esp, 0xc
// 0057a41d  c3                   ret 
// 0057a41e  68c8be8c00           push 0x8cbec8
// 0057a423  56                   push esi
// 0057a424  ffd7                 call edi
// 0057a426  83c408               add esp, 8
// 0057a429  84c0                 test al, al
// 0057a42b  740f                 je 0x57a43c
// 0057a42d  e8be37f2ff           call 0x49dbf0
// 0057a432  dd00                 fld qword ptr [eax]
// 0057a434  5f                   pop edi
// 0057a435  d9e0                 fchs 
// 0057a437  5e                   pop esi
// 0057a438  83c40c               add esp, 0xc
// 0057a43b  c3                   ret 
// 0057a43c  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0057a43f  83f902               cmp ecx, 2
// 0057a442  766a                 jbe 0x57a4ae
// 0057a444  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 0057a448  8d7e04               lea edi, [esi + 4]
// 0057a44b  7204                 jb 0x57a451
// 0057a44d  8b07                 mov eax, dword ptr [edi]
// 0057a44f  eb02                 jmp 0x57a453
// 0057a451  8bc7                 mov eax, edi
// 0057a453  803830               cmp byte ptr [eax], 0x30
// 0057a456  7556                 jne 0x57a4ae
// 0057a458  83f901               cmp ecx, 1
// 0057a45b  7306                 jae 0x57a463
// 0057a45d  ff15ace98900         call dword ptr [0x89e9ac]
// 0057a463  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057a466  83f810               cmp eax, 0x10
// 0057a469  7204                 jb 0x57a46f
// 0057a46b  8b0f                 mov ecx, dword ptr [edi]
// 0057a46d  eb02                 jmp 0x57a471
// 0057a46f  8bcf                 mov ecx, edi
// 0057a471  80790178             cmp byte ptr [ecx + 1], 0x78
// 0057a475  7537                 jne 0x57a4ae
// 0057a477  83f810               cmp eax, 0x10
// 0057a47a  7202                 jb 0x57a47e
// 0057a47c  8b3f                 mov edi, dword ptr [edi]
// 0057a47e  8d4c2408             lea ecx, [esp + 8]
// 0057a482  51                   push ecx
// 0057a483  68c4be8c00           push 0x8cbec4
// 0057a488  57                   push edi
// 0057a489  ff151ce98900         call dword ptr [0x89e91c]
// 0057a48f  db442414             fild dword ptr [esp + 0x14]
// 0057a493  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057a497  83c40c               add esp, 0xc
// 0057a49a  85d2                 test edx, edx
// 0057a49c  0f8d5affffff         jge 0x57a3fc
// 0057a4a2  dc05c8178b00         fadd qword ptr [0x8b17c8]
// 0057a4a8  5f                   pop edi
// 0057a4a9  5e                   pop esi
// 0057a4aa  83c40c               add esp, 0xc
// 0057a4ad  c3                   ret 
// 0057a4ae  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 0057a4b2  7205                 jb 0x57a4b9
// 0057a4b4  8b7604               mov esi, dword ptr [esi + 4]
// 0057a4b7  eb03                 jmp 0x57a4bc
// 0057a4b9  83c604               add esi, 4
// 0057a4bc  8d44240c             lea eax, [esp + 0xc]
// 0057a4c0  50                   push eax
// 0057a4c1  68c0be8c00           push 0x8cbec0
// 0057a4c6  56                   push esi
// 0057a4c7  ff151ce98900         call dword ptr [0x89e91c]
// 0057a4cd  dd442418             fld qword ptr [esp + 0x18]
// 0057a4d1  83c40c               add esp, 0xc
// 0057a4d4  5f                   pop edi
// 0057a4d5  5e                   pop esi
// 0057a4d6  83c40c               add esp, 0xc
// 0057a4d9  c3                   ret 
// 0057a4da  d9ee                 fldz 
// 0057a4dc  5e                   pop esi
// 0057a4dd  83c40c               add esp, 0xc
// 0057a4e0  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?number@Token@G3D@@QBENXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp

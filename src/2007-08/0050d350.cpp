// from server: 100% by auto
// roc 2007-08 0050d350  unit: G3D::BinaryInput  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d350
//
// 0050d350  83ec0c               sub esp, 0xc
// 0050d353  56                   push esi
// 0050d354  8bf1                 mov esi, ecx
// 0050d356  837e2402             cmp dword ptr [esi + 0x24], 2
// 0050d35a  0f851a010000         jne 0x50d47a
// 0050d360  57                   push edi
// 0050d361  8b3df8e57700         mov edi, dword ptr [0x77e5f8]
// 0050d367  68200d7a00           push 0x7a0d20
// 0050d36c  56                   push esi
// 0050d36d  ffd7                 call edi
// 0050d36f  83c408               add esp, 8
// 0050d372  84c0                 test al, al
// 0050d374  742c                 je 0x50d3a2
// 0050d376  b801000000           mov eax, 1
// 0050d37b  840548098c00         test byte ptr [0x8c0948], al
// 0050d381  7513                 jne 0x50d396
// 0050d383  090548098c00         or dword ptr [0x8c0948], eax
// 0050d389  a144e57700           mov eax, dword ptr [0x77e544]
// 0050d38e  dd00                 fld qword ptr [eax]
// 0050d390  dd1d40098c00         fstp qword ptr [0x8c0940]
// 0050d396  dd0540098c00         fld qword ptr [0x8c0940]
// 0050d39c  5f                   pop edi
// 0050d39d  5e                   pop esi
// 0050d39e  83c40c               add esp, 0xc
// 0050d3a1  c3                   ret 
// 0050d3a2  68140d7a00           push 0x7a0d14
// 0050d3a7  56                   push esi
// 0050d3a8  ffd7                 call edi
// 0050d3aa  83c408               add esp, 8
// 0050d3ad  84c0                 test al, al
// 0050d3af  740d                 je 0x50d3be
// 0050d3b1  e87a5cf6ff           call 0x473030
// 0050d3b6  dd00                 fld qword ptr [eax]
// 0050d3b8  5f                   pop edi
// 0050d3b9  5e                   pop esi
// 0050d3ba  83c40c               add esp, 0xc
// 0050d3bd  c3                   ret 
// 0050d3be  68080d7a00           push 0x7a0d08
// 0050d3c3  56                   push esi
// 0050d3c4  ffd7                 call edi
// 0050d3c6  83c408               add esp, 8
// 0050d3c9  84c0                 test al, al
// 0050d3cb  740f                 je 0x50d3dc
// 0050d3cd  e85e5cf6ff           call 0x473030
// 0050d3d2  dd00                 fld qword ptr [eax]
// 0050d3d4  5f                   pop edi
// 0050d3d5  d9e0                 fchs 
// 0050d3d7  5e                   pop esi
// 0050d3d8  83c40c               add esp, 0xc
// 0050d3db  c3                   ret 
// 0050d3dc  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0050d3df  83f902               cmp ecx, 2
// 0050d3e2  766a                 jbe 0x50d44e
// 0050d3e4  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 0050d3e8  8d7e04               lea edi, [esi + 4]
// 0050d3eb  7204                 jb 0x50d3f1
// 0050d3ed  8b07                 mov eax, dword ptr [edi]
// 0050d3ef  eb02                 jmp 0x50d3f3
// 0050d3f1  8bc7                 mov eax, edi
// 0050d3f3  803830               cmp byte ptr [eax], 0x30
// 0050d3f6  7556                 jne 0x50d44e
// 0050d3f8  83f901               cmp ecx, 1
// 0050d3fb  7306                 jae 0x50d403
// 0050d3fd  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050d403  8b4618               mov eax, dword ptr [esi + 0x18]
// 0050d406  83f810               cmp eax, 0x10
// 0050d409  7204                 jb 0x50d40f
// 0050d40b  8b0f                 mov ecx, dword ptr [edi]
// 0050d40d  eb02                 jmp 0x50d411
// 0050d40f  8bcf                 mov ecx, edi
// 0050d411  80790178             cmp byte ptr [ecx + 1], 0x78
// 0050d415  7537                 jne 0x50d44e
// 0050d417  83f810               cmp eax, 0x10
// 0050d41a  7202                 jb 0x50d41e
// 0050d41c  8b3f                 mov edi, dword ptr [edi]
// 0050d41e  8d4c2408             lea ecx, [esp + 8]
// 0050d422  51                   push ecx
// 0050d423  68040d7a00           push 0x7a0d04
// 0050d428  57                   push edi
// 0050d429  ff15b4e87700         call dword ptr [0x77e8b4]
// 0050d42f  db442414             fild dword ptr [esp + 0x14]
// 0050d433  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050d437  83c40c               add esp, 0xc
// 0050d43a  85d2                 test edx, edx
// 0050d43c  0f8d5affffff         jge 0x50d39c
// 0050d442  dc0530b17800         fadd qword ptr [0x78b130]
// 0050d448  5f                   pop edi
// 0050d449  5e                   pop esi
// 0050d44a  83c40c               add esp, 0xc
// 0050d44d  c3                   ret 
// 0050d44e  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 0050d452  7205                 jb 0x50d459
// 0050d454  8b7604               mov esi, dword ptr [esi + 4]
// 0050d457  eb03                 jmp 0x50d45c
// 0050d459  83c604               add esi, 4
// 0050d45c  8d44240c             lea eax, [esp + 0xc]
// 0050d460  50                   push eax
// 0050d461  68000d7a00           push 0x7a0d00
// 0050d466  56                   push esi
// 0050d467  ff15b4e87700         call dword ptr [0x77e8b4]
// 0050d46d  dd442418             fld qword ptr [esp + 0x18]
// 0050d471  83c40c               add esp, 0xc
// 0050d474  5f                   pop edi
// 0050d475  5e                   pop esi
// 0050d476  83c40c               add esp, 0xc
// 0050d479  c3                   ret 
// 0050d47a  d9ee                 fldz 
// 0050d47c  5e                   pop esi
// 0050d47d  83c40c               add esp, 0xc
// 0050d480  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?number@Token@G3D@@QBENXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp

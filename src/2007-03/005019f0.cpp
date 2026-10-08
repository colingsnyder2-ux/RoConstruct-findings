// roc 2007-03 005019f0  unit: seg_00500000  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005019f0
//
// 005019f0  83ec0c               sub esp, 0xc
// 005019f3  56                   push esi
// 005019f4  8bf1                 mov esi, ecx
// 005019f6  837e2402             cmp dword ptr [esi + 0x24], 2
// 005019fa  0f851a010000         jne 0x501b1a
// 00501a00  57                   push edi
// 00501a01  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 00501a07  68f0047a00           push 0x7a04f0
// 00501a0c  56                   push esi
// 00501a0d  ffd7                 call edi
// 00501a0f  83c408               add esp, 8
// 00501a12  84c0                 test al, al
// 00501a14  742c                 je 0x501a42
// 00501a16  b801000000           mov eax, 1
// 00501a1b  840518ae8b00         test byte ptr [0x8bae18], al
// 00501a21  7513                 jne 0x501a36
// 00501a23  090518ae8b00         or dword ptr [0x8bae18], eax
// 00501a29  a118e67700           mov eax, dword ptr [0x77e618]
// 00501a2e  dd00                 fld qword ptr [eax]
// 00501a30  dd1d10ae8b00         fstp qword ptr [0x8bae10]
// 00501a36  dd0510ae8b00         fld qword ptr [0x8bae10]
// 00501a3c  5f                   pop edi
// 00501a3d  5e                   pop esi
// 00501a3e  83c40c               add esp, 0xc
// 00501a41  c3                   ret 
// 00501a42  68e4047a00           push 0x7a04e4
// 00501a47  56                   push esi
// 00501a48  ffd7                 call edi
// 00501a4a  83c408               add esp, 8
// 00501a4d  84c0                 test al, al
// 00501a4f  740d                 je 0x501a5e
// 00501a51  e8ca16f7ff           call 0x473120
// 00501a56  dd00                 fld qword ptr [eax]
// 00501a58  5f                   pop edi
// 00501a59  5e                   pop esi
// 00501a5a  83c40c               add esp, 0xc
// 00501a5d  c3                   ret 
// 00501a5e  68d8047a00           push 0x7a04d8
// 00501a63  56                   push esi
// 00501a64  ffd7                 call edi
// 00501a66  83c408               add esp, 8
// 00501a69  84c0                 test al, al
// 00501a6b  740f                 je 0x501a7c
// 00501a6d  e8ae16f7ff           call 0x473120
// 00501a72  dd00                 fld qword ptr [eax]
// 00501a74  5f                   pop edi
// 00501a75  d9e0                 fchs 
// 00501a77  5e                   pop esi
// 00501a78  83c40c               add esp, 0xc
// 00501a7b  c3                   ret 
// 00501a7c  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00501a7f  83f902               cmp ecx, 2
// 00501a82  766a                 jbe 0x501aee
// 00501a84  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 00501a88  8d7e04               lea edi, [esi + 4]
// 00501a8b  7204                 jb 0x501a91
// 00501a8d  8b07                 mov eax, dword ptr [edi]
// 00501a8f  eb02                 jmp 0x501a93
// 00501a91  8bc7                 mov eax, edi
// 00501a93  803830               cmp byte ptr [eax], 0x30
// 00501a96  7556                 jne 0x501aee
// 00501a98  83f901               cmp ecx, 1
// 00501a9b  7306                 jae 0x501aa3
// 00501a9d  ff1544e97700         call dword ptr [0x77e944]
// 00501aa3  8b4618               mov eax, dword ptr [esi + 0x18]
// 00501aa6  83f810               cmp eax, 0x10
// 00501aa9  7204                 jb 0x501aaf
// 00501aab  8b0f                 mov ecx, dword ptr [edi]
// 00501aad  eb02                 jmp 0x501ab1
// 00501aaf  8bcf                 mov ecx, edi
// 00501ab1  80790178             cmp byte ptr [ecx + 1], 0x78
// 00501ab5  7537                 jne 0x501aee
// 00501ab7  83f810               cmp eax, 0x10
// 00501aba  7202                 jb 0x501abe
// 00501abc  8b3f                 mov edi, dword ptr [edi]
// 00501abe  8d4c2408             lea ecx, [esp + 8]
// 00501ac2  51                   push ecx
// 00501ac3  68d4047a00           push 0x7a04d4
// 00501ac8  57                   push edi
// 00501ac9  ff15dce87700         call dword ptr [0x77e8dc]
// 00501acf  db442414             fild dword ptr [esp + 0x14]
// 00501ad3  8b542414             mov edx, dword ptr [esp + 0x14]
// 00501ad7  83c40c               add esp, 0xc
// 00501ada  85d2                 test edx, edx
// 00501adc  0f8d5affffff         jge 0x501a3c
// 00501ae2  dc05a89b7800         fadd qword ptr [0x789ba8]
// 00501ae8  5f                   pop edi
// 00501ae9  5e                   pop esi
// 00501aea  83c40c               add esp, 0xc
// 00501aed  c3                   ret 
// 00501aee  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 00501af2  7205                 jb 0x501af9
// 00501af4  8b7604               mov esi, dword ptr [esi + 4]
// 00501af7  eb03                 jmp 0x501afc
// 00501af9  83c604               add esi, 4
// 00501afc  8d44240c             lea eax, [esp + 0xc]
// 00501b00  50                   push eax
// 00501b01  68d0047a00           push 0x7a04d0
// 00501b06  56                   push esi
// 00501b07  ff15dce87700         call dword ptr [0x77e8dc]
// 00501b0d  dd442418             fld qword ptr [esp + 0x18]
// 00501b11  83c40c               add esp, 0xc
// 00501b14  5f                   pop edi
// 00501b15  5e                   pop esi
// 00501b16  83c40c               add esp, 0xc
// 00501b19  c3                   ret 
// 00501b1a  d9ee                 fldz 
// 00501b1c  5e                   pop esi
// 00501b1d  83c40c               add esp, 0xc
// 00501b20  c3                   ret 
// library rbxgs-g3d/G3Dcpp\TextInput.cpp (function ?number@Token@G3D@@QBENXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/TextInput.cpp

// roc 2008-06 00516400  unit: G3D::BinaryInput  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00516400
//
// 00516400  83ec0c               sub esp, 0xc
// 00516403  56                   push esi
// 00516404  8bf1                 mov esi, ecx
// 00516406  837e2402             cmp dword ptr [esi + 0x24], 2
// 0051640a  0f851a010000         jne 0x51652a
// 00516410  57                   push edi
// 00516411  8b3d6c238000         mov edi, dword ptr [0x80236c]
// 00516417  68f0898200           push 0x8289f0
// 0051641c  56                   push esi
// 0051641d  ffd7                 call edi
// 0051641f  83c408               add esp, 8
// 00516422  84c0                 test al, al
// 00516424  742c                 je 0x516452
// 00516426  b801000000           mov eax, 1
// 0051642b  8405b0359700         test byte ptr [0x9735b0], al
// 00516431  7513                 jne 0x516446
// 00516433  0905b0359700         or dword ptr [0x9735b0], eax
// 00516439  a1cc248000           mov eax, dword ptr [0x8024cc]
// 0051643e  dd00                 fld qword ptr [eax]
// 00516440  dd1da8359700         fstp qword ptr [0x9735a8]
// 00516446  dd05a8359700         fld qword ptr [0x9735a8]
// 0051644c  5f                   pop edi
// 0051644d  5e                   pop esi
// 0051644e  83c40c               add esp, 0xc
// 00516451  c3                   ret 
// 00516452  68e4898200           push 0x8289e4
// 00516457  56                   push esi
// 00516458  ffd7                 call edi
// 0051645a  83c408               add esp, 8
// 0051645d  84c0                 test al, al
// 0051645f  740d                 je 0x51646e
// 00516461  e8ba00f6ff           call 0x476520
// 00516466  dd00                 fld qword ptr [eax]
// 00516468  5f                   pop edi
// 00516469  5e                   pop esi
// 0051646a  83c40c               add esp, 0xc
// 0051646d  c3                   ret 
// 0051646e  68d8898200           push 0x8289d8
// 00516473  56                   push esi
// 00516474  ffd7                 call edi
// 00516476  83c408               add esp, 8
// 00516479  84c0                 test al, al
// 0051647b  740f                 je 0x51648c
// 0051647d  e89e00f6ff           call 0x476520
// 00516482  dd00                 fld qword ptr [eax]
// 00516484  5f                   pop edi
// 00516485  d9e0                 fchs 
// 00516487  5e                   pop esi
// 00516488  83c40c               add esp, 0xc
// 0051648b  c3                   ret 
// 0051648c  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0051648f  83f902               cmp ecx, 2
// 00516492  766a                 jbe 0x5164fe
// 00516494  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 00516498  8d7e04               lea edi, [esi + 4]
// 0051649b  7204                 jb 0x5164a1
// 0051649d  8b07                 mov eax, dword ptr [edi]
// 0051649f  eb02                 jmp 0x5164a3
// 005164a1  8bc7                 mov eax, edi
// 005164a3  803830               cmp byte ptr [eax], 0x30
// 005164a6  7556                 jne 0x5164fe
// 005164a8  83f901               cmp ecx, 1
// 005164ab  7306                 jae 0x5164b3
// 005164ad  ff1590288000         call dword ptr [0x802890]
// 005164b3  8b4618               mov eax, dword ptr [esi + 0x18]
// 005164b6  83f810               cmp eax, 0x10
// 005164b9  7204                 jb 0x5164bf
// 005164bb  8b0f                 mov ecx, dword ptr [edi]
// 005164bd  eb02                 jmp 0x5164c1
// 005164bf  8bcf                 mov ecx, edi
// 005164c1  80790178             cmp byte ptr [ecx + 1], 0x78
// 005164c5  7537                 jne 0x5164fe
// 005164c7  83f810               cmp eax, 0x10
// 005164ca  7202                 jb 0x5164ce
// 005164cc  8b3f                 mov edi, dword ptr [edi]
// 005164ce  8d4c2408             lea ecx, [esp + 8]
// 005164d2  51                   push ecx
// 005164d3  68d4898200           push 0x8289d4
// 005164d8  57                   push edi
// 005164d9  ff1580278000         call dword ptr [0x802780]
// 005164df  db442414             fild dword ptr [esp + 0x14]
// 005164e3  8b542414             mov edx, dword ptr [esp + 0x14]
// 005164e7  83c40c               add esp, 0xc
// 005164ea  85d2                 test edx, edx
// 005164ec  0f8d5affffff         jge 0x51644c
// 005164f2  dc0540128100         fadd qword ptr [0x811240]
// 005164f8  5f                   pop edi
// 005164f9  5e                   pop esi
// 005164fa  83c40c               add esp, 0xc
// 005164fd  c3                   ret 
// 005164fe  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 00516502  7205                 jb 0x516509
// 00516504  8b7604               mov esi, dword ptr [esi + 4]
// 00516507  eb03                 jmp 0x51650c
// 00516509  83c604               add esi, 4
// 0051650c  8d44240c             lea eax, [esp + 0xc]
// 00516510  50                   push eax
// 00516511  68d0898200           push 0x8289d0
// 00516516  56                   push esi
// 00516517  ff1580278000         call dword ptr [0x802780]
// 0051651d  dd442418             fld qword ptr [esp + 0x18]
// 00516521  83c40c               add esp, 0xc
// 00516524  5f                   pop edi
// 00516525  5e                   pop esi
// 00516526  83c40c               add esp, 0xc
// 00516529  c3                   ret 
// 0051652a  d9ee                 fldz 
// 0051652c  5e                   pop esi
// 0051652d  83c40c               add esp, 0xc
// 00516530  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?number@Token@G3D@@QBENXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp

// roc 2009-12 005fa940  unit: G3D::LineSegment  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fa940
//
// 005fa940  83ec0c               sub esp, 0xc
// 005fa943  56                   push esi
// 005fa944  8bf1                 mov esi, ecx
// 005fa946  837e2402             cmp dword ptr [esi + 0x24], 2
// 005fa94a  0f851a010000         jne 0x5faa6a
// 005fa950  57                   push edi
// 005fa951  8b3dacb69800         mov edi, dword ptr [0x98b6ac]
// 005fa957  68502d9c00           push 0x9c2d50
// 005fa95c  56                   push esi
// 005fa95d  ffd7                 call edi
// 005fa95f  83c408               add esp, 8
// 005fa962  84c0                 test al, al
// 005fa964  742c                 je 0x5fa992
// 005fa966  b801000000           mov eax, 1
// 005fa96b  8405303eb800         test byte ptr [0xb83e30], al
// 005fa971  7513                 jne 0x5fa986
// 005fa973  0905303eb800         or dword ptr [0xb83e30], eax
// 005fa979  a1e0b49800           mov eax, dword ptr [0x98b4e0]
// 005fa97e  dd00                 fld qword ptr [eax]
// 005fa980  dd1d283eb800         fstp qword ptr [0xb83e28]
// 005fa986  dd05283eb800         fld qword ptr [0xb83e28]
// 005fa98c  5f                   pop edi
// 005fa98d  5e                   pop esi
// 005fa98e  83c40c               add esp, 0xc
// 005fa991  c3                   ret 
// 005fa992  68442d9c00           push 0x9c2d44
// 005fa997  56                   push esi
// 005fa998  ffd7                 call edi
// 005fa99a  83c408               add esp, 8
// 005fa99d  84c0                 test al, al
// 005fa99f  740d                 je 0x5fa9ae
// 005fa9a1  e8ba2ce8ff           call 0x47d660
// 005fa9a6  dd00                 fld qword ptr [eax]
// 005fa9a8  5f                   pop edi
// 005fa9a9  5e                   pop esi
// 005fa9aa  83c40c               add esp, 0xc
// 005fa9ad  c3                   ret 
// 005fa9ae  68382d9c00           push 0x9c2d38
// 005fa9b3  56                   push esi
// 005fa9b4  ffd7                 call edi
// 005fa9b6  83c408               add esp, 8
// 005fa9b9  84c0                 test al, al
// 005fa9bb  740f                 je 0x5fa9cc
// 005fa9bd  e89e2ce8ff           call 0x47d660
// 005fa9c2  dd00                 fld qword ptr [eax]
// 005fa9c4  5f                   pop edi
// 005fa9c5  d9e0                 fchs 
// 005fa9c7  5e                   pop esi
// 005fa9c8  83c40c               add esp, 0xc
// 005fa9cb  c3                   ret 
// 005fa9cc  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005fa9cf  83f902               cmp ecx, 2
// 005fa9d2  766a                 jbe 0x5faa3e
// 005fa9d4  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 005fa9d8  8d7e04               lea edi, [esi + 4]
// 005fa9db  7204                 jb 0x5fa9e1
// 005fa9dd  8b07                 mov eax, dword ptr [edi]
// 005fa9df  eb02                 jmp 0x5fa9e3
// 005fa9e1  8bc7                 mov eax, edi
// 005fa9e3  803830               cmp byte ptr [eax], 0x30
// 005fa9e6  7556                 jne 0x5faa3e
// 005fa9e8  83f901               cmp ecx, 1
// 005fa9eb  7306                 jae 0x5fa9f3
// 005fa9ed  ff1560b79800         call dword ptr [0x98b760]
// 005fa9f3  8b4618               mov eax, dword ptr [esi + 0x18]
// 005fa9f6  83f810               cmp eax, 0x10
// 005fa9f9  7204                 jb 0x5fa9ff
// 005fa9fb  8b0f                 mov ecx, dword ptr [edi]
// 005fa9fd  eb02                 jmp 0x5faa01
// 005fa9ff  8bcf                 mov ecx, edi
// 005faa01  80790178             cmp byte ptr [ecx + 1], 0x78
// 005faa05  7537                 jne 0x5faa3e
// 005faa07  83f810               cmp eax, 0x10
// 005faa0a  7202                 jb 0x5faa0e
// 005faa0c  8b3f                 mov edi, dword ptr [edi]
// 005faa0e  8d4c2408             lea ecx, [esp + 8]
// 005faa12  51                   push ecx
// 005faa13  68342d9c00           push 0x9c2d34
// 005faa18  57                   push edi
// 005faa19  ff15fcb79800         call dword ptr [0x98b7fc]
// 005faa1f  db442414             fild dword ptr [esp + 0x14]
// 005faa23  8b542414             mov edx, dword ptr [esp + 0x14]
// 005faa27  83c40c               add esp, 0xc
// 005faa2a  85d2                 test edx, edx
// 005faa2c  0f8d5affffff         jge 0x5fa98c
// 005faa32  dc05d0449a00         fadd qword ptr [0x9a44d0]
// 005faa38  5f                   pop edi
// 005faa39  5e                   pop esi
// 005faa3a  83c40c               add esp, 0xc
// 005faa3d  c3                   ret 
// 005faa3e  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 005faa42  7205                 jb 0x5faa49
// 005faa44  8b7604               mov esi, dword ptr [esi + 4]
// 005faa47  eb03                 jmp 0x5faa4c
// 005faa49  83c604               add esi, 4
// 005faa4c  8d44240c             lea eax, [esp + 0xc]
// 005faa50  50                   push eax
// 005faa51  68302d9c00           push 0x9c2d30
// 005faa56  56                   push esi
// 005faa57  ff15fcb79800         call dword ptr [0x98b7fc]
// 005faa5d  dd442418             fld qword ptr [esp + 0x18]
// 005faa61  83c40c               add esp, 0xc
// 005faa64  5f                   pop edi
// 005faa65  5e                   pop esi
// 005faa66  83c40c               add esp, 0xc
// 005faa69  c3                   ret 
// 005faa6a  d9ee                 fldz 
// 005faa6c  5e                   pop esi
// 005faa6d  83c40c               add esp, 0xc
// 005faa70  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?number@Token@G3D@@QBENXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp

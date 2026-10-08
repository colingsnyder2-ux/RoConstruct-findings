// roc 2007-03 004980f0  unit: seg_00490000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004980f0
//
// 004980f0  d9ee                 fldz 
// 004980f2  dd442404             fld qword ptr [esp + 4]
// 004980f6  d8d1                 fcom st(1)
// 004980f8  dfe0                 fnstsw ax
// 004980fa  f6c405               test ah, 5
// 004980fd  7a04                 jp 0x498103
// 004980ff  b101                 mov cl, 1
// 00498101  eb02                 jmp 0x498105
// 00498103  32c9                 xor cl, cl
// 00498105  d8d1                 fcom st(1)
// 00498107  dfe0                 fnstsw ax
// 00498109  ddd9                 fstp st(1)
// 0049810b  f6c401               test ah, 1
// 0049810e  7504                 jne 0x498114
// 00498110  b001                 mov al, 1
// 00498112  eb02                 jmp 0x498116
// 00498114  32c0                 xor al, al
// 00498116  84c9                 test cl, cl
// 00498118  7504                 jne 0x49811e
// 0049811a  84c0                 test al, al
// 0049811c  745e                 je 0x49817c
// 0049811e  8b0dd0778b00         mov ecx, dword ptr [0x8b77d0]
// 00498124  f6c101               test cl, 1
// 00498127  8b1528e67700         mov edx, dword ptr [0x77e628]
// 0049812d  7513                 jne 0x498142
// 0049812f  83c901               or ecx, 1
// 00498132  890dd0778b00         mov dword ptr [0x8b77d0], ecx
// 00498138  dd02                 fld qword ptr [edx]
// 0049813a  dd15c8778b00         fst qword ptr [0x8b77c8]
// 00498140  eb06                 jmp 0x498148
// 00498142  dd05c8778b00         fld qword ptr [0x8b77c8]
// 00498148  d8d1                 fcom st(1)
// 0049814a  dfe0                 fnstsw ax
// 0049814c  f6c441               test ah, 0x41
// 0049814f  7529                 jne 0x49817a
// 00498151  f6c101               test cl, 1
// 00498154  7513                 jne 0x498169
// 00498156  83c901               or ecx, 1
// 00498159  ddd8                 fstp st(0)
// 0049815b  890dd0778b00         mov dword ptr [0x8b77d0], ecx
// 00498161  dd02                 fld qword ptr [edx]
// 00498163  dd15c8778b00         fst qword ptr [0x8b77c8]
// 00498169  d9e0                 fchs 
// 0049816b  ded9                 fcompp 
// 0049816d  dfe0                 fnstsw ax
// 0049816f  f6c405               test ah, 5
// 00498172  7a0a                 jp 0x49817e
// 00498174  b801000000           mov eax, 1
// 00498179  c3                   ret 
// 0049817a  ddd9                 fstp st(1)
// 0049817c  ddd8                 fstp st(0)
// 0049817e  33c0                 xor eax, eax
// 00498180  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?isFinite@G3D@@YA_NN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp

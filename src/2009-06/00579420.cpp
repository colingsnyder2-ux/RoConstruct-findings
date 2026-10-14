// roc 2009-06 00579420  unit: G3D::LineSegment  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579420
//
// 00579420  56                   push esi
// 00579421  57                   push edi
// 00579422  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00579426  d907                 fld dword ptr [edi]
// 00579428  8bf1                 mov esi, ecx
// 0057942a  d81e                 fcomp dword ptr [esi]
// 0057942c  dfe0                 fnstsw ax
// 0057942e  f6c444               test ah, 0x44
// 00579431  0f8ac4000000         jp 0x5794fb
// 00579437  d94704               fld dword ptr [edi + 4]
// 0057943a  d85e04               fcomp dword ptr [esi + 4]
// 0057943d  dfe0                 fnstsw ax
// 0057943f  f6c444               test ah, 0x44
// 00579442  0f8ab3000000         jp 0x5794fb
// 00579448  d94708               fld dword ptr [edi + 8]
// 0057944b  d85e08               fcomp dword ptr [esi + 8]
// 0057944e  dfe0                 fnstsw ax
// 00579450  f6c444               test ah, 0x44
// 00579453  0f8aa2000000         jp 0x5794fb
// 00579459  d9470c               fld dword ptr [edi + 0xc]
// 0057945c  d85e0c               fcomp dword ptr [esi + 0xc]
// 0057945f  dfe0                 fnstsw ax
// 00579461  f6c444               test ah, 0x44
// 00579464  0f8a91000000         jp 0x5794fb
// 0057946a  d94710               fld dword ptr [edi + 0x10]
// 0057946d  d85e10               fcomp dword ptr [esi + 0x10]
// 00579470  dfe0                 fnstsw ax
// 00579472  f6c444               test ah, 0x44
// 00579475  0f8a80000000         jp 0x5794fb
// 0057947b  d94714               fld dword ptr [edi + 0x14]
// 0057947e  d85e14               fcomp dword ptr [esi + 0x14]
// 00579481  dfe0                 fnstsw ax
// 00579483  f6c444               test ah, 0x44
// 00579486  7a73                 jp 0x5794fb
// 00579488  d94718               fld dword ptr [edi + 0x18]
// 0057948b  d85e18               fcomp dword ptr [esi + 0x18]
// 0057948e  dfe0                 fnstsw ax
// 00579490  f6c444               test ah, 0x44
// 00579493  7a66                 jp 0x5794fb
// 00579495  dd4720               fld qword ptr [edi + 0x20]
// 00579498  dc5e20               fcomp qword ptr [esi + 0x20]
// 0057949b  dfe0                 fnstsw ax
// 0057949d  f6c444               test ah, 0x44
// 005794a0  7a59                 jp 0x5794fb
// 005794a2  dd4728               fld qword ptr [edi + 0x28]
// 005794a5  dc5e28               fcomp qword ptr [esi + 0x28]
// 005794a8  dfe0                 fnstsw ax
// 005794aa  f6c444               test ah, 0x44
// 005794ad  7a4c                 jp 0x5794fb
// 005794af  dd4730               fld qword ptr [edi + 0x30]
// 005794b2  dc5e30               fcomp qword ptr [esi + 0x30]
// 005794b5  dfe0                 fnstsw ax
// 005794b7  f6c444               test ah, 0x44
// 005794ba  7a3f                 jp 0x5794fb
// 005794bc  dd4738               fld qword ptr [edi + 0x38]
// 005794bf  dc5e38               fcomp qword ptr [esi + 0x38]
// 005794c2  dfe0                 fnstsw ax
// 005794c4  f6c444               test ah, 0x44
// 005794c7  7a32                 jp 0x5794fb
// 005794c9  8d4740               lea eax, [edi + 0x40]
// 005794cc  50                   push eax
// 005794cd  8d4e40               lea ecx, [esi + 0x40]
// 005794d0  e82bbdebff           call 0x435200
// 005794d5  84c0                 test al, al
// 005794d7  7422                 je 0x5794fb
// 005794d9  8a4e4c               mov cl, byte ptr [esi + 0x4c]
// 005794dc  3a4f4c               cmp cl, byte ptr [edi + 0x4c]
// 005794df  751a                 jne 0x5794fb
// 005794e1  8a564d               mov dl, byte ptr [esi + 0x4d]
// 005794e4  3a574d               cmp dl, byte ptr [edi + 0x4d]
// 005794e7  7512                 jne 0x5794fb
// 005794e9  8a464e               mov al, byte ptr [esi + 0x4e]
// 005794ec  3a474e               cmp al, byte ptr [edi + 0x4e]
// 005794ef  750a                 jne 0x5794fb
// 005794f1  5f                   pop edi
// 005794f2  b801000000           mov eax, 1
// 005794f7  5e                   pop esi
// 005794f8  c20400               ret 4
// 005794fb  5f                   pop edi
// 005794fc  33c0                 xor eax, eax
// 005794fe  5e                   pop esi
// 005794ff  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\GLight.cpp (function ??8GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GLight.cpp

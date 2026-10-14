// roc 2009-06 00573130  unit: G3D::Ray  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00573130
//
// 00573130  83ec0c               sub esp, 0xc
// 00573133  53                   push ebx
// 00573134  bb01000000           mov ebx, 1
// 00573139  56                   push esi
// 0057313a  8bf1                 mov esi, ecx
// 0057313c  841d202aa400         test byte ptr [0xa42a20], bl
// 00573142  751e                 jne 0x573162
// 00573144  d905bcaf8c00         fld dword ptr [0x8cafbc]
// 0057314a  091d202aa400         or dword ptr [0xa42a20], ebx
// 00573150  d915142aa400         fst dword ptr [0xa42a14]
// 00573156  d915182aa400         fst dword ptr [0xa42a18]
// 0057315c  d91d1c2aa400         fstp dword ptr [0xa42a1c]
// 00573162  841d102aa400         test byte ptr [0xa42a10], bl
// 00573168  751e                 jne 0x573188
// 0057316a  d905b8af8c00         fld dword ptr [0x8cafb8]
// 00573170  091d102aa400         or dword ptr [0xa42a10], ebx
// 00573176  d915042aa400         fst dword ptr [0xa42a04]
// 0057317c  d915082aa400         fst dword ptr [0xa42a08]
// 00573182  d91d0c2aa400         fstp dword ptr [0xa42a0c]
// 00573188  68142aa400           push 0xa42a14
// 0057318d  68042aa400           push 0xa42a04
// 00573192  8d442410             lea eax, [esp + 0x10]
// 00573196  50                   push eax
// 00573197  8d4c2424             lea ecx, [esp + 0x24]
// 0057319b  e8609ef6ff           call 0x4dd000
// 005731a0  d900                 fld dword ptr [eax]
// 005731a2  d9542418             fst dword ptr [esp + 0x18]
// 005731a6  d94004               fld dword ptr [eax + 4]
// 005731a9  d954241c             fst dword ptr [esp + 0x1c]
// 005731ad  d94008               fld dword ptr [eax + 8]
// 005731b0  d84e0c               fmul dword ptr [esi + 0xc]
// 005731b3  d94608               fld dword ptr [esi + 8]
// 005731b6  deca                 fmulp st(2)
// 005731b8  dec1                 faddp st(1)
// 005731ba  d94604               fld dword ptr [esi + 4]
// 005731bd  deca                 fmulp st(2)
// 005731bf  dec1                 faddp st(1)
// 005731c1  d85e10               fcomp dword ptr [esi + 0x10]
// 005731c4  dfe0                 fnstsw ax
// 005731c6  f6c401               test ah, 1
// 005731c9  750a                 jne 0x5731d5
// 005731cb  5e                   pop esi
// 005731cc  8bc3                 mov eax, ebx
// 005731ce  5b                   pop ebx
// 005731cf  83c40c               add esp, 0xc
// 005731d2  c20c00               ret 0xc
// 005731d5  5e                   pop esi
// 005731d6  33c0                 xor eax, eax
// 005731d8  5b                   pop ebx
// 005731d9  83c40c               add esp, 0xc
// 005731dc  c20c00               ret 0xc
// library g3d-6.09-rbx2008/G3Dcpp\AABox.cpp (function ?halfSpaceContains@Plane@G3D@@QBE_NVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/AABox.cpp

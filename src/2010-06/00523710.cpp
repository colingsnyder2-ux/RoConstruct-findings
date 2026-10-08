// from server: 100% by auto
// roc 2010-06 00523710  unit: RBX::MeshGen  size: 313 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00523710
//
// 00523710  83ec18               sub esp, 0x18
// 00523713  53                   push ebx
// 00523714  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00523718  56                   push esi
// 00523719  8bf1                 mov esi, ecx
// 0052371b  8b06                 mov eax, dword ptr [esi]
// 0052371d  57                   push edi
// 0052371e  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00523722  3bf8                 cmp edi, eax
// 00523724  7211                 jb 0x523737
// 00523726  8b4e04               mov ecx, dword ptr [esi + 4]
// 00523729  8d0c49               lea ecx, [ecx + ecx*2]
// 0052372c  8d1488               lea edx, [eax + ecx*4]
// 0052372f  3bfa                 cmp edi, edx
// 00523731  0f82b8000000         jb 0x5237ef
// 00523737  3bd8                 cmp ebx, eax
// 00523739  7211                 jb 0x52374c
// 0052373b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0052373e  8d0c49               lea ecx, [ecx + ecx*2]
// 00523741  8d1488               lea edx, [eax + ecx*4]
// 00523744  3bda                 cmp ebx, edx
// 00523746  0f82a3000000         jb 0x5237ef
// 0052374c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0052374f  8d5101               lea edx, [ecx + 1]
// 00523752  3b5608               cmp edx, dword ptr [esi + 8]
// 00523755  7d47                 jge 0x52379e
// 00523757  8d0c49               lea ecx, [ecx + ecx*2]
// 0052375a  8d0488               lea eax, [eax + ecx*4]
// 0052375d  85c0                 test eax, eax
// 0052375f  7410                 je 0x523771
// 00523761  d907                 fld dword ptr [edi]
// 00523763  d918                 fstp dword ptr [eax]
// 00523765  d94704               fld dword ptr [edi + 4]
// 00523768  d95804               fstp dword ptr [eax + 4]
// 0052376b  d94708               fld dword ptr [edi + 8]
// 0052376e  d95808               fstp dword ptr [eax + 8]
// 00523771  8b4604               mov eax, dword ptr [esi + 4]
// 00523774  40                   inc eax
// 00523775  8d1440               lea edx, [eax + eax*2]
// 00523778  8b06                 mov eax, dword ptr [esi]
// 0052377a  8d0490               lea eax, [eax + edx*4]
// 0052377d  85c0                 test eax, eax
// 0052377f  7410                 je 0x523791
// 00523781  d903                 fld dword ptr [ebx]
// 00523783  d918                 fstp dword ptr [eax]
// 00523785  d94304               fld dword ptr [ebx + 4]
// 00523788  d95804               fstp dword ptr [eax + 4]
// 0052378b  d94308               fld dword ptr [ebx + 8]
// 0052378e  d95808               fstp dword ptr [eax + 8]
// 00523791  83460402             add dword ptr [esi + 4], 2
// 00523795  5f                   pop edi
// 00523796  5e                   pop esi
// 00523797  5b                   pop ebx
// 00523798  83c418               add esp, 0x18
// 0052379b  c20800               ret 8
// 0052379e  83c102               add ecx, 2
// 005237a1  6a00                 push 0
// 005237a3  51                   push ecx
// 005237a4  8bce                 mov ecx, esi
// 005237a6  e8b5f6ffff           call 0x522e60
// 005237ab  d907                 fld dword ptr [edi]
// 005237ad  8b4604               mov eax, dword ptr [esi + 4]
// 005237b0  8b16                 mov edx, dword ptr [esi]
// 005237b2  83e802               sub eax, 2
// 005237b5  8d0c40               lea ecx, [eax + eax*2]
// 005237b8  d91c8a               fstp dword ptr [edx + ecx*4]
// 005237bb  8d048a               lea eax, [edx + ecx*4]
// 005237be  d94704               fld dword ptr [edi + 4]
// 005237c1  d95804               fstp dword ptr [eax + 4]
// 005237c4  d94708               fld dword ptr [edi + 8]
// 005237c7  5f                   pop edi
// 005237c8  d95808               fstp dword ptr [eax + 8]
// 005237cb  8b4604               mov eax, dword ptr [esi + 4]
// 005237ce  8b0e                 mov ecx, dword ptr [esi]
// 005237d0  d903                 fld dword ptr [ebx]
// 005237d2  8d0440               lea eax, [eax + eax*2]
// 005237d5  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 005237d9  d918                 fstp dword ptr [eax]
// 005237db  5e                   pop esi
// 005237dc  d94304               fld dword ptr [ebx + 4]
// 005237df  d95804               fstp dword ptr [eax + 4]
// 005237e2  d94308               fld dword ptr [ebx + 8]
// 005237e5  5b                   pop ebx
// 005237e6  d95808               fstp dword ptr [eax + 8]
// 005237e9  83c418               add esp, 0x18
// 005237ec  c20800               ret 8
// 005237ef  f30f1007             movss xmm0, dword ptr [edi]
// 005237f3  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 005237f9  f30f104704           movss xmm0, dword ptr [edi + 4]
// 005237fe  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 00523804  f30f104708           movss xmm0, dword ptr [edi + 8]
// 00523809  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 0052380f  f30f1003             movss xmm0, dword ptr [ebx]
// 00523813  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 00523819  f30f104304           movss xmm0, dword ptr [ebx + 4]
// 0052381e  8d54240c             lea edx, [esp + 0xc]
// 00523822  52                   push edx
// 00523823  8d44241c             lea eax, [esp + 0x1c]
// 00523827  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 0052382d  f30f104308           movss xmm0, dword ptr [ebx + 8]
// 00523832  50                   push eax
// 00523833  8bce                 mov ecx, esi
// 00523835  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 0052383b  e8d0feffff           call 0x523710
// 00523840  5f                   pop edi
// 00523841  5e                   pop esi
// 00523842  5b                   pop ebx
// 00523843  83c418               add esp, 0x18
// 00523846  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp

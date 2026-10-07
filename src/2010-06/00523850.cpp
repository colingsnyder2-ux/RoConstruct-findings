// roc 2010-06 00523850  unit: RBX::MeshGen  size: 447 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00523850
//
// 00523850  83ec24               sub esp, 0x24
// 00523853  53                   push ebx
// 00523854  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00523858  55                   push ebp
// 00523859  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0052385d  56                   push esi
// 0052385e  8bf1                 mov esi, ecx
// 00523860  8b06                 mov eax, dword ptr [esi]
// 00523862  57                   push edi
// 00523863  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00523867  3bf8                 cmp edi, eax
// 00523869  7211                 jb 0x52387c
// 0052386b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0052386e  8d0c49               lea ecx, [ecx + ecx*2]
// 00523871  8d1488               lea edx, [eax + ecx*4]
// 00523874  3bfa                 cmp edi, edx
// 00523876  0f8212010000         jb 0x52398e
// 0052387c  3bd8                 cmp ebx, eax
// 0052387e  7211                 jb 0x523891
// 00523880  8b4e04               mov ecx, dword ptr [esi + 4]
// 00523883  8d0c49               lea ecx, [ecx + ecx*2]
// 00523886  8d1488               lea edx, [eax + ecx*4]
// 00523889  3bda                 cmp ebx, edx
// 0052388b  0f82fd000000         jb 0x52398e
// 00523891  3be8                 cmp ebp, eax
// 00523893  7211                 jb 0x5238a6
// 00523895  8b4e04               mov ecx, dword ptr [esi + 4]
// 00523898  8d0c49               lea ecx, [ecx + ecx*2]
// 0052389b  8d1488               lea edx, [eax + ecx*4]
// 0052389e  3bea                 cmp ebp, edx
// 005238a0  0f82e8000000         jb 0x52398e
// 005238a6  8b4e04               mov ecx, dword ptr [esi + 4]
// 005238a9  8d5102               lea edx, [ecx + 2]
// 005238ac  3b5608               cmp edx, dword ptr [esi + 8]
// 005238af  7d6b                 jge 0x52391c
// 005238b1  8d0c49               lea ecx, [ecx + ecx*2]
// 005238b4  8d0488               lea eax, [eax + ecx*4]
// 005238b7  85c0                 test eax, eax
// 005238b9  7410                 je 0x5238cb
// 005238bb  d907                 fld dword ptr [edi]
// 005238bd  d918                 fstp dword ptr [eax]
// 005238bf  d94704               fld dword ptr [edi + 4]
// 005238c2  d95804               fstp dword ptr [eax + 4]
// 005238c5  d94708               fld dword ptr [edi + 8]
// 005238c8  d95808               fstp dword ptr [eax + 8]
// 005238cb  8b4604               mov eax, dword ptr [esi + 4]
// 005238ce  40                   inc eax
// 005238cf  8d1440               lea edx, [eax + eax*2]
// 005238d2  8b06                 mov eax, dword ptr [esi]
// 005238d4  8d0490               lea eax, [eax + edx*4]
// 005238d7  85c0                 test eax, eax
// 005238d9  7410                 je 0x5238eb
// 005238db  d903                 fld dword ptr [ebx]
// 005238dd  d918                 fstp dword ptr [eax]
// 005238df  d94304               fld dword ptr [ebx + 4]
// 005238e2  d95804               fstp dword ptr [eax + 4]
// 005238e5  d94308               fld dword ptr [ebx + 8]
// 005238e8  d95808               fstp dword ptr [eax + 8]
// 005238eb  8b4604               mov eax, dword ptr [esi + 4]
// 005238ee  8b16                 mov edx, dword ptr [esi]
// 005238f0  83c002               add eax, 2
// 005238f3  8d0c40               lea ecx, [eax + eax*2]
// 005238f6  8d048a               lea eax, [edx + ecx*4]
// 005238f9  85c0                 test eax, eax
// 005238fb  7411                 je 0x52390e
// 005238fd  d94500               fld dword ptr [ebp]
// 00523900  d918                 fstp dword ptr [eax]
// 00523902  d94504               fld dword ptr [ebp + 4]
// 00523905  d95804               fstp dword ptr [eax + 4]
// 00523908  d94508               fld dword ptr [ebp + 8]
// 0052390b  d95808               fstp dword ptr [eax + 8]
// 0052390e  83460403             add dword ptr [esi + 4], 3
// 00523912  5f                   pop edi
// 00523913  5e                   pop esi
// 00523914  5d                   pop ebp
// 00523915  5b                   pop ebx
// 00523916  83c424               add esp, 0x24
// 00523919  c20c00               ret 0xc
// 0052391c  83c103               add ecx, 3
// 0052391f  6a00                 push 0
// 00523921  51                   push ecx
// 00523922  8bce                 mov ecx, esi
// 00523924  e837f5ffff           call 0x522e60
// 00523929  d907                 fld dword ptr [edi]
// 0052392b  8b4604               mov eax, dword ptr [esi + 4]
// 0052392e  8b0e                 mov ecx, dword ptr [esi]
// 00523930  83e803               sub eax, 3
// 00523933  8d0440               lea eax, [eax + eax*2]
// 00523936  d91c81               fstp dword ptr [ecx + eax*4]
// 00523939  8d0481               lea eax, [ecx + eax*4]
// 0052393c  d94704               fld dword ptr [edi + 4]
// 0052393f  d95804               fstp dword ptr [eax + 4]
// 00523942  d94708               fld dword ptr [edi + 8]
// 00523945  5f                   pop edi
// 00523946  d95808               fstp dword ptr [eax + 8]
// 00523949  8b4604               mov eax, dword ptr [esi + 4]
// 0052394c  d903                 fld dword ptr [ebx]
// 0052394e  83e802               sub eax, 2
// 00523951  8d1440               lea edx, [eax + eax*2]
// 00523954  8b06                 mov eax, dword ptr [esi]
// 00523956  d91c90               fstp dword ptr [eax + edx*4]
// 00523959  d94304               fld dword ptr [ebx + 4]
// 0052395c  8d0490               lea eax, [eax + edx*4]
// 0052395f  d95804               fstp dword ptr [eax + 4]
// 00523962  d94308               fld dword ptr [ebx + 8]
// 00523965  d95808               fstp dword ptr [eax + 8]
// 00523968  8b4604               mov eax, dword ptr [esi + 4]
// 0052396b  8b16                 mov edx, dword ptr [esi]
// 0052396d  d94500               fld dword ptr [ebp]
// 00523970  8d0c40               lea ecx, [eax + eax*2]
// 00523973  8d448af4             lea eax, [edx + ecx*4 - 0xc]
// 00523977  d918                 fstp dword ptr [eax]
// 00523979  5e                   pop esi
// 0052397a  d94504               fld dword ptr [ebp + 4]
// 0052397d  d95804               fstp dword ptr [eax + 4]
// 00523980  d94508               fld dword ptr [ebp + 8]
// 00523983  5d                   pop ebp
// 00523984  d95808               fstp dword ptr [eax + 8]
// 00523987  5b                   pop ebx
// 00523988  83c424               add esp, 0x24
// 0052398b  c20c00               ret 0xc
// 0052398e  f30f1007             movss xmm0, dword ptr [edi]
// 00523992  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 00523998  f30f104704           movss xmm0, dword ptr [edi + 4]
// 0052399d  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 005239a3  f30f104708           movss xmm0, dword ptr [edi + 8]
// 005239a8  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 005239ae  f30f1003             movss xmm0, dword ptr [ebx]
// 005239b2  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 005239b8  f30f104304           movss xmm0, dword ptr [ebx + 4]
// 005239bd  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 005239c3  f30f104308           movss xmm0, dword ptr [ebx + 8]
// 005239c8  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 005239ce  f30f104500           movss xmm0, dword ptr [ebp]
// 005239d3  8d442410             lea eax, [esp + 0x10]
// 005239d7  50                   push eax
// 005239d8  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 005239de  f30f104504           movss xmm0, dword ptr [ebp + 4]
// 005239e3  8d4c2420             lea ecx, [esp + 0x20]
// 005239e7  51                   push ecx
// 005239e8  8d542430             lea edx, [esp + 0x30]
// 005239ec  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 005239f2  f30f104508           movss xmm0, dword ptr [ebp + 8]
// 005239f7  52                   push edx
// 005239f8  8bce                 mov ecx, esi
// 005239fa  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 00523a00  e84bfeffff           call 0x523850
// 00523a05  5f                   pop edi
// 00523a06  5e                   pop esi
// 00523a07  5d                   pop ebp
// 00523a08  5b                   pop ebx
// 00523a09  83c424               add esp, 0x24
// 00523a0c  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\MeshBuilder.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/MeshBuilder.cpp

// from server: 100% by auto
// roc 2010-06 00523660  unit: RBX::MeshGen  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00523660
//
// 00523660  83ec0c               sub esp, 0xc
// 00523663  56                   push esi
// 00523664  8bf1                 mov esi, ecx
// 00523666  8b4604               mov eax, dword ptr [esi + 4]
// 00523669  3b4608               cmp eax, dword ptr [esi + 8]
// 0052366c  8b0e                 mov ecx, dword ptr [esi]
// 0052366e  7d28                 jge 0x523698
// 00523670  8d0440               lea eax, [eax + eax*2]
// 00523673  8d0481               lea eax, [ecx + eax*4]
// 00523676  85c0                 test eax, eax
// 00523678  7414                 je 0x52368e
// 0052367a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052367e  d901                 fld dword ptr [ecx]
// 00523680  d918                 fstp dword ptr [eax]
// 00523682  d94104               fld dword ptr [ecx + 4]
// 00523685  d95804               fstp dword ptr [eax + 4]
// 00523688  d94108               fld dword ptr [ecx + 8]
// 0052368b  d95808               fstp dword ptr [eax + 8]
// 0052368e  ff4604               inc dword ptr [esi + 4]
// 00523691  5e                   pop esi
// 00523692  83c40c               add esp, 0xc
// 00523695  c20400               ret 4
// 00523698  57                   push edi
// 00523699  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0052369d  3bf9                 cmp edi, ecx
// 0052369f  723e                 jb 0x5236df
// 005236a1  8d1440               lea edx, [eax + eax*2]
// 005236a4  8d0c91               lea ecx, [ecx + edx*4]
// 005236a7  3bf9                 cmp edi, ecx
// 005236a9  7334                 jae 0x5236df
// 005236ab  f30f1007             movss xmm0, dword ptr [edi]
// 005236af  f30f11442408         movss dword ptr [esp + 8], xmm0
// 005236b5  f30f104704           movss xmm0, dword ptr [edi + 4]
// 005236ba  8d542408             lea edx, [esp + 8]
// 005236be  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 005236c4  f30f104708           movss xmm0, dword ptr [edi + 8]
// 005236c9  52                   push edx
// 005236ca  8bce                 mov ecx, esi
// 005236cc  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 005236d2  e889ffffff           call 0x523660
// 005236d7  5f                   pop edi
// 005236d8  5e                   pop esi
// 005236d9  83c40c               add esp, 0xc
// 005236dc  c20400               ret 4
// 005236df  6a00                 push 0
// 005236e1  40                   inc eax
// 005236e2  50                   push eax
// 005236e3  8bce                 mov ecx, esi
// 005236e5  e876f7ffff           call 0x522e60
// 005236ea  d907                 fld dword ptr [edi]
// 005236ec  8b4604               mov eax, dword ptr [esi + 4]
// 005236ef  8b0e                 mov ecx, dword ptr [esi]
// 005236f1  8d0440               lea eax, [eax + eax*2]
// 005236f4  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 005236f8  d918                 fstp dword ptr [eax]
// 005236fa  d94704               fld dword ptr [edi + 4]
// 005236fd  d95804               fstp dword ptr [eax + 4]
// 00523700  d94708               fld dword ptr [edi + 8]
// 00523703  5f                   pop edi
// 00523704  d95808               fstp dword ptr [eax + 8]
// 00523707  5e                   pop esi
// 00523708  83c40c               add esp, 0xc
// 0052370b  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp

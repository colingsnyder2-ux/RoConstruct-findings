// roc 2011-06 004ca110  unit: RakNet::VBitStream::?$sp_counted_impl_p  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ca110
//
// 004ca110  83ec0c               sub esp, 0xc
// 004ca113  56                   push esi
// 004ca114  8bf1                 mov esi, ecx
// 004ca116  8b4604               mov eax, dword ptr [esi + 4]
// 004ca119  3b4608               cmp eax, dword ptr [esi + 8]
// 004ca11c  8b0e                 mov ecx, dword ptr [esi]
// 004ca11e  7d28                 jge 0x4ca148
// 004ca120  8d0440               lea eax, [eax + eax*2]
// 004ca123  8d0481               lea eax, [ecx + eax*4]
// 004ca126  85c0                 test eax, eax
// 004ca128  7414                 je 0x4ca13e
// 004ca12a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ca12e  d901                 fld dword ptr [ecx]
// 004ca130  d918                 fstp dword ptr [eax]
// 004ca132  d94104               fld dword ptr [ecx + 4]
// 004ca135  d95804               fstp dword ptr [eax + 4]
// 004ca138  d94108               fld dword ptr [ecx + 8]
// 004ca13b  d95808               fstp dword ptr [eax + 8]
// 004ca13e  ff4604               inc dword ptr [esi + 4]
// 004ca141  5e                   pop esi
// 004ca142  83c40c               add esp, 0xc
// 004ca145  c20400               ret 4
// 004ca148  57                   push edi
// 004ca149  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004ca14d  3bf9                 cmp edi, ecx
// 004ca14f  723e                 jb 0x4ca18f
// 004ca151  8d1440               lea edx, [eax + eax*2]
// 004ca154  8d0c91               lea ecx, [ecx + edx*4]
// 004ca157  3bf9                 cmp edi, ecx
// 004ca159  7334                 jae 0x4ca18f
// 004ca15b  f30f1007             movss xmm0, dword ptr [edi]
// 004ca15f  f30f11442408         movss dword ptr [esp + 8], xmm0
// 004ca165  f30f104704           movss xmm0, dword ptr [edi + 4]
// 004ca16a  8d542408             lea edx, [esp + 8]
// 004ca16e  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 004ca174  f30f104708           movss xmm0, dword ptr [edi + 8]
// 004ca179  52                   push edx
// 004ca17a  8bce                 mov ecx, esi
// 004ca17c  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 004ca182  e889ffffff           call 0x4ca110
// 004ca187  5f                   pop edi
// 004ca188  5e                   pop esi
// 004ca189  83c40c               add esp, 0xc
// 004ca18c  c20400               ret 4
// 004ca18f  6a00                 push 0
// 004ca191  40                   inc eax
// 004ca192  50                   push eax
// 004ca193  8bce                 mov ecx, esi
// 004ca195  e836ecffff           call 0x4c8dd0
// 004ca19a  d907                 fld dword ptr [edi]
// 004ca19c  8b4604               mov eax, dword ptr [esi + 4]
// 004ca19f  8b0e                 mov ecx, dword ptr [esi]
// 004ca1a1  8d0440               lea eax, [eax + eax*2]
// 004ca1a4  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 004ca1a8  d918                 fstp dword ptr [eax]
// 004ca1aa  d94704               fld dword ptr [edi + 4]
// 004ca1ad  d95804               fstp dword ptr [eax + 4]
// 004ca1b0  d94708               fld dword ptr [edi + 8]
// 004ca1b3  5f                   pop edi
// 004ca1b4  d95808               fstp dword ptr [eax + 8]
// 004ca1b7  5e                   pop esi
// 004ca1b8  83c40c               add esp, 0xc
// 004ca1bb  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp

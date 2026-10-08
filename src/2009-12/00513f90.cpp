// roc 2009-12 00513f90  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00513f90
//
// 00513f90  83ec0c               sub esp, 0xc
// 00513f93  56                   push esi
// 00513f94  8bf1                 mov esi, ecx
// 00513f96  8b4604               mov eax, dword ptr [esi + 4]
// 00513f99  3b4608               cmp eax, dword ptr [esi + 8]
// 00513f9c  8b0e                 mov ecx, dword ptr [esi]
// 00513f9e  7d28                 jge 0x513fc8
// 00513fa0  8d0440               lea eax, [eax + eax*2]
// 00513fa3  8d0481               lea eax, [ecx + eax*4]
// 00513fa6  85c0                 test eax, eax
// 00513fa8  7414                 je 0x513fbe
// 00513faa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00513fae  d901                 fld dword ptr [ecx]
// 00513fb0  d918                 fstp dword ptr [eax]
// 00513fb2  d94104               fld dword ptr [ecx + 4]
// 00513fb5  d95804               fstp dword ptr [eax + 4]
// 00513fb8  d94108               fld dword ptr [ecx + 8]
// 00513fbb  d95808               fstp dword ptr [eax + 8]
// 00513fbe  ff4604               inc dword ptr [esi + 4]
// 00513fc1  5e                   pop esi
// 00513fc2  83c40c               add esp, 0xc
// 00513fc5  c20400               ret 4
// 00513fc8  57                   push edi
// 00513fc9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00513fcd  3bf9                 cmp edi, ecx
// 00513fcf  723e                 jb 0x51400f
// 00513fd1  8d1440               lea edx, [eax + eax*2]
// 00513fd4  8d0c91               lea ecx, [ecx + edx*4]
// 00513fd7  3bf9                 cmp edi, ecx
// 00513fd9  7334                 jae 0x51400f
// 00513fdb  f30f1007             movss xmm0, dword ptr [edi]
// 00513fdf  f30f11442408         movss dword ptr [esp + 8], xmm0
// 00513fe5  f30f104704           movss xmm0, dword ptr [edi + 4]
// 00513fea  8d542408             lea edx, [esp + 8]
// 00513fee  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 00513ff4  f30f104708           movss xmm0, dword ptr [edi + 8]
// 00513ff9  52                   push edx
// 00513ffa  8bce                 mov ecx, esi
// 00513ffc  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 00514002  e889ffffff           call 0x513f90
// 00514007  5f                   pop edi
// 00514008  5e                   pop esi
// 00514009  83c40c               add esp, 0xc
// 0051400c  c20400               ret 4
// 0051400f  6a00                 push 0
// 00514011  40                   inc eax
// 00514012  50                   push eax
// 00514013  8bce                 mov ecx, esi
// 00514015  e856f6ffff           call 0x513670
// 0051401a  d907                 fld dword ptr [edi]
// 0051401c  8b4604               mov eax, dword ptr [esi + 4]
// 0051401f  8b0e                 mov ecx, dword ptr [esi]
// 00514021  8d0440               lea eax, [eax + eax*2]
// 00514024  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 00514028  d918                 fstp dword ptr [eax]
// 0051402a  d94704               fld dword ptr [edi + 4]
// 0051402d  d95804               fstp dword ptr [eax + 4]
// 00514030  d94708               fld dword ptr [edi + 8]
// 00514033  5f                   pop edi
// 00514034  d95808               fstp dword ptr [eax + 8]
// 00514037  5e                   pop esi
// 00514038  83c40c               add esp, 0xc
// 0051403b  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp

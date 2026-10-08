// from server: 100% by auto
// roc 2012-06 00543460  unit: RakNet::VBitStream::?$sp_counted_impl_p  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00543460
//
// 00543460  83ec0c               sub esp, 0xc
// 00543463  56                   push esi
// 00543464  8bf1                 mov esi, ecx
// 00543466  8b4604               mov eax, dword ptr [esi + 4]
// 00543469  3b4608               cmp eax, dword ptr [esi + 8]
// 0054346c  8b0e                 mov ecx, dword ptr [esi]
// 0054346e  7d28                 jge 0x543498
// 00543470  8d0440               lea eax, [eax + eax*2]
// 00543473  8d0481               lea eax, [ecx + eax*4]
// 00543476  85c0                 test eax, eax
// 00543478  7414                 je 0x54348e
// 0054347a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054347e  d901                 fld dword ptr [ecx]
// 00543480  d918                 fstp dword ptr [eax]
// 00543482  d94104               fld dword ptr [ecx + 4]
// 00543485  d95804               fstp dword ptr [eax + 4]
// 00543488  d94108               fld dword ptr [ecx + 8]
// 0054348b  d95808               fstp dword ptr [eax + 8]
// 0054348e  ff4604               inc dword ptr [esi + 4]
// 00543491  5e                   pop esi
// 00543492  83c40c               add esp, 0xc
// 00543495  c20400               ret 4
// 00543498  57                   push edi
// 00543499  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0054349d  3bf9                 cmp edi, ecx
// 0054349f  723e                 jb 0x5434df
// 005434a1  8d1440               lea edx, [eax + eax*2]
// 005434a4  8d0c91               lea ecx, [ecx + edx*4]
// 005434a7  3bf9                 cmp edi, ecx
// 005434a9  7334                 jae 0x5434df
// 005434ab  f30f1007             movss xmm0, dword ptr [edi]
// 005434af  f30f11442408         movss dword ptr [esp + 8], xmm0
// 005434b5  f30f104704           movss xmm0, dword ptr [edi + 4]
// 005434ba  8d542408             lea edx, [esp + 8]
// 005434be  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 005434c4  f30f104708           movss xmm0, dword ptr [edi + 8]
// 005434c9  52                   push edx
// 005434ca  8bce                 mov ecx, esi
// 005434cc  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 005434d2  e889ffffff           call 0x543460
// 005434d7  5f                   pop edi
// 005434d8  5e                   pop esi
// 005434d9  83c40c               add esp, 0xc
// 005434dc  c20400               ret 4
// 005434df  6a00                 push 0
// 005434e1  40                   inc eax
// 005434e2  50                   push eax
// 005434e3  8bce                 mov ecx, esi
// 005434e5  e806ebffff           call 0x541ff0
// 005434ea  d907                 fld dword ptr [edi]
// 005434ec  8b4604               mov eax, dword ptr [esi + 4]
// 005434ef  8b0e                 mov ecx, dword ptr [esi]
// 005434f1  8d0440               lea eax, [eax + eax*2]
// 005434f4  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 005434f8  d918                 fstp dword ptr [eax]
// 005434fa  d94704               fld dword ptr [edi + 4]
// 005434fd  d95804               fstp dword ptr [eax + 4]
// 00543500  d94708               fld dword ptr [edi + 8]
// 00543503  5f                   pop edi
// 00543504  d95808               fstp dword ptr [eax + 8]
// 00543507  5e                   pop esi
// 00543508  83c40c               add esp, 0xc
// 0054350b  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp

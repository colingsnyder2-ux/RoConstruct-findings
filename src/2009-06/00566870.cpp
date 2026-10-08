// from server: 100% by auto
// roc 2009-06 00566870  unit: RBX::RbxG3D::RenderScene  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00566870
//
// 00566870  83ec0c               sub esp, 0xc
// 00566873  56                   push esi
// 00566874  8bf1                 mov esi, ecx
// 00566876  8b4604               mov eax, dword ptr [esi + 4]
// 00566879  3b4608               cmp eax, dword ptr [esi + 8]
// 0056687c  8b0e                 mov ecx, dword ptr [esi]
// 0056687e  7d28                 jge 0x5668a8
// 00566880  8d0440               lea eax, [eax + eax*2]
// 00566883  8d0481               lea eax, [ecx + eax*4]
// 00566886  85c0                 test eax, eax
// 00566888  7414                 je 0x56689e
// 0056688a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056688e  d901                 fld dword ptr [ecx]
// 00566890  d918                 fstp dword ptr [eax]
// 00566892  d94104               fld dword ptr [ecx + 4]
// 00566895  d95804               fstp dword ptr [eax + 4]
// 00566898  d94108               fld dword ptr [ecx + 8]
// 0056689b  d95808               fstp dword ptr [eax + 8]
// 0056689e  ff4604               inc dword ptr [esi + 4]
// 005668a1  5e                   pop esi
// 005668a2  83c40c               add esp, 0xc
// 005668a5  c20400               ret 4
// 005668a8  57                   push edi
// 005668a9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005668ad  3bf9                 cmp edi, ecx
// 005668af  7232                 jb 0x5668e3
// 005668b1  8d1440               lea edx, [eax + eax*2]
// 005668b4  8d0c91               lea ecx, [ecx + edx*4]
// 005668b7  3bf9                 cmp edi, ecx
// 005668b9  7328                 jae 0x5668e3
// 005668bb  d907                 fld dword ptr [edi]
// 005668bd  8d542408             lea edx, [esp + 8]
// 005668c1  d95c2408             fstp dword ptr [esp + 8]
// 005668c5  52                   push edx
// 005668c6  d94704               fld dword ptr [edi + 4]
// 005668c9  8bce                 mov ecx, esi
// 005668cb  d95c2410             fstp dword ptr [esp + 0x10]
// 005668cf  d94708               fld dword ptr [edi + 8]
// 005668d2  d95c2414             fstp dword ptr [esp + 0x14]
// 005668d6  e895ffffff           call 0x566870
// 005668db  5f                   pop edi
// 005668dc  5e                   pop esi
// 005668dd  83c40c               add esp, 0xc
// 005668e0  c20400               ret 4
// 005668e3  6a00                 push 0
// 005668e5  40                   inc eax
// 005668e6  50                   push eax
// 005668e7  8bce                 mov ecx, esi
// 005668e9  e852f6ffff           call 0x565f40
// 005668ee  d907                 fld dword ptr [edi]
// 005668f0  8b4604               mov eax, dword ptr [esi + 4]
// 005668f3  8b0e                 mov ecx, dword ptr [esi]
// 005668f5  8d0440               lea eax, [eax + eax*2]
// 005668f8  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 005668fc  d918                 fstp dword ptr [eax]
// 005668fe  d94704               fld dword ptr [edi + 4]
// 00566901  d95804               fstp dword ptr [eax + 4]
// 00566904  d94708               fld dword ptr [edi + 8]
// 00566907  5f                   pop edi
// 00566908  d95808               fstp dword ptr [eax + 8]
// 0056690b  5e                   pop esi
// 0056690c  83c40c               add esp, 0xc
// 0056690f  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp

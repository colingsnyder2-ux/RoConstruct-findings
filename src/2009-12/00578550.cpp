// roc 2009-12 00578550  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00578550
//
// 00578550  83ec08               sub esp, 8
// 00578553  56                   push esi
// 00578554  8b742410             mov esi, dword ptr [esp + 0x10]
// 00578558  57                   push edi
// 00578559  8bf9                 mov edi, ecx
// 0057855b  56                   push esi
// 0057855c  8d4c2410             lea ecx, [esp + 0x10]
// 00578560  8974240c             mov dword ptr [esp + 0xc], esi
// 00578564  e8b7f8ffff           call 0x577e20
// 00578569  56                   push esi
// 0057856a  8d442410             lea eax, [esp + 0x10]
// 0057856e  56                   push esi
// 0057856f  50                   push eax
// 00578570  e81bc52d00           call 0x854a90
// 00578575  8d4c2414             lea ecx, [esp + 0x14]
// 00578579  83c40c               add esp, 0xc
// 0057857c  3bcf                 cmp ecx, edi
// 0057857e  7406                 je 0x578586
// 00578580  8b542408             mov edx, dword ptr [esp + 8]
// 00578584  8917                 mov dword ptr [edi], edx
// 00578586  8b7704               mov esi, dword ptr [edi + 4]
// 00578589  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057858d  894704               mov dword ptr [edi + 4], eax
// 00578590  85f6                 test esi, esi
// 00578592  742a                 je 0x5785be
// 00578594  8d4e04               lea ecx, [esi + 4]
// 00578597  83caff               or edx, 0xffffffff
// 0057859a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057859e  751e                 jne 0x5785be
// 005785a0  8b06                 mov eax, dword ptr [esi]
// 005785a2  8b5004               mov edx, dword ptr [eax + 4]
// 005785a5  8bce                 mov ecx, esi
// 005785a7  ffd2                 call edx
// 005785a9  8d4608               lea eax, [esi + 8]
// 005785ac  83c9ff               or ecx, 0xffffffff
// 005785af  f00fc108             lock xadd dword ptr [eax], ecx
// 005785b3  7509                 jne 0x5785be
// 005785b5  8b16                 mov edx, dword ptr [esi]
// 005785b7  8b4208               mov eax, dword ptr [edx + 8]
// 005785ba  8bce                 mov ecx, esi
// 005785bc  ffd0                 call eax
// 005785be  5f                   pop edi
// 005785bf  5e                   pop esi
// 005785c0  83c408               add esp, 8
// 005785c3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

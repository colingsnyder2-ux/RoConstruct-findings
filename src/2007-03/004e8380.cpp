// roc 2007-03 004e8380  unit: seg_004e0000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e8380
//
// 004e8380  83ec0c               sub esp, 0xc
// 004e8383  56                   push esi
// 004e8384  8bf1                 mov esi, ecx
// 004e8386  8b4604               mov eax, dword ptr [esi + 4]
// 004e8389  3b4608               cmp eax, dword ptr [esi + 8]
// 004e838c  8b0e                 mov ecx, dword ptr [esi]
// 004e838e  7d29                 jge 0x4e83b9
// 004e8390  8d0440               lea eax, [eax + eax*2]
// 004e8393  8d0481               lea eax, [ecx + eax*4]
// 004e8396  85c0                 test eax, eax
// 004e8398  7414                 je 0x4e83ae
// 004e839a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e839e  d901                 fld dword ptr [ecx]
// 004e83a0  d918                 fstp dword ptr [eax]
// 004e83a2  d94104               fld dword ptr [ecx + 4]
// 004e83a5  d95804               fstp dword ptr [eax + 4]
// 004e83a8  d94108               fld dword ptr [ecx + 8]
// 004e83ab  d95808               fstp dword ptr [eax + 8]
// 004e83ae  83460401             add dword ptr [esi + 4], 1
// 004e83b2  5e                   pop esi
// 004e83b3  83c40c               add esp, 0xc
// 004e83b6  c20400               ret 4
// 004e83b9  57                   push edi
// 004e83ba  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004e83be  3bf9                 cmp edi, ecx
// 004e83c0  7232                 jb 0x4e83f4
// 004e83c2  8d1440               lea edx, [eax + eax*2]
// 004e83c5  8d0c91               lea ecx, [ecx + edx*4]
// 004e83c8  3bf9                 cmp edi, ecx
// 004e83ca  7328                 jae 0x4e83f4
// 004e83cc  d907                 fld dword ptr [edi]
// 004e83ce  8d542408             lea edx, [esp + 8]
// 004e83d2  d95c2408             fstp dword ptr [esp + 8]
// 004e83d6  52                   push edx
// 004e83d7  d94704               fld dword ptr [edi + 4]
// 004e83da  8bce                 mov ecx, esi
// 004e83dc  d95c2410             fstp dword ptr [esp + 0x10]
// 004e83e0  d94708               fld dword ptr [edi + 8]
// 004e83e3  d95c2414             fstp dword ptr [esp + 0x14]
// 004e83e7  e894ffffff           call 0x4e8380
// 004e83ec  5f                   pop edi
// 004e83ed  5e                   pop esi
// 004e83ee  83c40c               add esp, 0xc
// 004e83f1  c20400               ret 4
// 004e83f4  6a00                 push 0
// 004e83f6  83c001               add eax, 1
// 004e83f9  50                   push eax
// 004e83fa  8bce                 mov ecx, esi
// 004e83fc  e86ff6ffff           call 0x4e7a70
// 004e8401  d907                 fld dword ptr [edi]
// 004e8403  8b4604               mov eax, dword ptr [esi + 4]
// 004e8406  8b0e                 mov ecx, dword ptr [esi]
// 004e8408  8d0440               lea eax, [eax + eax*2]
// 004e840b  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 004e840f  d918                 fstp dword ptr [eax]
// 004e8411  d94704               fld dword ptr [edi + 4]
// 004e8414  d95804               fstp dword ptr [eax + 4]
// 004e8417  d94708               fld dword ptr [edi + 8]
// 004e841a  5f                   pop edi
// 004e841b  d95808               fstp dword ptr [eax + 8]
// 004e841e  5e                   pop esi
// 004e841f  83c40c               add esp, 0xc
// 004e8422  c20400               ret 4
// library rbxgs-render/Chunk.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Chunk.cpp

// roc 2008-06 004ba260  unit: RBX::Network::IdSerializer  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ba260
//
// 004ba260  56                   push esi
// 004ba261  8bf1                 mov esi, ecx
// 004ba263  8b4608               mov eax, dword ptr [esi + 8]
// 004ba266  394604               cmp dword ptr [esi + 4], eax
// 004ba269  7572                 jne 0x4ba2dd
// 004ba26b  85c0                 test eax, eax
// 004ba26d  7509                 jne 0x4ba278
// 004ba26f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004ba276  eb05                 jmp 0x4ba27d
// 004ba278  03c0                 add eax, eax
// 004ba27a  894608               mov dword ptr [esi + 8], eax
// 004ba27d  8b4608               mov eax, dword ptr [esi + 8]
// 004ba280  33c9                 xor ecx, ecx
// 004ba282  ba08000000           mov edx, 8
// 004ba287  f7e2                 mul edx
// 004ba289  0f90c1               seto cl
// 004ba28c  57                   push edi
// 004ba28d  f7d9                 neg ecx
// 004ba28f  0bc8                 or ecx, eax
// 004ba291  51                   push ecx
// 004ba292  e889661e00           call 0x6a0920
// 004ba297  83c404               add esp, 4
// 004ba29a  833e00               cmp dword ptr [esi], 0
// 004ba29d  8bf8                 mov edi, eax
// 004ba29f  7439                 je 0x4ba2da
// 004ba2a1  33d2                 xor edx, edx
// 004ba2a3  395604               cmp dword ptr [esi + 4], edx
// 004ba2a6  7627                 jbe 0x4ba2cf
// 004ba2a8  53                   push ebx
// 004ba2a9  8da42400000000       lea esp, [esp]
// 004ba2b0  8b06                 mov eax, dword ptr [esi]
// 004ba2b2  8d0cd500000000       lea ecx, [edx*8]
// 004ba2b9  8b1c08               mov ebx, dword ptr [eax + ecx]
// 004ba2bc  03c1                 add eax, ecx
// 004ba2be  891c39               mov dword ptr [ecx + edi], ebx
// 004ba2c1  8b4004               mov eax, dword ptr [eax + 4]
// 004ba2c4  42                   inc edx
// 004ba2c5  89443904             mov dword ptr [ecx + edi + 4], eax
// 004ba2c9  3b5604               cmp edx, dword ptr [esi + 4]
// 004ba2cc  72e2                 jb 0x4ba2b0
// 004ba2ce  5b                   pop ebx
// 004ba2cf  8b0e                 mov ecx, dword ptr [esi]
// 004ba2d1  51                   push ecx
// 004ba2d2  e8a3631e00           call 0x6a067a
// 004ba2d7  83c404               add esp, 4
// 004ba2da  893e                 mov dword ptr [esi], edi
// 004ba2dc  5f                   pop edi
// 004ba2dd  8b5604               mov edx, dword ptr [esi + 4]
// 004ba2e0  8b06                 mov eax, dword ptr [esi]
// 004ba2e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ba2e6  8d04d0               lea eax, [eax + edx*8]
// 004ba2e9  8908                 mov dword ptr [eax], ecx
// 004ba2eb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004ba2ef  895004               mov dword ptr [eax + 4], edx
// 004ba2f2  ff4604               inc dword ptr [esi + 4]
// 004ba2f5  5e                   pop esi
// 004ba2f6  c20800               ret 8
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ?Insert@?$List@UMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@@DataStructures@@QAEXUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp

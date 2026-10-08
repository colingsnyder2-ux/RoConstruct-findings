// roc 2007-08 004b76c0  unit: Exposer  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b76c0
//
// 004b76c0  56                   push esi
// 004b76c1  8bf1                 mov esi, ecx
// 004b76c3  8b4608               mov eax, dword ptr [esi + 8]
// 004b76c6  394604               cmp dword ptr [esi + 4], eax
// 004b76c9  7574                 jne 0x4b773f
// 004b76cb  85c0                 test eax, eax
// 004b76cd  7509                 jne 0x4b76d8
// 004b76cf  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004b76d6  eb05                 jmp 0x4b76dd
// 004b76d8  03c0                 add eax, eax
// 004b76da  894608               mov dword ptr [esi + 8], eax
// 004b76dd  8b4608               mov eax, dword ptr [esi + 8]
// 004b76e0  33c9                 xor ecx, ecx
// 004b76e2  ba08000000           mov edx, 8
// 004b76e7  f7e2                 mul edx
// 004b76e9  0f90c1               seto cl
// 004b76ec  57                   push edi
// 004b76ed  f7d9                 neg ecx
// 004b76ef  0bc8                 or ecx, eax
// 004b76f1  51                   push ecx
// 004b76f2  e8ff871700           call 0x62fef6
// 004b76f7  83c404               add esp, 4
// 004b76fa  833e00               cmp dword ptr [esi], 0
// 004b76fd  8bf8                 mov edi, eax
// 004b76ff  743b                 je 0x4b773c
// 004b7701  33d2                 xor edx, edx
// 004b7703  395604               cmp dword ptr [esi + 4], edx
// 004b7706  7629                 jbe 0x4b7731
// 004b7708  53                   push ebx
// 004b7709  8da42400000000       lea esp, [esp]
// 004b7710  8b06                 mov eax, dword ptr [esi]
// 004b7712  8d0cd500000000       lea ecx, [edx*8]
// 004b7719  8b1c08               mov ebx, dword ptr [eax + ecx]
// 004b771c  03c1                 add eax, ecx
// 004b771e  891c39               mov dword ptr [ecx + edi], ebx
// 004b7721  8b4004               mov eax, dword ptr [eax + 4]
// 004b7724  83c201               add edx, 1
// 004b7727  89443904             mov dword ptr [ecx + edi + 4], eax
// 004b772b  3b5604               cmp edx, dword ptr [esi + 4]
// 004b772e  72e0                 jb 0x4b7710
// 004b7730  5b                   pop ebx
// 004b7731  8b0e                 mov ecx, dword ptr [esi]
// 004b7733  51                   push ecx
// 004b7734  e829851700           call 0x62fc62
// 004b7739  83c404               add esp, 4
// 004b773c  893e                 mov dword ptr [esi], edi
// 004b773e  5f                   pop edi
// 004b773f  8b5604               mov edx, dword ptr [esi + 4]
// 004b7742  8b06                 mov eax, dword ptr [esi]
// 004b7744  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b7748  8d04d0               lea eax, [eax + edx*8]
// 004b774b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004b774f  8908                 mov dword ptr [eax], ecx
// 004b7751  895004               mov dword ptr [eax + 4], edx
// 004b7754  83460401             add dword ptr [esi + 4], 1
// 004b7758  5e                   pop esi
// 004b7759  c20800               ret 8
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ?Insert@?$List@UMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@@DataStructures@@QAEXUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp

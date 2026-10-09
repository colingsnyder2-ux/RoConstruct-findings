// roc 2009-12 0054f790  unit: RBX::Network::IdSerializer  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0054f790
//
// 0054f790  56                   push esi
// 0054f791  8bf1                 mov esi, ecx
// 0054f793  8b4608               mov eax, dword ptr [esi + 8]
// 0054f796  394604               cmp dword ptr [esi + 4], eax
// 0054f799  7572                 jne 0x54f80d
// 0054f79b  85c0                 test eax, eax
// 0054f79d  7509                 jne 0x54f7a8
// 0054f79f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 0054f7a6  eb05                 jmp 0x54f7ad
// 0054f7a8  03c0                 add eax, eax
// 0054f7aa  894608               mov dword ptr [esi + 8], eax
// 0054f7ad  8b4608               mov eax, dword ptr [esi + 8]
// 0054f7b0  33c9                 xor ecx, ecx
// 0054f7b2  ba08000000           mov edx, 8
// 0054f7b7  f7e2                 mul edx
// 0054f7b9  0f90c1               seto cl
// 0054f7bc  57                   push edi
// 0054f7bd  f7d9                 neg ecx
// 0054f7bf  0bc8                 or ecx, eax
// 0054f7c1  51                   push ecx
// 0054f7c2  e87b432a00           call 0x7f3b42
// 0054f7c7  83c404               add esp, 4
// 0054f7ca  833e00               cmp dword ptr [esi], 0
// 0054f7cd  8bf8                 mov edi, eax
// 0054f7cf  7439                 je 0x54f80a
// 0054f7d1  33d2                 xor edx, edx
// 0054f7d3  395604               cmp dword ptr [esi + 4], edx
// 0054f7d6  7627                 jbe 0x54f7ff
// 0054f7d8  53                   push ebx
// 0054f7d9  8da42400000000       lea esp, [esp]
// 0054f7e0  8b06                 mov eax, dword ptr [esi]
// 0054f7e2  8d0cd500000000       lea ecx, [edx*8]
// 0054f7e9  8b1c08               mov ebx, dword ptr [eax + ecx]
// 0054f7ec  03c1                 add eax, ecx
// 0054f7ee  891c39               mov dword ptr [ecx + edi], ebx
// 0054f7f1  8b4004               mov eax, dword ptr [eax + 4]
// 0054f7f4  42                   inc edx
// 0054f7f5  89443904             mov dword ptr [ecx + edi + 4], eax
// 0054f7f9  3b5604               cmp edx, dword ptr [esi + 4]
// 0054f7fc  72e2                 jb 0x54f7e0
// 0054f7fe  5b                   pop ebx
// 0054f7ff  8b0e                 mov ecx, dword ptr [esi]
// 0054f801  51                   push ecx
// 0054f802  e8ff422a00           call 0x7f3b06
// 0054f807  83c404               add esp, 4
// 0054f80a  893e                 mov dword ptr [esi], edi
// 0054f80c  5f                   pop edi
// 0054f80d  8b5604               mov edx, dword ptr [esi + 4]
// 0054f810  8b06                 mov eax, dword ptr [esi]
// 0054f812  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054f816  8d04d0               lea eax, [eax + edx*8]
// 0054f819  8908                 mov dword ptr [eax], ecx
// 0054f81b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0054f81f  895004               mov dword ptr [eax + 4], edx
// 0054f822  ff4604               inc dword ptr [esi + 4]
// 0054f825  5e                   pop esi
// 0054f826  c20800               ret 8
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ?Insert@?$List@UMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@@DataStructures@@QAEXUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp

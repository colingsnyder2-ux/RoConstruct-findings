// roc 2009-06 004e0fe0  unit: RBX::Network::IdSerializer  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e0fe0
//
// 004e0fe0  56                   push esi
// 004e0fe1  8bf1                 mov esi, ecx
// 004e0fe3  8b4608               mov eax, dword ptr [esi + 8]
// 004e0fe6  57                   push edi
// 004e0fe7  394604               cmp dword ptr [esi + 4], eax
// 004e0fea  7564                 jne 0x4e1050
// 004e0fec  85c0                 test eax, eax
// 004e0fee  7509                 jne 0x4e0ff9
// 004e0ff0  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004e0ff7  eb05                 jmp 0x4e0ffe
// 004e0ff9  03c0                 add eax, eax
// 004e0ffb  894608               mov dword ptr [esi + 8], eax
// 004e0ffe  8b4608               mov eax, dword ptr [esi + 8]
// 004e1001  33c9                 xor ecx, ecx
// 004e1003  ba08000000           mov edx, 8
// 004e1008  f7e2                 mul edx
// 004e100a  0f90c1               seto cl
// 004e100d  f7d9                 neg ecx
// 004e100f  0bc8                 or ecx, eax
// 004e1011  51                   push ecx
// 004e1012  e8037d2300           call 0x718d1a
// 004e1017  33d2                 xor edx, edx
// 004e1019  83c404               add esp, 4
// 004e101c  8bf8                 mov edi, eax
// 004e101e  395604               cmp dword ptr [esi + 4], edx
// 004e1021  7620                 jbe 0x4e1043
// 004e1023  53                   push ebx
// 004e1024  8b06                 mov eax, dword ptr [esi]
// 004e1026  8d0cd500000000       lea ecx, [edx*8]
// 004e102d  8b1c08               mov ebx, dword ptr [eax + ecx]
// 004e1030  03c1                 add eax, ecx
// 004e1032  891c39               mov dword ptr [ecx + edi], ebx
// 004e1035  8b4004               mov eax, dword ptr [eax + 4]
// 004e1038  42                   inc edx
// 004e1039  89443904             mov dword ptr [ecx + edi + 4], eax
// 004e103d  3b5604               cmp edx, dword ptr [esi + 4]
// 004e1040  72e2                 jb 0x4e1024
// 004e1042  5b                   pop ebx
// 004e1043  8b0e                 mov ecx, dword ptr [esi]
// 004e1045  51                   push ecx
// 004e1046  e8937c2300           call 0x718cde
// 004e104b  83c404               add esp, 4
// 004e104e  893e                 mov dword ptr [esi], edi
// 004e1050  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e1053  8b542414             mov edx, dword ptr [esp + 0x14]
// 004e1057  3bca                 cmp ecx, edx
// 004e1059  741b                 je 0x4e1076
// 004e105b  eb03                 jmp 0x4e1060
// 004e105d  8d4900               lea ecx, [ecx]
// 004e1060  8b06                 mov eax, dword ptr [esi]
// 004e1062  8b7cc8f8             mov edi, dword ptr [eax + ecx*8 - 8]
// 004e1066  8d04c8               lea eax, [eax + ecx*8]
// 004e1069  8938                 mov dword ptr [eax], edi
// 004e106b  8b78fc               mov edi, dword ptr [eax - 4]
// 004e106e  49                   dec ecx
// 004e106f  897804               mov dword ptr [eax + 4], edi
// 004e1072  3bca                 cmp ecx, edx
// 004e1074  75ea                 jne 0x4e1060
// 004e1076  8b0e                 mov ecx, dword ptr [esi]
// 004e1078  8d04d1               lea eax, [ecx + edx*8]
// 004e107b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e107f  8910                 mov dword ptr [eax], edx
// 004e1081  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e1085  894804               mov dword ptr [eax + 4], ecx
// 004e1088  ff4604               inc dword ptr [esi + 4]
// 004e108b  5f                   pop edi
// 004e108c  5e                   pop esi
// 004e108d  c20c00               ret 0xc
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ?Insert@?$List@UMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@@DataStructures@@QAEXUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@2@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp

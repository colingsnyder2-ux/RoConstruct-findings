// roc 2009-12 0054f830  unit: RBX::Network::IdSerializer  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0054f830
//
// 0054f830  56                   push esi
// 0054f831  8bf1                 mov esi, ecx
// 0054f833  8b4608               mov eax, dword ptr [esi + 8]
// 0054f836  57                   push edi
// 0054f837  394604               cmp dword ptr [esi + 4], eax
// 0054f83a  7564                 jne 0x54f8a0
// 0054f83c  85c0                 test eax, eax
// 0054f83e  7509                 jne 0x54f849
// 0054f840  c7460810000000       mov dword ptr [esi + 8], 0x10
// 0054f847  eb05                 jmp 0x54f84e
// 0054f849  03c0                 add eax, eax
// 0054f84b  894608               mov dword ptr [esi + 8], eax
// 0054f84e  8b4608               mov eax, dword ptr [esi + 8]
// 0054f851  33c9                 xor ecx, ecx
// 0054f853  ba08000000           mov edx, 8
// 0054f858  f7e2                 mul edx
// 0054f85a  0f90c1               seto cl
// 0054f85d  f7d9                 neg ecx
// 0054f85f  0bc8                 or ecx, eax
// 0054f861  51                   push ecx
// 0054f862  e8db422a00           call 0x7f3b42
// 0054f867  33d2                 xor edx, edx
// 0054f869  83c404               add esp, 4
// 0054f86c  8bf8                 mov edi, eax
// 0054f86e  395604               cmp dword ptr [esi + 4], edx
// 0054f871  7620                 jbe 0x54f893
// 0054f873  53                   push ebx
// 0054f874  8b06                 mov eax, dword ptr [esi]
// 0054f876  8d0cd500000000       lea ecx, [edx*8]
// 0054f87d  8b1c08               mov ebx, dword ptr [eax + ecx]
// 0054f880  03c1                 add eax, ecx
// 0054f882  891c39               mov dword ptr [ecx + edi], ebx
// 0054f885  8b4004               mov eax, dword ptr [eax + 4]
// 0054f888  42                   inc edx
// 0054f889  89443904             mov dword ptr [ecx + edi + 4], eax
// 0054f88d  3b5604               cmp edx, dword ptr [esi + 4]
// 0054f890  72e2                 jb 0x54f874
// 0054f892  5b                   pop ebx
// 0054f893  8b0e                 mov ecx, dword ptr [esi]
// 0054f895  51                   push ecx
// 0054f896  e86b422a00           call 0x7f3b06
// 0054f89b  83c404               add esp, 4
// 0054f89e  893e                 mov dword ptr [esi], edi
// 0054f8a0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054f8a3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0054f8a7  3bca                 cmp ecx, edx
// 0054f8a9  741b                 je 0x54f8c6
// 0054f8ab  eb03                 jmp 0x54f8b0
// 0054f8ad  8d4900               lea ecx, [ecx]
// 0054f8b0  8b06                 mov eax, dword ptr [esi]
// 0054f8b2  8b7cc8f8             mov edi, dword ptr [eax + ecx*8 - 8]
// 0054f8b6  8d04c8               lea eax, [eax + ecx*8]
// 0054f8b9  8938                 mov dword ptr [eax], edi
// 0054f8bb  8b78fc               mov edi, dword ptr [eax - 4]
// 0054f8be  49                   dec ecx
// 0054f8bf  897804               mov dword ptr [eax + 4], edi
// 0054f8c2  3bca                 cmp ecx, edx
// 0054f8c4  75ea                 jne 0x54f8b0
// 0054f8c6  8b0e                 mov ecx, dword ptr [esi]
// 0054f8c8  8d04d1               lea eax, [ecx + edx*8]
// 0054f8cb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0054f8cf  8910                 mov dword ptr [eax], edx
// 0054f8d1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054f8d5  894804               mov dword ptr [eax + 4], ecx
// 0054f8d8  ff4604               inc dword ptr [esi + 4]
// 0054f8db  5f                   pop edi
// 0054f8dc  5e                   pop esi
// 0054f8dd  c20c00               ret 0xc
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ?Insert@?$List@UMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@@DataStructures@@QAEXUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@2@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp

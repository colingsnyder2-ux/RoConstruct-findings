// roc 2010-06 004fe080  unit: RBX::Network::IdSerializer  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fe080
//
// 004fe080  56                   push esi
// 004fe081  8bf1                 mov esi, ecx
// 004fe083  8b4608               mov eax, dword ptr [esi + 8]
// 004fe086  394604               cmp dword ptr [esi + 4], eax
// 004fe089  7572                 jne 0x4fe0fd
// 004fe08b  85c0                 test eax, eax
// 004fe08d  7509                 jne 0x4fe098
// 004fe08f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004fe096  eb05                 jmp 0x4fe09d
// 004fe098  03c0                 add eax, eax
// 004fe09a  894608               mov dword ptr [esi + 8], eax
// 004fe09d  8b4608               mov eax, dword ptr [esi + 8]
// 004fe0a0  33c9                 xor ecx, ecx
// 004fe0a2  ba08000000           mov edx, 8
// 004fe0a7  f7e2                 mul edx
// 004fe0a9  0f90c1               seto cl
// 004fe0ac  57                   push edi
// 004fe0ad  f7d9                 neg ecx
// 004fe0af  0bc8                 or ecx, eax
// 004fe0b1  51                   push ecx
// 004fe0b2  e8cb9b2a00           call 0x7a7c82
// 004fe0b7  83c404               add esp, 4
// 004fe0ba  833e00               cmp dword ptr [esi], 0
// 004fe0bd  8bf8                 mov edi, eax
// 004fe0bf  7439                 je 0x4fe0fa
// 004fe0c1  33d2                 xor edx, edx
// 004fe0c3  395604               cmp dword ptr [esi + 4], edx
// 004fe0c6  7627                 jbe 0x4fe0ef
// 004fe0c8  53                   push ebx
// 004fe0c9  8da42400000000       lea esp, [esp]
// 004fe0d0  8b06                 mov eax, dword ptr [esi]
// 004fe0d2  8d0cd500000000       lea ecx, [edx*8]
// 004fe0d9  8b1c08               mov ebx, dword ptr [eax + ecx]
// 004fe0dc  03c1                 add eax, ecx
// 004fe0de  891c39               mov dword ptr [ecx + edi], ebx
// 004fe0e1  8b4004               mov eax, dword ptr [eax + 4]
// 004fe0e4  42                   inc edx
// 004fe0e5  89443904             mov dword ptr [ecx + edi + 4], eax
// 004fe0e9  3b5604               cmp edx, dword ptr [esi + 4]
// 004fe0ec  72e2                 jb 0x4fe0d0
// 004fe0ee  5b                   pop ebx
// 004fe0ef  8b0e                 mov ecx, dword ptr [esi]
// 004fe0f1  51                   push ecx
// 004fe0f2  e84f9b2a00           call 0x7a7c46
// 004fe0f7  83c404               add esp, 4
// 004fe0fa  893e                 mov dword ptr [esi], edi
// 004fe0fc  5f                   pop edi
// 004fe0fd  8b5604               mov edx, dword ptr [esi + 4]
// 004fe100  8b06                 mov eax, dword ptr [esi]
// 004fe102  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fe106  8d04d0               lea eax, [eax + edx*8]
// 004fe109  8908                 mov dword ptr [eax], ecx
// 004fe10b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004fe10f  895004               mov dword ptr [eax + 4], edx
// 004fe112  ff4604               inc dword ptr [esi + 4]
// 004fe115  5e                   pop esi
// 004fe116  c20800               ret 8
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ?Insert@?$List@UMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@@DataStructures@@QAEXUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp

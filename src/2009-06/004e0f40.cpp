// roc 2009-06 004e0f40  unit: RBX::Network::IdSerializer  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e0f40
//
// 004e0f40  56                   push esi
// 004e0f41  8bf1                 mov esi, ecx
// 004e0f43  8b4608               mov eax, dword ptr [esi + 8]
// 004e0f46  394604               cmp dword ptr [esi + 4], eax
// 004e0f49  7572                 jne 0x4e0fbd
// 004e0f4b  85c0                 test eax, eax
// 004e0f4d  7509                 jne 0x4e0f58
// 004e0f4f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004e0f56  eb05                 jmp 0x4e0f5d
// 004e0f58  03c0                 add eax, eax
// 004e0f5a  894608               mov dword ptr [esi + 8], eax
// 004e0f5d  8b4608               mov eax, dword ptr [esi + 8]
// 004e0f60  33c9                 xor ecx, ecx
// 004e0f62  ba08000000           mov edx, 8
// 004e0f67  f7e2                 mul edx
// 004e0f69  0f90c1               seto cl
// 004e0f6c  57                   push edi
// 004e0f6d  f7d9                 neg ecx
// 004e0f6f  0bc8                 or ecx, eax
// 004e0f71  51                   push ecx
// 004e0f72  e8a37d2300           call 0x718d1a
// 004e0f77  83c404               add esp, 4
// 004e0f7a  833e00               cmp dword ptr [esi], 0
// 004e0f7d  8bf8                 mov edi, eax
// 004e0f7f  7439                 je 0x4e0fba
// 004e0f81  33d2                 xor edx, edx
// 004e0f83  395604               cmp dword ptr [esi + 4], edx
// 004e0f86  7627                 jbe 0x4e0faf
// 004e0f88  53                   push ebx
// 004e0f89  8da42400000000       lea esp, [esp]
// 004e0f90  8b06                 mov eax, dword ptr [esi]
// 004e0f92  8d0cd500000000       lea ecx, [edx*8]
// 004e0f99  8b1c08               mov ebx, dword ptr [eax + ecx]
// 004e0f9c  03c1                 add eax, ecx
// 004e0f9e  891c39               mov dword ptr [ecx + edi], ebx
// 004e0fa1  8b4004               mov eax, dword ptr [eax + 4]
// 004e0fa4  42                   inc edx
// 004e0fa5  89443904             mov dword ptr [ecx + edi + 4], eax
// 004e0fa9  3b5604               cmp edx, dword ptr [esi + 4]
// 004e0fac  72e2                 jb 0x4e0f90
// 004e0fae  5b                   pop ebx
// 004e0faf  8b0e                 mov ecx, dword ptr [esi]
// 004e0fb1  51                   push ecx
// 004e0fb2  e8277d2300           call 0x718cde
// 004e0fb7  83c404               add esp, 4
// 004e0fba  893e                 mov dword ptr [esi], edi
// 004e0fbc  5f                   pop edi
// 004e0fbd  8b5604               mov edx, dword ptr [esi + 4]
// 004e0fc0  8b06                 mov eax, dword ptr [esi]
// 004e0fc2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e0fc6  8d04d0               lea eax, [eax + edx*8]
// 004e0fc9  8908                 mov dword ptr [eax], ecx
// 004e0fcb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e0fcf  895004               mov dword ptr [eax + 4], edx
// 004e0fd2  ff4604               inc dword ptr [esi + 4]
// 004e0fd5  5e                   pop esi
// 004e0fd6  c20800               ret 8
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ?Insert@?$List@UMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@@DataStructures@@QAEXUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp

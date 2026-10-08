// roc 2007-08 004b7760  unit: Exposer  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7760
//
// 004b7760  56                   push esi
// 004b7761  8bf1                 mov esi, ecx
// 004b7763  8b4608               mov eax, dword ptr [esi + 8]
// 004b7766  394604               cmp dword ptr [esi + 4], eax
// 004b7769  57                   push edi
// 004b776a  7566                 jne 0x4b77d2
// 004b776c  85c0                 test eax, eax
// 004b776e  7509                 jne 0x4b7779
// 004b7770  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004b7777  eb05                 jmp 0x4b777e
// 004b7779  03c0                 add eax, eax
// 004b777b  894608               mov dword ptr [esi + 8], eax
// 004b777e  8b4608               mov eax, dword ptr [esi + 8]
// 004b7781  33c9                 xor ecx, ecx
// 004b7783  ba08000000           mov edx, 8
// 004b7788  f7e2                 mul edx
// 004b778a  0f90c1               seto cl
// 004b778d  f7d9                 neg ecx
// 004b778f  0bc8                 or ecx, eax
// 004b7791  51                   push ecx
// 004b7792  e85f871700           call 0x62fef6
// 004b7797  33d2                 xor edx, edx
// 004b7799  83c404               add esp, 4
// 004b779c  395604               cmp dword ptr [esi + 4], edx
// 004b779f  8bf8                 mov edi, eax
// 004b77a1  7622                 jbe 0x4b77c5
// 004b77a3  53                   push ebx
// 004b77a4  8b06                 mov eax, dword ptr [esi]
// 004b77a6  8d0cd500000000       lea ecx, [edx*8]
// 004b77ad  8b1c08               mov ebx, dword ptr [eax + ecx]
// 004b77b0  03c1                 add eax, ecx
// 004b77b2  891c39               mov dword ptr [ecx + edi], ebx
// 004b77b5  8b4004               mov eax, dword ptr [eax + 4]
// 004b77b8  83c201               add edx, 1
// 004b77bb  89443904             mov dword ptr [ecx + edi + 4], eax
// 004b77bf  3b5604               cmp edx, dword ptr [esi + 4]
// 004b77c2  72e0                 jb 0x4b77a4
// 004b77c4  5b                   pop ebx
// 004b77c5  8b0e                 mov ecx, dword ptr [esi]
// 004b77c7  51                   push ecx
// 004b77c8  e895841700           call 0x62fc62
// 004b77cd  83c404               add esp, 4
// 004b77d0  893e                 mov dword ptr [esi], edi
// 004b77d2  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b77d5  8b542414             mov edx, dword ptr [esp + 0x14]
// 004b77d9  3bca                 cmp ecx, edx
// 004b77db  741b                 je 0x4b77f8
// 004b77dd  8d4900               lea ecx, [ecx]
// 004b77e0  8b06                 mov eax, dword ptr [esi]
// 004b77e2  8b7cc8f8             mov edi, dword ptr [eax + ecx*8 - 8]
// 004b77e6  8d04c8               lea eax, [eax + ecx*8]
// 004b77e9  8938                 mov dword ptr [eax], edi
// 004b77eb  8b78fc               mov edi, dword ptr [eax - 4]
// 004b77ee  83e901               sub ecx, 1
// 004b77f1  3bca                 cmp ecx, edx
// 004b77f3  897804               mov dword ptr [eax + 4], edi
// 004b77f6  75e8                 jne 0x4b77e0
// 004b77f8  8b0e                 mov ecx, dword ptr [esi]
// 004b77fa  8d04d1               lea eax, [ecx + edx*8]
// 004b77fd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004b7801  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b7805  8910                 mov dword ptr [eax], edx
// 004b7807  894804               mov dword ptr [eax + 4], ecx
// 004b780a  83460401             add dword ptr [esi + 4], 1
// 004b780e  5f                   pop edi
// 004b780f  5e                   pop esi
// 004b7810  c20c00               ret 0xc
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ?Insert@?$List@UMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@@DataStructures@@QAEXUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@2@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp

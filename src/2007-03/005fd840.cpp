// roc 2007-03 005fd840  unit: seg_005f0000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005fd840
//
// 005fd840  57                   push edi
// 005fd841  8b7c2408             mov edi, dword ptr [esp + 8]
// 005fd845  85ff                 test edi, edi
// 005fd847  7521                 jne 0x5fd86a
// 005fd849  8b442410             mov eax, dword ptr [esp + 0x10]
// 005fd84d  83caff               or edx, 0xffffffff
// 005fd850  895010               mov dword ptr [eax + 0x10], edx
// 005fd853  895014               mov dword ptr [eax + 0x14], edx
// 005fd856  c70008000000         mov dword ptr [eax], 8
// 005fd85c  c74008ff000000       mov dword ptr [eax + 8], 0xff
// 005fd863  b808000000           mov eax, 8
// 005fd868  5f                   pop edi
// 005fd869  c3                   ret 
// 005fd86a  0fb64732             movzx eax, byte ptr [edi + 0x32]
// 005fd86e  83e801               sub eax, 1
// 005fd871  53                   push ebx
// 005fd872  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005fd876  56                   push esi
// 005fd877  7821                 js 0x5fd89a
// 005fd879  8b0f                 mov ecx, dword ptr [edi]
// 005fd87b  8b7118               mov esi, dword ptr [ecx + 0x18]
// 005fd87e  8d9447ac000000       lea edx, [edi + eax*2 + 0xac]
// 005fd885  0fb70a               movzx ecx, word ptr [edx]
// 005fd888  8d0c49               lea ecx, [ecx + ecx*2]
// 005fd88b  3b1c8e               cmp ebx, dword ptr [esi + ecx*4]
// 005fd88e  7427                 je 0x5fd8b7
// 005fd890  83e801               sub eax, 1
// 005fd893  83ea02               sub edx, 2
// 005fd896  85c0                 test eax, eax
// 005fd898  7deb                 jge 0x5fd885
// 005fd89a  8b742418             mov esi, dword ptr [esp + 0x18]
// 005fd89e  8b4708               mov eax, dword ptr [edi + 8]
// 005fd8a1  6a00                 push 0
// 005fd8a3  56                   push esi
// 005fd8a4  53                   push ebx
// 005fd8a5  50                   push eax
// 005fd8a6  e895ffffff           call 0x5fd840
// 005fd8ab  83c410               add esp, 0x10
// 005fd8ae  83f808               cmp eax, 8
// 005fd8b1  7551                 jne 0x5fd904
// 005fd8b3  5e                   pop esi
// 005fd8b4  5b                   pop ebx
// 005fd8b5  5f                   pop edi
// 005fd8b6  c3                   ret 
// 005fd8b7  85c0                 test eax, eax
// 005fd8b9  7cdf                 jl 0x5fd89a
// 005fd8bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005fd8bf  83caff               or edx, 0xffffffff
// 005fd8c2  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 005fd8c7  895110               mov dword ptr [ecx + 0x10], edx
// 005fd8ca  895114               mov dword ptr [ecx + 0x14], edx
// 005fd8cd  c70106000000         mov dword ptr [ecx], 6
// 005fd8d3  894108               mov dword ptr [ecx + 8], eax
// 005fd8d6  7523                 jne 0x5fd8fb
// 005fd8d8  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 005fd8db  85c9                 test ecx, ecx
// 005fd8dd  741c                 je 0x5fd8fb
// 005fd8df  90                   nop 
// 005fd8e0  0fb65108             movzx edx, byte ptr [ecx + 8]
// 005fd8e4  3bd0                 cmp edx, eax
// 005fd8e6  7e0f                 jle 0x5fd8f7
// 005fd8e8  8b09                 mov ecx, dword ptr [ecx]
// 005fd8ea  85c9                 test ecx, ecx
// 005fd8ec  75f2                 jne 0x5fd8e0
// 005fd8ee  5e                   pop esi
// 005fd8ef  5b                   pop ebx
// 005fd8f0  b806000000           mov eax, 6
// 005fd8f5  5f                   pop edi
// 005fd8f6  c3                   ret 
// 005fd8f7  c6410901             mov byte ptr [ecx + 9], 1
// 005fd8fb  5e                   pop esi
// 005fd8fc  5b                   pop ebx
// 005fd8fd  b806000000           mov eax, 6
// 005fd902  5f                   pop edi
// 005fd903  c3                   ret 
// 005fd904  56                   push esi
// 005fd905  53                   push ebx
// 005fd906  e8e5fdffff           call 0x5fd6f0
// 005fd90b  83c408               add esp, 8
// 005fd90e  894608               mov dword ptr [esi + 8], eax
// 005fd911  c70607000000         mov dword ptr [esi], 7
// 005fd917  5e                   pop esi
// 005fd918  5b                   pop ebx
// 005fd919  b807000000           mov eax, 7
// 005fd91e  5f                   pop edi
// 005fd91f  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?singlevaraux@@YAHPAUFuncState@@PATTString@@PAUexpdesc@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp

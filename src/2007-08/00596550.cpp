// roc 2007-08 00596550  unit: RBX::LaserTool  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596550
//
// 00596550  8b442408             mov eax, dword ptr [esp + 8]
// 00596554  56                   push esi
// 00596555  57                   push edi
// 00596556  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059655a  2bc7                 sub eax, edi
// 0059655c  33d2                 xor edx, edx
// 0059655e  f7f7                 div edi
// 00596560  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00596564  8b11                 mov edx, dword ptr [ecx]
// 00596566  0fafc7               imul eax, edi
// 00596569  03c6                 add eax, esi
// 0059656b  3bc6                 cmp eax, esi
// 0059656d  8910                 mov dword ptr [eax], edx
// 0059656f  741b                 je 0x59658c
// 00596571  8bd0                 mov edx, eax
// 00596573  2bd7                 sub edx, edi
// 00596575  3bd6                 cmp edx, esi
// 00596577  7411                 je 0x59658a
// 00596579  8da42400000000       lea esp, [esp]
// 00596580  8902                 mov dword ptr [edx], eax
// 00596582  8bc2                 mov eax, edx
// 00596584  2bd7                 sub edx, edi
// 00596586  3bd6                 cmp edx, esi
// 00596588  75f6                 jne 0x596580
// 0059658a  8906                 mov dword ptr [esi], eax
// 0059658c  5f                   pop edi
// 0059658d  8931                 mov dword ptr [ecx], esi
// 0059658f  5e                   pop esi
// 00596590  c20c00               ret 0xc
// library rbxgs/script\LuaMemory.cpp (function ?add_block@?$simple_segregated_storage@I@boost@@QAEXQAXII@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp

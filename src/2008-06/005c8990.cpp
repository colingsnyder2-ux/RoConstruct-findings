// roc 2008-06 005c8990  unit: RBX::LaserTool  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8990
//
// 005c8990  8b442408             mov eax, dword ptr [esp + 8]
// 005c8994  56                   push esi
// 005c8995  57                   push edi
// 005c8996  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005c899a  2bc7                 sub eax, edi
// 005c899c  33d2                 xor edx, edx
// 005c899e  f7f7                 div edi
// 005c89a0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c89a4  8b11                 mov edx, dword ptr [ecx]
// 005c89a6  0fafc7               imul eax, edi
// 005c89a9  03c6                 add eax, esi
// 005c89ab  8910                 mov dword ptr [eax], edx
// 005c89ad  3bc6                 cmp eax, esi
// 005c89af  741b                 je 0x5c89cc
// 005c89b1  8bd0                 mov edx, eax
// 005c89b3  2bd7                 sub edx, edi
// 005c89b5  3bd6                 cmp edx, esi
// 005c89b7  7411                 je 0x5c89ca
// 005c89b9  8da42400000000       lea esp, [esp]
// 005c89c0  8902                 mov dword ptr [edx], eax
// 005c89c2  8bc2                 mov eax, edx
// 005c89c4  2bd7                 sub edx, edi
// 005c89c6  3bd6                 cmp edx, esi
// 005c89c8  75f6                 jne 0x5c89c0
// 005c89ca  8906                 mov dword ptr [esi], eax
// 005c89cc  5f                   pop edi
// 005c89cd  8931                 mov dword ptr [ecx], esi
// 005c89cf  5e                   pop esi
// 005c89d0  c20c00               ret 0xc
// library rbxgs/script\LuaMemory.cpp (function ?add_block@?$simple_segregated_storage@I@boost@@QAEXQAXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp

// roc 2010-06 004c0e70  unit: RBX::Network::Players  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c0e70
//
// 004c0e70  8b442408             mov eax, dword ptr [esp + 8]
// 004c0e74  56                   push esi
// 004c0e75  57                   push edi
// 004c0e76  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c0e7a  2bc7                 sub eax, edi
// 004c0e7c  33d2                 xor edx, edx
// 004c0e7e  f7f7                 div edi
// 004c0e80  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c0e84  8b11                 mov edx, dword ptr [ecx]
// 004c0e86  0fafc7               imul eax, edi
// 004c0e89  03c6                 add eax, esi
// 004c0e8b  8910                 mov dword ptr [eax], edx
// 004c0e8d  3bc6                 cmp eax, esi
// 004c0e8f  741b                 je 0x4c0eac
// 004c0e91  8bd0                 mov edx, eax
// 004c0e93  2bd7                 sub edx, edi
// 004c0e95  3bd6                 cmp edx, esi
// 004c0e97  7411                 je 0x4c0eaa
// 004c0e99  8da42400000000       lea esp, [esp]
// 004c0ea0  8902                 mov dword ptr [edx], eax
// 004c0ea2  8bc2                 mov eax, edx
// 004c0ea4  2bd7                 sub edx, edi
// 004c0ea6  3bd6                 cmp edx, esi
// 004c0ea8  75f6                 jne 0x4c0ea0
// 004c0eaa  8906                 mov dword ptr [esi], eax
// 004c0eac  5f                   pop edi
// 004c0ead  8931                 mov dword ptr [ecx], esi
// 004c0eaf  5e                   pop esi
// 004c0eb0  c20c00               ret 0xc
// library rbxgs/script\LuaMemory.cpp (function ?add_block@?$simple_segregated_storage@I@boost@@QAEXQAXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp

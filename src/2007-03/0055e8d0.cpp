// roc 2007-03 0055e8d0  unit: seg_00550000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055e8d0
//
// 0055e8d0  8b442408             mov eax, dword ptr [esp + 8]
// 0055e8d4  56                   push esi
// 0055e8d5  57                   push edi
// 0055e8d6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0055e8da  2bc7                 sub eax, edi
// 0055e8dc  33d2                 xor edx, edx
// 0055e8de  f7f7                 div edi
// 0055e8e0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0055e8e4  8b11                 mov edx, dword ptr [ecx]
// 0055e8e6  0fafc7               imul eax, edi
// 0055e8e9  03c6                 add eax, esi
// 0055e8eb  3bc6                 cmp eax, esi
// 0055e8ed  8910                 mov dword ptr [eax], edx
// 0055e8ef  741b                 je 0x55e90c
// 0055e8f1  8bd0                 mov edx, eax
// 0055e8f3  2bd7                 sub edx, edi
// 0055e8f5  3bd6                 cmp edx, esi
// 0055e8f7  7411                 je 0x55e90a
// 0055e8f9  8da42400000000       lea esp, [esp]
// 0055e900  8902                 mov dword ptr [edx], eax
// 0055e902  8bc2                 mov eax, edx
// 0055e904  2bd7                 sub edx, edi
// 0055e906  3bd6                 cmp edx, esi
// 0055e908  75f6                 jne 0x55e900
// 0055e90a  8906                 mov dword ptr [esi], eax
// 0055e90c  5f                   pop edi
// 0055e90d  8931                 mov dword ptr [ecx], esi
// 0055e90f  5e                   pop esi
// 0055e910  c20c00               ret 0xc
// library rbxgs/script\LuaMemory.cpp (function ?add_block@?$simple_segregated_storage@I@boost@@QAEXQAXII@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp

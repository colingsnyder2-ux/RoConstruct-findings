// roc 2011-06 004c8630  unit: RBX::Network::Players  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c8630
//
// 004c8630  8b442408             mov eax, dword ptr [esp + 8]
// 004c8634  56                   push esi
// 004c8635  57                   push edi
// 004c8636  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c863a  2bc7                 sub eax, edi
// 004c863c  33d2                 xor edx, edx
// 004c863e  f7f7                 div edi
// 004c8640  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c8644  8b11                 mov edx, dword ptr [ecx]
// 004c8646  0fafc7               imul eax, edi
// 004c8649  03c6                 add eax, esi
// 004c864b  8910                 mov dword ptr [eax], edx
// 004c864d  3bc6                 cmp eax, esi
// 004c864f  741b                 je 0x4c866c
// 004c8651  8bd0                 mov edx, eax
// 004c8653  2bd7                 sub edx, edi
// 004c8655  3bd6                 cmp edx, esi
// 004c8657  7411                 je 0x4c866a
// 004c8659  8da42400000000       lea esp, [esp]
// 004c8660  8902                 mov dword ptr [edx], eax
// 004c8662  8bc2                 mov eax, edx
// 004c8664  2bd7                 sub edx, edi
// 004c8666  3bd6                 cmp edx, esi
// 004c8668  75f6                 jne 0x4c8660
// 004c866a  8906                 mov dword ptr [esi], eax
// 004c866c  5f                   pop edi
// 004c866d  8931                 mov dword ptr [ecx], esi
// 004c866f  5e                   pop esi
// 004c8670  c20c00               ret 0xc
// library rbxgs/script\LuaMemory.cpp (function ?add_block@?$simple_segregated_storage@I@boost@@QAEXQAXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp

// roc 2009-06 00482a90  unit: Ogre::RbxSpatialHashedSceneNode::?1??_findVisibleObjects::NodeVisiter  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00482a90
//
// 00482a90  8b442408             mov eax, dword ptr [esp + 8]
// 00482a94  56                   push esi
// 00482a95  57                   push edi
// 00482a96  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00482a9a  2bc7                 sub eax, edi
// 00482a9c  33d2                 xor edx, edx
// 00482a9e  f7f7                 div edi
// 00482aa0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00482aa4  8b11                 mov edx, dword ptr [ecx]
// 00482aa6  0fafc7               imul eax, edi
// 00482aa9  03c6                 add eax, esi
// 00482aab  8910                 mov dword ptr [eax], edx
// 00482aad  3bc6                 cmp eax, esi
// 00482aaf  741b                 je 0x482acc
// 00482ab1  8bd0                 mov edx, eax
// 00482ab3  2bd7                 sub edx, edi
// 00482ab5  3bd6                 cmp edx, esi
// 00482ab7  7411                 je 0x482aca
// 00482ab9  8da42400000000       lea esp, [esp]
// 00482ac0  8902                 mov dword ptr [edx], eax
// 00482ac2  8bc2                 mov eax, edx
// 00482ac4  2bd7                 sub edx, edi
// 00482ac6  3bd6                 cmp edx, esi
// 00482ac8  75f6                 jne 0x482ac0
// 00482aca  8906                 mov dword ptr [esi], eax
// 00482acc  5f                   pop edi
// 00482acd  8931                 mov dword ptr [ecx], esi
// 00482acf  5e                   pop esi
// 00482ad0  c20c00               ret 0xc
// library rbxgs/script\LuaMemory.cpp (function ?add_block@?$simple_segregated_storage@I@boost@@QAEXQAXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp

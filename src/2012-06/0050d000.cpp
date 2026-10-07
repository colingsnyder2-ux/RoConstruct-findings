// roc 2012-06 0050d000  unit: Ogre::RbxSpatialHashedSceneNode::?3??_findVisibleObjects::NodeVisiter  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0050d000
//
// 0050d000  8b442408             mov eax, dword ptr [esp + 8]
// 0050d004  56                   push esi
// 0050d005  57                   push edi
// 0050d006  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0050d00a  2bc7                 sub eax, edi
// 0050d00c  33d2                 xor edx, edx
// 0050d00e  f7f7                 div edi
// 0050d010  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0050d014  8b11                 mov edx, dword ptr [ecx]
// 0050d016  0fafc7               imul eax, edi
// 0050d019  03c6                 add eax, esi
// 0050d01b  8910                 mov dword ptr [eax], edx
// 0050d01d  3bc6                 cmp eax, esi
// 0050d01f  741b                 je 0x50d03c
// 0050d021  8bd0                 mov edx, eax
// 0050d023  2bd7                 sub edx, edi
// 0050d025  3bd6                 cmp edx, esi
// 0050d027  7411                 je 0x50d03a
// 0050d029  8da42400000000       lea esp, [esp]
// 0050d030  8902                 mov dword ptr [edx], eax
// 0050d032  8bc2                 mov eax, edx
// 0050d034  2bd7                 sub edx, edi
// 0050d036  3bd6                 cmp edx, esi
// 0050d038  75f6                 jne 0x50d030
// 0050d03a  8906                 mov dword ptr [esi], eax
// 0050d03c  5f                   pop edi
// 0050d03d  8931                 mov dword ptr [ecx], esi
// 0050d03f  5e                   pop esi
// 0050d040  c20c00               ret 0xc
// library rbxgs/script\LuaMemory.cpp (function ?add_block@?$simple_segregated_storage@I@boost@@QAEXQAXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp

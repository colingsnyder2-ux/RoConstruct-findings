// roc 2009-12 004bdba0  unit: Ogre::RbxSpatialHashedSceneNode::?1??_findVisibleObjects::NodeVisiter  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004bdba0
//
// 004bdba0  8b442408             mov eax, dword ptr [esp + 8]
// 004bdba4  56                   push esi
// 004bdba5  57                   push edi
// 004bdba6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004bdbaa  2bc7                 sub eax, edi
// 004bdbac  33d2                 xor edx, edx
// 004bdbae  f7f7                 div edi
// 004bdbb0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004bdbb4  8b11                 mov edx, dword ptr [ecx]
// 004bdbb6  0fafc7               imul eax, edi
// 004bdbb9  03c6                 add eax, esi
// 004bdbbb  8910                 mov dword ptr [eax], edx
// 004bdbbd  3bc6                 cmp eax, esi
// 004bdbbf  741b                 je 0x4bdbdc
// 004bdbc1  8bd0                 mov edx, eax
// 004bdbc3  2bd7                 sub edx, edi
// 004bdbc5  3bd6                 cmp edx, esi
// 004bdbc7  7411                 je 0x4bdbda
// 004bdbc9  8da42400000000       lea esp, [esp]
// 004bdbd0  8902                 mov dword ptr [edx], eax
// 004bdbd2  8bc2                 mov eax, edx
// 004bdbd4  2bd7                 sub edx, edi
// 004bdbd6  3bd6                 cmp edx, esi
// 004bdbd8  75f6                 jne 0x4bdbd0
// 004bdbda  8906                 mov dword ptr [esi], eax
// 004bdbdc  5f                   pop edi
// 004bdbdd  8931                 mov dword ptr [ecx], esi
// 004bdbdf  5e                   pop esi
// 004bdbe0  c20c00               ret 0xc
// library rbxgs/script\LuaMemory.cpp (function ?add_block@?$simple_segregated_storage@I@boost@@QAEXQAXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp

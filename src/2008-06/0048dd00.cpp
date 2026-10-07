// roc 2008-06 0048dd00  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048dd00
//
// 0048dd00  56                   push esi
// 0048dd01  6a0c                 push 0xc
// 0048dd03  8bf1                 mov esi, ecx
// 0048dd05  e8162c2100           call 0x6a0920
// 0048dd0a  83c404               add esp, 4
// 0048dd0d  85c0                 test eax, eax
// 0048dd0f  7427                 je 0x48dd38
// 0048dd11  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048dd15  c70018178200         mov dword ptr [eax], 0x821718
// 0048dd1b  8b11                 mov edx, dword ptr [ecx]
// 0048dd1d  895004               mov dword ptr [eax + 4], edx
// 0048dd20  8b4904               mov ecx, dword ptr [ecx + 4]
// 0048dd23  894808               mov dword ptr [eax + 8], ecx
// 0048dd26  85c9                 test ecx, ecx
// 0048dd28  7410                 je 0x48dd3a
// 0048dd2a  83c104               add ecx, 4
// 0048dd2d  ba01000000           mov edx, 1
// 0048dd32  f00fc111             lock xadd dword ptr [ecx], edx
// 0048dd36  eb02                 jmp 0x48dd3a
// 0048dd38  33c0                 xor eax, eax
// 0048dd3a  8d542408             lea edx, [esp + 8]
// 0048dd3e  8bc8                 mov ecx, eax
// 0048dd40  3bd6                 cmp edx, esi
// 0048dd42  7404                 je 0x48dd48
// 0048dd44  8b0e                 mov ecx, dword ptr [esi]
// 0048dd46  8906                 mov dword ptr [esi], eax
// 0048dd48  85c9                 test ecx, ecx
// 0048dd4a  7408                 je 0x48dd54
// 0048dd4c  8b01                 mov eax, dword ptr [ecx]
// 0048dd4e  8b10                 mov edx, dword ptr [eax]
// 0048dd50  6a01                 push 1
// 0048dd52  ffd2                 call edx
// 0048dd54  8bc6                 mov eax, esi
// 0048dd56  5e                   pop esi
// 0048dd57  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

// roc 2011-06 006fef10  unit: RBX::VGeometryService::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fef10
//
// 006fef10  6aff                 push -1
// 006fef12  68e8599f00           push 0x9f59e8
// 006fef17  64a100000000         mov eax, dword ptr fs:[0]
// 006fef1d  50                   push eax
// 006fef1e  64892500000000       mov dword ptr fs:[0], esp
// 006fef25  51                   push ecx
// 006fef26  56                   push esi
// 006fef27  57                   push edi
// 006fef28  8bf9                 mov edi, ecx
// 006fef2a  897c2408             mov dword ptr [esp + 8], edi
// 006fef2e  8b7708               mov esi, dword ptr [edi + 8]
// 006fef31  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006fef39  85f6                 test esi, esi
// 006fef3b  742a                 je 0x6fef67
// 006fef3d  8d4604               lea eax, [esi + 4]
// 006fef40  83c9ff               or ecx, 0xffffffff
// 006fef43  f00fc108             lock xadd dword ptr [eax], ecx
// 006fef47  751e                 jne 0x6fef67
// 006fef49  8b16                 mov edx, dword ptr [esi]
// 006fef4b  8b4204               mov eax, dword ptr [edx + 4]
// 006fef4e  8bce                 mov ecx, esi
// 006fef50  ffd0                 call eax
// 006fef52  8d4e08               lea ecx, [esi + 8]
// 006fef55  83caff               or edx, 0xffffffff
// 006fef58  f00fc111             lock xadd dword ptr [ecx], edx
// 006fef5c  7509                 jne 0x6fef67
// 006fef5e  8b06                 mov eax, dword ptr [esi]
// 006fef60  8b5008               mov edx, dword ptr [eax + 8]
// 006fef63  8bce                 mov ecx, esi
// 006fef65  ffd2                 call edx
// 006fef67  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006fef6b  c70798beaa00         mov dword ptr [edi], 0xaabe98
// 006fef71  5f                   pop edi
// 006fef72  5e                   pop esi
// 006fef73  64890d00000000       mov dword ptr fs:[0], ecx
// 006fef7a  83c410               add esp, 0x10
// 006fef7d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

// roc 2011-06 005934f0  unit: VAuthoringSettings::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005934f0
//
// 005934f0  6aff                 push -1
// 005934f2  68f8079e00           push 0x9e07f8
// 005934f7  64a100000000         mov eax, dword ptr fs:[0]
// 005934fd  50                   push eax
// 005934fe  64892500000000       mov dword ptr fs:[0], esp
// 00593505  51                   push ecx
// 00593506  56                   push esi
// 00593507  57                   push edi
// 00593508  8bf9                 mov edi, ecx
// 0059350a  897c2408             mov dword ptr [esp + 8], edi
// 0059350e  8b7708               mov esi, dword ptr [edi + 8]
// 00593511  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00593519  85f6                 test esi, esi
// 0059351b  742a                 je 0x593547
// 0059351d  8d4604               lea eax, [esi + 4]
// 00593520  83c9ff               or ecx, 0xffffffff
// 00593523  f00fc108             lock xadd dword ptr [eax], ecx
// 00593527  751e                 jne 0x593547
// 00593529  8b16                 mov edx, dword ptr [esi]
// 0059352b  8b4204               mov eax, dword ptr [edx + 4]
// 0059352e  8bce                 mov ecx, esi
// 00593530  ffd0                 call eax
// 00593532  8d4e08               lea ecx, [esi + 8]
// 00593535  83caff               or edx, 0xffffffff
// 00593538  f00fc111             lock xadd dword ptr [ecx], edx
// 0059353c  7509                 jne 0x593547
// 0059353e  8b06                 mov eax, dword ptr [esi]
// 00593540  8b5008               mov edx, dword ptr [eax + 8]
// 00593543  8bce                 mov ecx, esi
// 00593545  ffd2                 call edx
// 00593547  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059354b  c707f8bea500         mov dword ptr [edi], 0xa5bef8
// 00593551  5f                   pop edi
// 00593552  5e                   pop esi
// 00593553  64890d00000000       mov dword ptr fs:[0], ecx
// 0059355a  83c410               add esp, 0x10
// 0059355d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

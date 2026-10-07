// roc 2012-06 0086d6a0  unit: RBX::CollectionService  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086d6a0
//
// 0086d6a0  6aff                 push -1
// 0086d6a2  68e8f5ac00           push 0xacf5e8
// 0086d6a7  64a100000000         mov eax, dword ptr fs:[0]
// 0086d6ad  50                   push eax
// 0086d6ae  64892500000000       mov dword ptr fs:[0], esp
// 0086d6b5  51                   push ecx
// 0086d6b6  56                   push esi
// 0086d6b7  57                   push edi
// 0086d6b8  8bf9                 mov edi, ecx
// 0086d6ba  897c2408             mov dword ptr [esp + 8], edi
// 0086d6be  8b7708               mov esi, dword ptr [edi + 8]
// 0086d6c1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0086d6c9  85f6                 test esi, esi
// 0086d6cb  742a                 je 0x86d6f7
// 0086d6cd  8d4604               lea eax, [esi + 4]
// 0086d6d0  83c9ff               or ecx, 0xffffffff
// 0086d6d3  f00fc108             lock xadd dword ptr [eax], ecx
// 0086d6d7  751e                 jne 0x86d6f7
// 0086d6d9  8b16                 mov edx, dword ptr [esi]
// 0086d6db  8b4204               mov eax, dword ptr [edx + 4]
// 0086d6de  8bce                 mov ecx, esi
// 0086d6e0  ffd0                 call eax
// 0086d6e2  8d4e08               lea ecx, [esi + 8]
// 0086d6e5  83caff               or edx, 0xffffffff
// 0086d6e8  f00fc111             lock xadd dword ptr [ecx], edx
// 0086d6ec  7509                 jne 0x86d6f7
// 0086d6ee  8b06                 mov eax, dword ptr [esi]
// 0086d6f0  8b5008               mov edx, dword ptr [eax + 8]
// 0086d6f3  8bce                 mov ecx, esi
// 0086d6f5  ffd2                 call edx
// 0086d6f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086d6fb  c707203abc00         mov dword ptr [edi], 0xbc3a20
// 0086d701  5f                   pop edi
// 0086d702  5e                   pop esi
// 0086d703  64890d00000000       mov dword ptr fs:[0], ecx
// 0086d70a  83c410               add esp, 0x10
// 0086d70d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

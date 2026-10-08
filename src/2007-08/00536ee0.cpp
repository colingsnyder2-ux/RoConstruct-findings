// roc 2007-08 00536ee0  unit: boost::any::placeholder  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00536ee0
//
// 00536ee0  6aff                 push -1
// 00536ee2  68e80a7500           push 0x750ae8
// 00536ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00536eed  50                   push eax
// 00536eee  64892500000000       mov dword ptr fs:[0], esp
// 00536ef5  51                   push ecx
// 00536ef6  56                   push esi
// 00536ef7  57                   push edi
// 00536ef8  8bf9                 mov edi, ecx
// 00536efa  897c2408             mov dword ptr [esp + 8], edi
// 00536efe  8b7708               mov esi, dword ptr [edi + 8]
// 00536f01  85f6                 test esi, esi
// 00536f03  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00536f0b  742a                 je 0x536f37
// 00536f0d  8d4604               lea eax, [esi + 4]
// 00536f10  83c9ff               or ecx, 0xffffffff
// 00536f13  f00fc108             lock xadd dword ptr [eax], ecx
// 00536f17  751e                 jne 0x536f37
// 00536f19  8b16                 mov edx, dword ptr [esi]
// 00536f1b  8b4204               mov eax, dword ptr [edx + 4]
// 00536f1e  8bce                 mov ecx, esi
// 00536f20  ffd0                 call eax
// 00536f22  8d4e08               lea ecx, [esi + 8]
// 00536f25  83caff               or edx, 0xffffffff
// 00536f28  f00fc111             lock xadd dword ptr [ecx], edx
// 00536f2c  7509                 jne 0x536f37
// 00536f2e  8b06                 mov eax, dword ptr [esi]
// 00536f30  8b5008               mov edx, dword ptr [eax + 8]
// 00536f33  8bce                 mov ecx, esi
// 00536f35  ffd2                 call edx
// 00536f37  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00536f3b  c70784cc7900         mov dword ptr [edi], 0x79cc84
// 00536f41  5f                   pop edi
// 00536f42  5e                   pop esi
// 00536f43  64890d00000000       mov dword ptr fs:[0], ecx
// 00536f4a  83c410               add esp, 0x10
// 00536f4d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

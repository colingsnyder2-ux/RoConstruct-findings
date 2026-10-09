// roc 2009-12 00703760  unit: std::D::DU?$char_traits::V?$basic_string::$$CBV?$map::V?$shared_ptr::?$holder  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00703760
//
// 00703760  6aff                 push -1
// 00703762  6888989300           push 0x939888
// 00703767  64a100000000         mov eax, dword ptr fs:[0]
// 0070376d  50                   push eax
// 0070376e  64892500000000       mov dword ptr fs:[0], esp
// 00703775  51                   push ecx
// 00703776  56                   push esi
// 00703777  57                   push edi
// 00703778  8bf9                 mov edi, ecx
// 0070377a  897c2408             mov dword ptr [esp + 8], edi
// 0070377e  8b7708               mov esi, dword ptr [edi + 8]
// 00703781  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00703789  85f6                 test esi, esi
// 0070378b  742a                 je 0x7037b7
// 0070378d  8d4604               lea eax, [esi + 4]
// 00703790  83c9ff               or ecx, 0xffffffff
// 00703793  f00fc108             lock xadd dword ptr [eax], ecx
// 00703797  751e                 jne 0x7037b7
// 00703799  8b16                 mov edx, dword ptr [esi]
// 0070379b  8b4204               mov eax, dword ptr [edx + 4]
// 0070379e  8bce                 mov ecx, esi
// 007037a0  ffd0                 call eax
// 007037a2  8d4e08               lea ecx, [esi + 8]
// 007037a5  83caff               or edx, 0xffffffff
// 007037a8  f00fc111             lock xadd dword ptr [ecx], edx
// 007037ac  7509                 jne 0x7037b7
// 007037ae  8b06                 mov eax, dword ptr [esi]
// 007037b0  8b5008               mov edx, dword ptr [eax + 8]
// 007037b3  8bce                 mov ecx, esi
// 007037b5  ffd2                 call edx
// 007037b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007037bb  c70784fe9900         mov dword ptr [edi], 0x99fe84
// 007037c1  5f                   pop edi
// 007037c2  5e                   pop esi
// 007037c3  64890d00000000       mov dword ptr fs:[0], ecx
// 007037ca  83c410               add esp, 0x10
// 007037cd  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

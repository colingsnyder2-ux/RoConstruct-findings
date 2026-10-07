// roc 2012-06 0067fc20  unit: VAuthoringSettings::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0067fc20
//
// 0067fc20  6aff                 push -1
// 0067fc22  680861ab00           push 0xab6108
// 0067fc27  64a100000000         mov eax, dword ptr fs:[0]
// 0067fc2d  50                   push eax
// 0067fc2e  64892500000000       mov dword ptr fs:[0], esp
// 0067fc35  51                   push ecx
// 0067fc36  56                   push esi
// 0067fc37  57                   push edi
// 0067fc38  8bf9                 mov edi, ecx
// 0067fc3a  897c2408             mov dword ptr [esp + 8], edi
// 0067fc3e  8b7708               mov esi, dword ptr [edi + 8]
// 0067fc41  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0067fc49  85f6                 test esi, esi
// 0067fc4b  742a                 je 0x67fc77
// 0067fc4d  8d4604               lea eax, [esi + 4]
// 0067fc50  83c9ff               or ecx, 0xffffffff
// 0067fc53  f00fc108             lock xadd dword ptr [eax], ecx
// 0067fc57  751e                 jne 0x67fc77
// 0067fc59  8b16                 mov edx, dword ptr [esi]
// 0067fc5b  8b4204               mov eax, dword ptr [edx + 4]
// 0067fc5e  8bce                 mov ecx, esi
// 0067fc60  ffd0                 call eax
// 0067fc62  8d4e08               lea ecx, [esi + 8]
// 0067fc65  83caff               or edx, 0xffffffff
// 0067fc68  f00fc111             lock xadd dword ptr [ecx], edx
// 0067fc6c  7509                 jne 0x67fc77
// 0067fc6e  8b06                 mov eax, dword ptr [esi]
// 0067fc70  8b5008               mov edx, dword ptr [eax + 8]
// 0067fc73  8bce                 mov ecx, esi
// 0067fc75  ffd2                 call edx
// 0067fc77  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067fc7b  c707443cb400         mov dword ptr [edi], 0xb43c44
// 0067fc81  5f                   pop edi
// 0067fc82  5e                   pop esi
// 0067fc83  64890d00000000       mov dword ptr fs:[0], ecx
// 0067fc8a  83c410               add esp, 0x10
// 0067fc8d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

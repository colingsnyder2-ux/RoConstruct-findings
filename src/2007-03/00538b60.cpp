// roc 2007-03 00538b60  unit: seg_00530000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00538b60
//
// 00538b60  6aff                 push -1
// 00538b62  68881a7500           push 0x751a88
// 00538b67  64a100000000         mov eax, dword ptr fs:[0]
// 00538b6d  50                   push eax
// 00538b6e  64892500000000       mov dword ptr fs:[0], esp
// 00538b75  51                   push ecx
// 00538b76  56                   push esi
// 00538b77  57                   push edi
// 00538b78  8bf9                 mov edi, ecx
// 00538b7a  897c2408             mov dword ptr [esp + 8], edi
// 00538b7e  8b7708               mov esi, dword ptr [edi + 8]
// 00538b81  85f6                 test esi, esi
// 00538b83  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00538b8b  742a                 je 0x538bb7
// 00538b8d  8d4604               lea eax, [esi + 4]
// 00538b90  83c9ff               or ecx, 0xffffffff
// 00538b93  f00fc108             lock xadd dword ptr [eax], ecx
// 00538b97  751e                 jne 0x538bb7
// 00538b99  8b16                 mov edx, dword ptr [esi]
// 00538b9b  8b4204               mov eax, dword ptr [edx + 4]
// 00538b9e  8bce                 mov ecx, esi
// 00538ba0  ffd0                 call eax
// 00538ba2  8d4e08               lea ecx, [esi + 8]
// 00538ba5  83caff               or edx, 0xffffffff
// 00538ba8  f00fc111             lock xadd dword ptr [ecx], edx
// 00538bac  7509                 jne 0x538bb7
// 00538bae  8b06                 mov eax, dword ptr [esi]
// 00538bb0  8b5008               mov edx, dword ptr [eax + 8]
// 00538bb3  8bce                 mov ecx, esi
// 00538bb5  ffd2                 call edx
// 00538bb7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00538bbb  c7076cbb7900         mov dword ptr [edi], 0x79bb6c
// 00538bc1  5f                   pop edi
// 00538bc2  5e                   pop esi
// 00538bc3  64890d00000000       mov dword ptr fs:[0], ecx
// 00538bca  83c410               add esp, 0x10
// 00538bcd  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

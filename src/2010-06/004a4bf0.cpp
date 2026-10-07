// roc 2010-06 004a4bf0  unit: boost::any::placeholder  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a4bf0
//
// 004a4bf0  6aff                 push -1
// 004a4bf2  6868a09900           push 0x99a068
// 004a4bf7  64a100000000         mov eax, dword ptr fs:[0]
// 004a4bfd  50                   push eax
// 004a4bfe  64892500000000       mov dword ptr fs:[0], esp
// 004a4c05  51                   push ecx
// 004a4c06  56                   push esi
// 004a4c07  57                   push edi
// 004a4c08  8bf9                 mov edi, ecx
// 004a4c0a  897c2408             mov dword ptr [esp + 8], edi
// 004a4c0e  8b7708               mov esi, dword ptr [edi + 8]
// 004a4c11  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004a4c19  85f6                 test esi, esi
// 004a4c1b  742a                 je 0x4a4c47
// 004a4c1d  8d4604               lea eax, [esi + 4]
// 004a4c20  83c9ff               or ecx, 0xffffffff
// 004a4c23  f00fc108             lock xadd dword ptr [eax], ecx
// 004a4c27  751e                 jne 0x4a4c47
// 004a4c29  8b16                 mov edx, dword ptr [esi]
// 004a4c2b  8b4204               mov eax, dword ptr [edx + 4]
// 004a4c2e  8bce                 mov ecx, esi
// 004a4c30  ffd0                 call eax
// 004a4c32  8d4e08               lea ecx, [esi + 8]
// 004a4c35  83caff               or edx, 0xffffffff
// 004a4c38  f00fc111             lock xadd dword ptr [ecx], edx
// 004a4c3c  7509                 jne 0x4a4c47
// 004a4c3e  8b06                 mov eax, dword ptr [esi]
// 004a4c40  8b5008               mov edx, dword ptr [eax + 8]
// 004a4c43  8bce                 mov ecx, esi
// 004a4c45  ffd2                 call edx
// 004a4c47  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a4c4b  c7073c0aa000         mov dword ptr [edi], 0xa00a3c
// 004a4c51  5f                   pop edi
// 004a4c52  5e                   pop esi
// 004a4c53  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4c5a  83c410               add esp, 0x10
// 004a4c5d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

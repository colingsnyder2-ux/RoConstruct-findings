// roc 2011-06 004a5c40  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a5c40
//
// 004a5c40  6aff                 push -1
// 004a5c42  68a82b9e00           push 0x9e2ba8
// 004a5c47  64a100000000         mov eax, dword ptr fs:[0]
// 004a5c4d  50                   push eax
// 004a5c4e  64892500000000       mov dword ptr fs:[0], esp
// 004a5c55  51                   push ecx
// 004a5c56  56                   push esi
// 004a5c57  57                   push edi
// 004a5c58  8bf9                 mov edi, ecx
// 004a5c5a  897c2408             mov dword ptr [esp + 8], edi
// 004a5c5e  8b7708               mov esi, dword ptr [edi + 8]
// 004a5c61  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004a5c69  85f6                 test esi, esi
// 004a5c6b  742a                 je 0x4a5c97
// 004a5c6d  8d4604               lea eax, [esi + 4]
// 004a5c70  83c9ff               or ecx, 0xffffffff
// 004a5c73  f00fc108             lock xadd dword ptr [eax], ecx
// 004a5c77  751e                 jne 0x4a5c97
// 004a5c79  8b16                 mov edx, dword ptr [esi]
// 004a5c7b  8b4204               mov eax, dword ptr [edx + 4]
// 004a5c7e  8bce                 mov ecx, esi
// 004a5c80  ffd0                 call eax
// 004a5c82  8d4e08               lea ecx, [esi + 8]
// 004a5c85  83caff               or edx, 0xffffffff
// 004a5c88  f00fc111             lock xadd dword ptr [ecx], edx
// 004a5c8c  7509                 jne 0x4a5c97
// 004a5c8e  8b06                 mov eax, dword ptr [esi]
// 004a5c90  8b5008               mov edx, dword ptr [eax + 8]
// 004a5c93  8bce                 mov ecx, esi
// 004a5c95  ffd2                 call edx
// 004a5c97  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a5c9b  c707f4c0a500         mov dword ptr [edi], 0xa5c0f4
// 004a5ca1  5f                   pop edi
// 004a5ca2  5e                   pop esi
// 004a5ca3  64890d00000000       mov dword ptr fs:[0], ecx
// 004a5caa  83c410               add esp, 0x10
// 004a5cad  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

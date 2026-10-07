// roc 2011-06 0043aa30  unit: AsyncResult  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043aa30
//
// 0043aa30  6aff                 push -1
// 0043aa32  6838099d00           push 0x9d0938
// 0043aa37  64a100000000         mov eax, dword ptr fs:[0]
// 0043aa3d  50                   push eax
// 0043aa3e  64892500000000       mov dword ptr fs:[0], esp
// 0043aa45  51                   push ecx
// 0043aa46  56                   push esi
// 0043aa47  57                   push edi
// 0043aa48  8bf9                 mov edi, ecx
// 0043aa4a  897c2408             mov dword ptr [esp + 8], edi
// 0043aa4e  8b7708               mov esi, dword ptr [edi + 8]
// 0043aa51  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0043aa59  85f6                 test esi, esi
// 0043aa5b  742a                 je 0x43aa87
// 0043aa5d  8d4604               lea eax, [esi + 4]
// 0043aa60  83c9ff               or ecx, 0xffffffff
// 0043aa63  f00fc108             lock xadd dword ptr [eax], ecx
// 0043aa67  751e                 jne 0x43aa87
// 0043aa69  8b16                 mov edx, dword ptr [esi]
// 0043aa6b  8b4204               mov eax, dword ptr [edx + 4]
// 0043aa6e  8bce                 mov ecx, esi
// 0043aa70  ffd0                 call eax
// 0043aa72  8d4e08               lea ecx, [esi + 8]
// 0043aa75  83caff               or edx, 0xffffffff
// 0043aa78  f00fc111             lock xadd dword ptr [ecx], edx
// 0043aa7c  7509                 jne 0x43aa87
// 0043aa7e  8b06                 mov eax, dword ptr [esi]
// 0043aa80  8b5008               mov edx, dword ptr [eax + 8]
// 0043aa83  8bce                 mov ecx, esi
// 0043aa85  ffd2                 call edx
// 0043aa87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043aa8b  c707c076a600         mov dword ptr [edi], 0xa676c0
// 0043aa91  5f                   pop edi
// 0043aa92  5e                   pop esi
// 0043aa93  64890d00000000       mov dword ptr fs:[0], ecx
// 0043aa9a  83c410               add esp, 0x10
// 0043aa9d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

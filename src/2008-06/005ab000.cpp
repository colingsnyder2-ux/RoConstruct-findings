// roc 2008-06 005ab000  unit: RBX::VScriptContext::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab000
//
// 005ab000  6aff                 push -1
// 005ab002  6848317d00           push 0x7d3148
// 005ab007  64a100000000         mov eax, dword ptr fs:[0]
// 005ab00d  50                   push eax
// 005ab00e  64892500000000       mov dword ptr fs:[0], esp
// 005ab015  51                   push ecx
// 005ab016  56                   push esi
// 005ab017  57                   push edi
// 005ab018  8bf9                 mov edi, ecx
// 005ab01a  897c2408             mov dword ptr [esp + 8], edi
// 005ab01e  8b7708               mov esi, dword ptr [edi + 8]
// 005ab021  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ab029  85f6                 test esi, esi
// 005ab02b  742a                 je 0x5ab057
// 005ab02d  8d4604               lea eax, [esi + 4]
// 005ab030  83c9ff               or ecx, 0xffffffff
// 005ab033  f00fc108             lock xadd dword ptr [eax], ecx
// 005ab037  751e                 jne 0x5ab057
// 005ab039  8b16                 mov edx, dword ptr [esi]
// 005ab03b  8b4204               mov eax, dword ptr [edx + 4]
// 005ab03e  8bce                 mov ecx, esi
// 005ab040  ffd0                 call eax
// 005ab042  8d4e08               lea ecx, [esi + 8]
// 005ab045  83caff               or edx, 0xffffffff
// 005ab048  f00fc111             lock xadd dword ptr [ecx], edx
// 005ab04c  7509                 jne 0x5ab057
// 005ab04e  8b06                 mov eax, dword ptr [esi]
// 005ab050  8b5008               mov edx, dword ptr [eax + 8]
// 005ab053  8bce                 mov ecx, esi
// 005ab055  ffd2                 call edx
// 005ab057  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ab05b  c707e4658200         mov dword ptr [edi], 0x8265e4
// 005ab061  5f                   pop edi
// 005ab062  5e                   pop esi
// 005ab063  64890d00000000       mov dword ptr fs:[0], ecx
// 005ab06a  83c410               add esp, 0x10
// 005ab06d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

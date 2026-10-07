// roc 2012-06 004462d0  unit: RBX::Lua::IAsyncResult  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004462d0
//
// 004462d0  6aff                 push -1
// 004462d2  68c8dda900           push 0xa9ddc8
// 004462d7  64a100000000         mov eax, dword ptr fs:[0]
// 004462dd  50                   push eax
// 004462de  64892500000000       mov dword ptr fs:[0], esp
// 004462e5  51                   push ecx
// 004462e6  56                   push esi
// 004462e7  57                   push edi
// 004462e8  8bf9                 mov edi, ecx
// 004462ea  897c2408             mov dword ptr [esp + 8], edi
// 004462ee  8b7708               mov esi, dword ptr [edi + 8]
// 004462f1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004462f9  85f6                 test esi, esi
// 004462fb  742a                 je 0x446327
// 004462fd  8d4604               lea eax, [esi + 4]
// 00446300  83c9ff               or ecx, 0xffffffff
// 00446303  f00fc108             lock xadd dword ptr [eax], ecx
// 00446307  751e                 jne 0x446327
// 00446309  8b16                 mov edx, dword ptr [esi]
// 0044630b  8b4204               mov eax, dword ptr [edx + 4]
// 0044630e  8bce                 mov ecx, esi
// 00446310  ffd0                 call eax
// 00446312  8d4e08               lea ecx, [esi + 8]
// 00446315  83caff               or edx, 0xffffffff
// 00446318  f00fc111             lock xadd dword ptr [ecx], edx
// 0044631c  7509                 jne 0x446327
// 0044631e  8b06                 mov eax, dword ptr [esi]
// 00446320  8b5008               mov edx, dword ptr [eax + 8]
// 00446323  8bce                 mov ecx, esi
// 00446325  ffd2                 call edx
// 00446327  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044632b  c707f81bb500         mov dword ptr [edi], 0xb51bf8
// 00446331  5f                   pop edi
// 00446332  5e                   pop esi
// 00446333  64890d00000000       mov dword ptr fs:[0], ecx
// 0044633a  83c410               add esp, 0x10
// 0044633d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

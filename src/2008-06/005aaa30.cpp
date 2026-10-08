// roc 2008-06 005aaa30  unit: RBX::VScriptContext::?$FactoryProduct  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aaa30
//
// 005aaa30  a130979400           mov eax, dword ptr [0x949730]
// 005aaa35  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005aaa39  56                   push esi
// 005aaa3a  50                   push eax
// 005aaa3b  6a01                 push 1
// 005aaa3d  51                   push ecx
// 005aaa3e  e86d6b0600           call 0x6115b0
// 005aaa43  8b7004               mov esi, dword ptr [eax + 4]
// 005aaa46  83c004               add eax, 4
// 005aaa49  83c40c               add esp, 0xc
// 005aaa4c  85f6                 test esi, esi
// 005aaa4e  742a                 je 0x5aaa7a
// 005aaa50  8d5604               lea edx, [esi + 4]
// 005aaa53  83c8ff               or eax, 0xffffffff
// 005aaa56  f00fc102             lock xadd dword ptr [edx], eax
// 005aaa5a  751e                 jne 0x5aaa7a
// 005aaa5c  8b16                 mov edx, dword ptr [esi]
// 005aaa5e  8b4204               mov eax, dword ptr [edx + 4]
// 005aaa61  8bce                 mov ecx, esi
// 005aaa63  ffd0                 call eax
// 005aaa65  8d4e08               lea ecx, [esi + 8]
// 005aaa68  83caff               or edx, 0xffffffff
// 005aaa6b  f00fc111             lock xadd dword ptr [ecx], edx
// 005aaa6f  7509                 jne 0x5aaa7a
// 005aaa71  8b06                 mov eax, dword ptr [esi]
// 005aaa73  8b5008               mov edx, dword ptr [eax + 8]
// 005aaa76  8bce                 mov ecx, esi
// 005aaa78  ffd2                 call edx
// 005aaa7a  33c0                 xor eax, eax
// 005aaa7c  5e                   pop esi
// 005aaa7d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

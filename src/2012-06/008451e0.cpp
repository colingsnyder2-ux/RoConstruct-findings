// roc 2012-06 008451e0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008451e0
//
// 008451e0  a15c9eda00           mov eax, dword ptr [0xda9e5c]
// 008451e5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008451e9  56                   push esi
// 008451ea  50                   push eax
// 008451eb  6a01                 push 1
// 008451ed  51                   push ecx
// 008451ee  e81de6feff           call 0x833810
// 008451f3  8b7004               mov esi, dword ptr [eax + 4]
// 008451f6  83c004               add eax, 4
// 008451f9  83c40c               add esp, 0xc
// 008451fc  85f6                 test esi, esi
// 008451fe  742a                 je 0x84522a
// 00845200  8d5604               lea edx, [esi + 4]
// 00845203  83c8ff               or eax, 0xffffffff
// 00845206  f00fc102             lock xadd dword ptr [edx], eax
// 0084520a  751e                 jne 0x84522a
// 0084520c  8b16                 mov edx, dword ptr [esi]
// 0084520e  8b4204               mov eax, dword ptr [edx + 4]
// 00845211  8bce                 mov ecx, esi
// 00845213  ffd0                 call eax
// 00845215  8d4e08               lea ecx, [esi + 8]
// 00845218  83caff               or edx, 0xffffffff
// 0084521b  f00fc111             lock xadd dword ptr [ecx], edx
// 0084521f  7509                 jne 0x84522a
// 00845221  8b06                 mov eax, dword ptr [esi]
// 00845223  8b5008               mov edx, dword ptr [eax + 8]
// 00845226  8bce                 mov ecx, esi
// 00845228  ffd2                 call edx
// 0084522a  33c0                 xor eax, eax
// 0084522c  5e                   pop esi
// 0084522d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

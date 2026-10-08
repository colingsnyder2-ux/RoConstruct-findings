// roc 2009-06 00635da0  unit: RBX::Lua::VFunctionRef::?$holder  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00635da0
//
// 00635da0  a1a428a200           mov eax, dword ptr [0xa228a4]
// 00635da5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00635da9  56                   push esi
// 00635daa  50                   push eax
// 00635dab  6a01                 push 1
// 00635dad  51                   push ecx
// 00635dae  e8fd4d0800           call 0x6babb0
// 00635db3  8b7004               mov esi, dword ptr [eax + 4]
// 00635db6  83c004               add eax, 4
// 00635db9  83c40c               add esp, 0xc
// 00635dbc  85f6                 test esi, esi
// 00635dbe  742a                 je 0x635dea
// 00635dc0  8d5604               lea edx, [esi + 4]
// 00635dc3  83c8ff               or eax, 0xffffffff
// 00635dc6  f00fc102             lock xadd dword ptr [edx], eax
// 00635dca  751e                 jne 0x635dea
// 00635dcc  8b16                 mov edx, dword ptr [esi]
// 00635dce  8b4204               mov eax, dword ptr [edx + 4]
// 00635dd1  8bce                 mov ecx, esi
// 00635dd3  ffd0                 call eax
// 00635dd5  8d4e08               lea ecx, [esi + 8]
// 00635dd8  83caff               or edx, 0xffffffff
// 00635ddb  f00fc111             lock xadd dword ptr [ecx], edx
// 00635ddf  7509                 jne 0x635dea
// 00635de1  8b06                 mov eax, dword ptr [esi]
// 00635de3  8b5008               mov edx, dword ptr [eax + 8]
// 00635de6  8bce                 mov ecx, esi
// 00635de8  ffd2                 call edx
// 00635dea  33c0                 xor eax, eax
// 00635dec  5e                   pop esi
// 00635ded  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

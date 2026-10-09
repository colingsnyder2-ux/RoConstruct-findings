// roc 2009-12 006a31f0  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a31f0
//
// 006a31f0  a1cc24b600           mov eax, dword ptr [0xb624cc]
// 006a31f5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a31f9  56                   push esi
// 006a31fa  50                   push eax
// 006a31fb  6a01                 push 1
// 006a31fd  51                   push ecx
// 006a31fe  e85d740e00           call 0x78a660
// 006a3203  8b7004               mov esi, dword ptr [eax + 4]
// 006a3206  83c004               add eax, 4
// 006a3209  83c40c               add esp, 0xc
// 006a320c  85f6                 test esi, esi
// 006a320e  742a                 je 0x6a323a
// 006a3210  8d5604               lea edx, [esi + 4]
// 006a3213  83c8ff               or eax, 0xffffffff
// 006a3216  f00fc102             lock xadd dword ptr [edx], eax
// 006a321a  751e                 jne 0x6a323a
// 006a321c  8b16                 mov edx, dword ptr [esi]
// 006a321e  8b4204               mov eax, dword ptr [edx + 4]
// 006a3221  8bce                 mov ecx, esi
// 006a3223  ffd0                 call eax
// 006a3225  8d4e08               lea ecx, [esi + 8]
// 006a3228  83caff               or edx, 0xffffffff
// 006a322b  f00fc111             lock xadd dword ptr [ecx], edx
// 006a322f  7509                 jne 0x6a323a
// 006a3231  8b06                 mov eax, dword ptr [esi]
// 006a3233  8b5008               mov edx, dword ptr [eax + 8]
// 006a3236  8bce                 mov ecx, esi
// 006a3238  ffd2                 call edx
// 006a323a  33c0                 xor eax, eax
// 006a323c  5e                   pop esi
// 006a323d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

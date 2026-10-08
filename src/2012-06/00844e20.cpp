// roc 2012-06 00844e20  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00844e20
//
// 00844e20  a17c0ede00           mov eax, dword ptr [0xde0e7c]
// 00844e25  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00844e29  56                   push esi
// 00844e2a  50                   push eax
// 00844e2b  6a01                 push 1
// 00844e2d  51                   push ecx
// 00844e2e  e8dde9feff           call 0x833810
// 00844e33  8b7004               mov esi, dword ptr [eax + 4]
// 00844e36  83c004               add eax, 4
// 00844e39  83c40c               add esp, 0xc
// 00844e3c  85f6                 test esi, esi
// 00844e3e  742a                 je 0x844e6a
// 00844e40  8d5604               lea edx, [esi + 4]
// 00844e43  83c8ff               or eax, 0xffffffff
// 00844e46  f00fc102             lock xadd dword ptr [edx], eax
// 00844e4a  751e                 jne 0x844e6a
// 00844e4c  8b16                 mov edx, dword ptr [esi]
// 00844e4e  8b4204               mov eax, dword ptr [edx + 4]
// 00844e51  8bce                 mov ecx, esi
// 00844e53  ffd0                 call eax
// 00844e55  8d4e08               lea ecx, [esi + 8]
// 00844e58  83caff               or edx, 0xffffffff
// 00844e5b  f00fc111             lock xadd dword ptr [ecx], edx
// 00844e5f  7509                 jne 0x844e6a
// 00844e61  8b06                 mov eax, dword ptr [esi]
// 00844e63  8b5008               mov edx, dword ptr [eax + 8]
// 00844e66  8bce                 mov ecx, esi
// 00844e68  ffd2                 call edx
// 00844e6a  33c0                 xor eax, eax
// 00844e6c  5e                   pop esi
// 00844e6d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

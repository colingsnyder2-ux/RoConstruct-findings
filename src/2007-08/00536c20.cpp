// roc 2007-08 00536c20  unit: boost::any::placeholder  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00536c20
//
// 00536c20  a188be8a00           mov eax, dword ptr [0x8abe88]
// 00536c25  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00536c29  56                   push esi
// 00536c2a  50                   push eax
// 00536c2b  6a01                 push 1
// 00536c2d  51                   push ecx
// 00536c2e  e80d860800           call 0x5bf240
// 00536c33  8b7004               mov esi, dword ptr [eax + 4]
// 00536c36  83c004               add eax, 4
// 00536c39  83c40c               add esp, 0xc
// 00536c3c  85f6                 test esi, esi
// 00536c3e  742a                 je 0x536c6a
// 00536c40  8d5604               lea edx, [esi + 4]
// 00536c43  83c8ff               or eax, 0xffffffff
// 00536c46  f00fc102             lock xadd dword ptr [edx], eax
// 00536c4a  751e                 jne 0x536c6a
// 00536c4c  8b16                 mov edx, dword ptr [esi]
// 00536c4e  8b4204               mov eax, dword ptr [edx + 4]
// 00536c51  8bce                 mov ecx, esi
// 00536c53  ffd0                 call eax
// 00536c55  8d4e08               lea ecx, [esi + 8]
// 00536c58  83caff               or edx, 0xffffffff
// 00536c5b  f00fc111             lock xadd dword ptr [ecx], edx
// 00536c5f  7509                 jne 0x536c6a
// 00536c61  8b06                 mov eax, dword ptr [esi]
// 00536c63  8b5008               mov edx, dword ptr [eax + 8]
// 00536c66  8bce                 mov ecx, esi
// 00536c68  ffd2                 call edx
// 00536c6a  33c0                 xor eax, eax
// 00536c6c  5e                   pop esi
// 00536c6d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

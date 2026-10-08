// roc 2007-08 00536bd0  unit: boost::any::placeholder  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00536bd0
//
// 00536bd0  a12cbc8a00           mov eax, dword ptr [0x8abc2c]
// 00536bd5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00536bd9  56                   push esi
// 00536bda  50                   push eax
// 00536bdb  6a01                 push 1
// 00536bdd  51                   push ecx
// 00536bde  e85d860800           call 0x5bf240
// 00536be3  8b7004               mov esi, dword ptr [eax + 4]
// 00536be6  83c004               add eax, 4
// 00536be9  83c40c               add esp, 0xc
// 00536bec  85f6                 test esi, esi
// 00536bee  742a                 je 0x536c1a
// 00536bf0  8d5604               lea edx, [esi + 4]
// 00536bf3  83c8ff               or eax, 0xffffffff
// 00536bf6  f00fc102             lock xadd dword ptr [edx], eax
// 00536bfa  751e                 jne 0x536c1a
// 00536bfc  8b16                 mov edx, dword ptr [esi]
// 00536bfe  8b4204               mov eax, dword ptr [edx + 4]
// 00536c01  8bce                 mov ecx, esi
// 00536c03  ffd0                 call eax
// 00536c05  8d4e08               lea ecx, [esi + 8]
// 00536c08  83caff               or edx, 0xffffffff
// 00536c0b  f00fc111             lock xadd dword ptr [ecx], edx
// 00536c0f  7509                 jne 0x536c1a
// 00536c11  8b06                 mov eax, dword ptr [esi]
// 00536c13  8b5008               mov edx, dword ptr [eax + 8]
// 00536c16  8bce                 mov ecx, esi
// 00536c18  ffd2                 call edx
// 00536c1a  33c0                 xor eax, eax
// 00536c1c  5e                   pop esi
// 00536c1d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

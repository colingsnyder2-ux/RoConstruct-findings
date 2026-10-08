// roc 2007-03 005386a0  unit: seg_00530000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005386a0
//
// 005386a0  a108e48900           mov eax, dword ptr [0x89e408]
// 005386a5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005386a9  56                   push esi
// 005386aa  50                   push eax
// 005386ab  6a01                 push 1
// 005386ad  51                   push ecx
// 005386ae  e8fd1d0800           call 0x5ba4b0
// 005386b3  8b7004               mov esi, dword ptr [eax + 4]
// 005386b6  83c004               add eax, 4
// 005386b9  83c40c               add esp, 0xc
// 005386bc  85f6                 test esi, esi
// 005386be  742a                 je 0x5386ea
// 005386c0  8d5604               lea edx, [esi + 4]
// 005386c3  83c8ff               or eax, 0xffffffff
// 005386c6  f00fc102             lock xadd dword ptr [edx], eax
// 005386ca  751e                 jne 0x5386ea
// 005386cc  8b16                 mov edx, dword ptr [esi]
// 005386ce  8b4204               mov eax, dword ptr [edx + 4]
// 005386d1  8bce                 mov ecx, esi
// 005386d3  ffd0                 call eax
// 005386d5  8d4e08               lea ecx, [esi + 8]
// 005386d8  83caff               or edx, 0xffffffff
// 005386db  f00fc111             lock xadd dword ptr [ecx], edx
// 005386df  7509                 jne 0x5386ea
// 005386e1  8b06                 mov eax, dword ptr [esi]
// 005386e3  8b5008               mov edx, dword ptr [eax + 8]
// 005386e6  8bce                 mov ecx, esi
// 005386e8  ffd2                 call edx
// 005386ea  33c0                 xor eax, eax
// 005386ec  5e                   pop esi
// 005386ed  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

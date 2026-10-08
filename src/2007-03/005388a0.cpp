// roc 2007-03 005388a0  unit: seg_00530000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005388a0
//
// 005388a0  a158828a00           mov eax, dword ptr [0x8a8258]
// 005388a5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005388a9  56                   push esi
// 005388aa  50                   push eax
// 005388ab  6a01                 push 1
// 005388ad  51                   push ecx
// 005388ae  e8fd1b0800           call 0x5ba4b0
// 005388b3  8b7004               mov esi, dword ptr [eax + 4]
// 005388b6  83c004               add eax, 4
// 005388b9  83c40c               add esp, 0xc
// 005388bc  85f6                 test esi, esi
// 005388be  742a                 je 0x5388ea
// 005388c0  8d5604               lea edx, [esi + 4]
// 005388c3  83c8ff               or eax, 0xffffffff
// 005388c6  f00fc102             lock xadd dword ptr [edx], eax
// 005388ca  751e                 jne 0x5388ea
// 005388cc  8b16                 mov edx, dword ptr [esi]
// 005388ce  8b4204               mov eax, dword ptr [edx + 4]
// 005388d1  8bce                 mov ecx, esi
// 005388d3  ffd0                 call eax
// 005388d5  8d4e08               lea ecx, [esi + 8]
// 005388d8  83caff               or edx, 0xffffffff
// 005388db  f00fc111             lock xadd dword ptr [ecx], edx
// 005388df  7509                 jne 0x5388ea
// 005388e1  8b06                 mov eax, dword ptr [esi]
// 005388e3  8b5008               mov edx, dword ptr [eax + 8]
// 005388e6  8bce                 mov ecx, esi
// 005388e8  ffd2                 call edx
// 005388ea  33c0                 xor eax, eax
// 005388ec  5e                   pop esi
// 005388ed  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

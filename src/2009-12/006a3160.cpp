// roc 2009-12 006a3160  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a3160
//
// 006a3160  a1fc32b500           mov eax, dword ptr [0xb532fc]
// 006a3165  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a3169  56                   push esi
// 006a316a  50                   push eax
// 006a316b  6a01                 push 1
// 006a316d  51                   push ecx
// 006a316e  e8ed740e00           call 0x78a660
// 006a3173  8b7004               mov esi, dword ptr [eax + 4]
// 006a3176  83c004               add eax, 4
// 006a3179  83c40c               add esp, 0xc
// 006a317c  85f6                 test esi, esi
// 006a317e  742a                 je 0x6a31aa
// 006a3180  8d5604               lea edx, [esi + 4]
// 006a3183  83c8ff               or eax, 0xffffffff
// 006a3186  f00fc102             lock xadd dword ptr [edx], eax
// 006a318a  751e                 jne 0x6a31aa
// 006a318c  8b16                 mov edx, dword ptr [esi]
// 006a318e  8b4204               mov eax, dword ptr [edx + 4]
// 006a3191  8bce                 mov ecx, esi
// 006a3193  ffd0                 call eax
// 006a3195  8d4e08               lea ecx, [esi + 8]
// 006a3198  83caff               or edx, 0xffffffff
// 006a319b  f00fc111             lock xadd dword ptr [ecx], edx
// 006a319f  7509                 jne 0x6a31aa
// 006a31a1  8b06                 mov eax, dword ptr [esi]
// 006a31a3  8b5008               mov edx, dword ptr [eax + 8]
// 006a31a6  8bce                 mov ecx, esi
// 006a31a8  ffd2                 call edx
// 006a31aa  33c0                 xor eax, eax
// 006a31ac  5e                   pop esi
// 006a31ad  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

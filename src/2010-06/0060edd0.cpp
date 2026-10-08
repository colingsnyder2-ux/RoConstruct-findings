// roc 2010-06 0060edd0  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060edd0
//
// 0060edd0  a14c23be00           mov eax, dword ptr [0xbe234c]
// 0060edd5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060edd9  56                   push esi
// 0060edda  50                   push eax
// 0060eddb  6a01                 push 1
// 0060eddd  51                   push ecx
// 0060edde  e82d401100           call 0x722e10
// 0060ede3  8b7004               mov esi, dword ptr [eax + 4]
// 0060ede6  83c004               add eax, 4
// 0060ede9  83c40c               add esp, 0xc
// 0060edec  85f6                 test esi, esi
// 0060edee  742a                 je 0x60ee1a
// 0060edf0  8d5604               lea edx, [esi + 4]
// 0060edf3  83c8ff               or eax, 0xffffffff
// 0060edf6  f00fc102             lock xadd dword ptr [edx], eax
// 0060edfa  751e                 jne 0x60ee1a
// 0060edfc  8b16                 mov edx, dword ptr [esi]
// 0060edfe  8b4204               mov eax, dword ptr [edx + 4]
// 0060ee01  8bce                 mov ecx, esi
// 0060ee03  ffd0                 call eax
// 0060ee05  8d4e08               lea ecx, [esi + 8]
// 0060ee08  83caff               or edx, 0xffffffff
// 0060ee0b  f00fc111             lock xadd dword ptr [ecx], edx
// 0060ee0f  7509                 jne 0x60ee1a
// 0060ee11  8b06                 mov eax, dword ptr [esi]
// 0060ee13  8b5008               mov edx, dword ptr [eax + 8]
// 0060ee16  8bce                 mov ecx, esi
// 0060ee18  ffd2                 call edx
// 0060ee1a  33c0                 xor eax, eax
// 0060ee1c  5e                   pop esi
// 0060ee1d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

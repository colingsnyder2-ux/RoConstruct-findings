// roc 2009-06 00635b70  unit: RBX::Lua::VFunctionRef::?$holder  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00635b70
//
// 00635b70  a14ce2a100           mov eax, dword ptr [0xa1e24c]
// 00635b75  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00635b79  56                   push esi
// 00635b7a  50                   push eax
// 00635b7b  6a01                 push 1
// 00635b7d  51                   push ecx
// 00635b7e  e82d500800           call 0x6babb0
// 00635b83  8b7004               mov esi, dword ptr [eax + 4]
// 00635b86  83c004               add eax, 4
// 00635b89  83c40c               add esp, 0xc
// 00635b8c  85f6                 test esi, esi
// 00635b8e  742a                 je 0x635bba
// 00635b90  8d5604               lea edx, [esi + 4]
// 00635b93  83c8ff               or eax, 0xffffffff
// 00635b96  f00fc102             lock xadd dword ptr [edx], eax
// 00635b9a  751e                 jne 0x635bba
// 00635b9c  8b16                 mov edx, dword ptr [esi]
// 00635b9e  8b4204               mov eax, dword ptr [edx + 4]
// 00635ba1  8bce                 mov ecx, esi
// 00635ba3  ffd0                 call eax
// 00635ba5  8d4e08               lea ecx, [esi + 8]
// 00635ba8  83caff               or edx, 0xffffffff
// 00635bab  f00fc111             lock xadd dword ptr [ecx], edx
// 00635baf  7509                 jne 0x635bba
// 00635bb1  8b06                 mov eax, dword ptr [esi]
// 00635bb3  8b5008               mov edx, dword ptr [eax + 8]
// 00635bb6  8bce                 mov ecx, esi
// 00635bb8  ffd2                 call edx
// 00635bba  33c0                 xor eax, eax
// 00635bbc  5e                   pop esi
// 00635bbd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

// roc 2008-06 005aade0  unit: RBX::VScriptContext::?$FactoryProduct  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aade0
//
// 005aade0  a1e4b19500           mov eax, dword ptr [0x95b1e4]
// 005aade5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005aade9  56                   push esi
// 005aadea  50                   push eax
// 005aadeb  6a01                 push 1
// 005aaded  51                   push ecx
// 005aadee  e8bd670600           call 0x6115b0
// 005aadf3  8b7004               mov esi, dword ptr [eax + 4]
// 005aadf6  83c004               add eax, 4
// 005aadf9  83c40c               add esp, 0xc
// 005aadfc  85f6                 test esi, esi
// 005aadfe  742a                 je 0x5aae2a
// 005aae00  8d5604               lea edx, [esi + 4]
// 005aae03  83c8ff               or eax, 0xffffffff
// 005aae06  f00fc102             lock xadd dword ptr [edx], eax
// 005aae0a  751e                 jne 0x5aae2a
// 005aae0c  8b16                 mov edx, dword ptr [esi]
// 005aae0e  8b4204               mov eax, dword ptr [edx + 4]
// 005aae11  8bce                 mov ecx, esi
// 005aae13  ffd0                 call eax
// 005aae15  8d4e08               lea ecx, [esi + 8]
// 005aae18  83caff               or edx, 0xffffffff
// 005aae1b  f00fc111             lock xadd dword ptr [ecx], edx
// 005aae1f  7509                 jne 0x5aae2a
// 005aae21  8b06                 mov eax, dword ptr [esi]
// 005aae23  8b5008               mov edx, dword ptr [eax + 8]
// 005aae26  8bce                 mov ecx, esi
// 005aae28  ffd2                 call edx
// 005aae2a  33c0                 xor eax, eax
// 005aae2c  5e                   pop esi
// 005aae2d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

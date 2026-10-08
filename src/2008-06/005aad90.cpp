// roc 2008-06 005aad90  unit: RBX::VScriptContext::?$FactoryProduct  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aad90
//
// 005aad90  a174af9500           mov eax, dword ptr [0x95af74]
// 005aad95  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005aad99  56                   push esi
// 005aad9a  50                   push eax
// 005aad9b  6a01                 push 1
// 005aad9d  51                   push ecx
// 005aad9e  e80d680600           call 0x6115b0
// 005aada3  8b7004               mov esi, dword ptr [eax + 4]
// 005aada6  83c004               add eax, 4
// 005aada9  83c40c               add esp, 0xc
// 005aadac  85f6                 test esi, esi
// 005aadae  742a                 je 0x5aadda
// 005aadb0  8d5604               lea edx, [esi + 4]
// 005aadb3  83c8ff               or eax, 0xffffffff
// 005aadb6  f00fc102             lock xadd dword ptr [edx], eax
// 005aadba  751e                 jne 0x5aadda
// 005aadbc  8b16                 mov edx, dword ptr [esi]
// 005aadbe  8b4204               mov eax, dword ptr [edx + 4]
// 005aadc1  8bce                 mov ecx, esi
// 005aadc3  ffd0                 call eax
// 005aadc5  8d4e08               lea ecx, [esi + 8]
// 005aadc8  83caff               or edx, 0xffffffff
// 005aadcb  f00fc111             lock xadd dword ptr [ecx], edx
// 005aadcf  7509                 jne 0x5aadda
// 005aadd1  8b06                 mov eax, dword ptr [esi]
// 005aadd3  8b5008               mov edx, dword ptr [eax + 8]
// 005aadd6  8bce                 mov ecx, esi
// 005aadd8  ffd2                 call edx
// 005aadda  33c0                 xor eax, eax
// 005aaddc  5e                   pop esi
// 005aaddd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

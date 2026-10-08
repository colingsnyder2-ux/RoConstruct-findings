// roc 2007-03 00538850  unit: seg_00530000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00538850
//
// 00538850  a1b07f8a00           mov eax, dword ptr [0x8a7fb0]
// 00538855  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00538859  56                   push esi
// 0053885a  50                   push eax
// 0053885b  6a01                 push 1
// 0053885d  51                   push ecx
// 0053885e  e84d1c0800           call 0x5ba4b0
// 00538863  8b7004               mov esi, dword ptr [eax + 4]
// 00538866  83c004               add eax, 4
// 00538869  83c40c               add esp, 0xc
// 0053886c  85f6                 test esi, esi
// 0053886e  742a                 je 0x53889a
// 00538870  8d5604               lea edx, [esi + 4]
// 00538873  83c8ff               or eax, 0xffffffff
// 00538876  f00fc102             lock xadd dword ptr [edx], eax
// 0053887a  751e                 jne 0x53889a
// 0053887c  8b16                 mov edx, dword ptr [esi]
// 0053887e  8b4204               mov eax, dword ptr [edx + 4]
// 00538881  8bce                 mov ecx, esi
// 00538883  ffd0                 call eax
// 00538885  8d4e08               lea ecx, [esi + 8]
// 00538888  83caff               or edx, 0xffffffff
// 0053888b  f00fc111             lock xadd dword ptr [ecx], edx
// 0053888f  7509                 jne 0x53889a
// 00538891  8b06                 mov eax, dword ptr [esi]
// 00538893  8b5008               mov edx, dword ptr [eax + 8]
// 00538896  8bce                 mov ecx, esi
// 00538898  ffd2                 call edx
// 0053889a  33c0                 xor eax, eax
// 0053889c  5e                   pop esi
// 0053889d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

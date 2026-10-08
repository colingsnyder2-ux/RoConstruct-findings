// roc 2007-08 00536960  unit: boost::any::placeholder  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00536960
//
// 00536960  a1d8f78900           mov eax, dword ptr [0x89f7d8]
// 00536965  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00536969  56                   push esi
// 0053696a  50                   push eax
// 0053696b  6a01                 push 1
// 0053696d  51                   push ecx
// 0053696e  e8cd880800           call 0x5bf240
// 00536973  8b7004               mov esi, dword ptr [eax + 4]
// 00536976  83c004               add eax, 4
// 00536979  83c40c               add esp, 0xc
// 0053697c  85f6                 test esi, esi
// 0053697e  742a                 je 0x5369aa
// 00536980  8d5604               lea edx, [esi + 4]
// 00536983  83c8ff               or eax, 0xffffffff
// 00536986  f00fc102             lock xadd dword ptr [edx], eax
// 0053698a  751e                 jne 0x5369aa
// 0053698c  8b16                 mov edx, dword ptr [esi]
// 0053698e  8b4204               mov eax, dword ptr [edx + 4]
// 00536991  8bce                 mov ecx, esi
// 00536993  ffd0                 call eax
// 00536995  8d4e08               lea ecx, [esi + 8]
// 00536998  83caff               or edx, 0xffffffff
// 0053699b  f00fc111             lock xadd dword ptr [ecx], edx
// 0053699f  7509                 jne 0x5369aa
// 005369a1  8b06                 mov eax, dword ptr [esi]
// 005369a3  8b5008               mov edx, dword ptr [eax + 8]
// 005369a6  8bce                 mov ecx, esi
// 005369a8  ffd2                 call edx
// 005369aa  33c0                 xor eax, eax
// 005369ac  5e                   pop esi
// 005369ad  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

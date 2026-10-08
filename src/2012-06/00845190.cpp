// roc 2012-06 00845190  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00845190
//
// 00845190  a1589eda00           mov eax, dword ptr [0xda9e58]
// 00845195  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00845199  56                   push esi
// 0084519a  50                   push eax
// 0084519b  6a01                 push 1
// 0084519d  51                   push ecx
// 0084519e  e86de6feff           call 0x833810
// 008451a3  8b7004               mov esi, dword ptr [eax + 4]
// 008451a6  83c004               add eax, 4
// 008451a9  83c40c               add esp, 0xc
// 008451ac  85f6                 test esi, esi
// 008451ae  742a                 je 0x8451da
// 008451b0  8d5604               lea edx, [esi + 4]
// 008451b3  83c8ff               or eax, 0xffffffff
// 008451b6  f00fc102             lock xadd dword ptr [edx], eax
// 008451ba  751e                 jne 0x8451da
// 008451bc  8b16                 mov edx, dword ptr [esi]
// 008451be  8b4204               mov eax, dword ptr [edx + 4]
// 008451c1  8bce                 mov ecx, esi
// 008451c3  ffd0                 call eax
// 008451c5  8d4e08               lea ecx, [esi + 8]
// 008451c8  83caff               or edx, 0xffffffff
// 008451cb  f00fc111             lock xadd dword ptr [ecx], edx
// 008451cf  7509                 jne 0x8451da
// 008451d1  8b06                 mov eax, dword ptr [esi]
// 008451d3  8b5008               mov edx, dword ptr [eax + 8]
// 008451d6  8bce                 mov ecx, esi
// 008451d8  ffd2                 call edx
// 008451da  33c0                 xor eax, eax
// 008451dc  5e                   pop esi
// 008451dd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

// roc 2010-06 0060ed40  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060ed40
//
// 0060ed40  a1b0d8bc00           mov eax, dword ptr [0xbcd8b0]
// 0060ed45  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060ed49  56                   push esi
// 0060ed4a  50                   push eax
// 0060ed4b  6a01                 push 1
// 0060ed4d  51                   push ecx
// 0060ed4e  e8bd401100           call 0x722e10
// 0060ed53  8b7004               mov esi, dword ptr [eax + 4]
// 0060ed56  83c004               add eax, 4
// 0060ed59  83c40c               add esp, 0xc
// 0060ed5c  85f6                 test esi, esi
// 0060ed5e  742a                 je 0x60ed8a
// 0060ed60  8d5604               lea edx, [esi + 4]
// 0060ed63  83c8ff               or eax, 0xffffffff
// 0060ed66  f00fc102             lock xadd dword ptr [edx], eax
// 0060ed6a  751e                 jne 0x60ed8a
// 0060ed6c  8b16                 mov edx, dword ptr [esi]
// 0060ed6e  8b4204               mov eax, dword ptr [edx + 4]
// 0060ed71  8bce                 mov ecx, esi
// 0060ed73  ffd0                 call eax
// 0060ed75  8d4e08               lea ecx, [esi + 8]
// 0060ed78  83caff               or edx, 0xffffffff
// 0060ed7b  f00fc111             lock xadd dword ptr [ecx], edx
// 0060ed7f  7509                 jne 0x60ed8a
// 0060ed81  8b06                 mov eax, dword ptr [esi]
// 0060ed83  8b5008               mov edx, dword ptr [eax + 8]
// 0060ed86  8bce                 mov ecx, esi
// 0060ed88  ffd2                 call edx
// 0060ed8a  33c0                 xor eax, eax
// 0060ed8c  5e                   pop esi
// 0060ed8d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

// roc 2007-08 005bf7c0  unit: boost::detail::H::?$sp_counted_impl_p  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf7c0
//
// 005bf7c0  51                   push ecx
// 005bf7c1  56                   push esi
// 005bf7c2  8b742414             mov esi, dword ptr [esp + 0x14]
// 005bf7c6  57                   push edi
// 005bf7c7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005bf7cb  56                   push esi
// 005bf7cc  57                   push edi
// 005bf7cd  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bf7d5  e896dfffff           call 0x5bd770
// 005bf7da  83c408               add esp, 8
// 005bf7dd  85c0                 test eax, eax
// 005bf7df  7515                 jne 0x5bf7f6
// 005bf7e1  8b442410             mov eax, dword ptr [esp + 0x10]
// 005bf7e5  5f                   pop edi
// 005bf7e6  c70000000000         mov dword ptr [eax], 0
// 005bf7ec  c7400400000000       mov dword ptr [eax + 4], 0
// 005bf7f3  5e                   pop esi
// 005bf7f4  59                   pop ecx
// 005bf7f5  c3                   ret 
// 005bf7f6  a12cbc8a00           mov eax, dword ptr [0x8abc2c]
// 005bf7fb  50                   push eax
// 005bf7fc  56                   push esi
// 005bf7fd  57                   push edi
// 005bf7fe  e83dfaffff           call 0x5bf240
// 005bf803  8b08                 mov ecx, dword ptr [eax]
// 005bf805  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005bf809  890a                 mov dword ptr [edx], ecx
// 005bf80b  8b4804               mov ecx, dword ptr [eax + 4]
// 005bf80e  83c40c               add esp, 0xc
// 005bf811  85c9                 test ecx, ecx
// 005bf813  894a04               mov dword ptr [edx + 4], ecx
// 005bf816  740c                 je 0x5bf824
// 005bf818  83c104               add ecx, 4
// 005bf81b  b801000000           mov eax, 1
// 005bf820  f00fc101             lock xadd dword ptr [ecx], eax
// 005bf824  5f                   pop edi
// 005bf825  8bc2                 mov eax, edx
// 005bf827  5e                   pop esi
// 005bf828  59                   pop ecx
// 005bf829  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getPtr@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA?AV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

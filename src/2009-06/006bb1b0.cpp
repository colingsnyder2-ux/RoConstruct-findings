// roc 2009-06 006bb1b0  unit: RBX::UniversalTool  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bb1b0
//
// 006bb1b0  51                   push ecx
// 006bb1b1  56                   push esi
// 006bb1b2  8b742414             mov esi, dword ptr [esp + 0x14]
// 006bb1b6  57                   push edi
// 006bb1b7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006bb1bb  56                   push esi
// 006bb1bc  57                   push edi
// 006bb1bd  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006bb1c5  e8a6ddffff           call 0x6b8f70
// 006bb1ca  83c408               add esp, 8
// 006bb1cd  85c0                 test eax, eax
// 006bb1cf  7515                 jne 0x6bb1e6
// 006bb1d1  8b442410             mov eax, dword ptr [esp + 0x10]
// 006bb1d5  5f                   pop edi
// 006bb1d6  c70000000000         mov dword ptr [eax], 0
// 006bb1dc  c7400400000000       mov dword ptr [eax + 4], 0
// 006bb1e3  5e                   pop esi
// 006bb1e4  59                   pop ecx
// 006bb1e5  c3                   ret 
// 006bb1e6  a1a428a200           mov eax, dword ptr [0xa228a4]
// 006bb1eb  50                   push eax
// 006bb1ec  56                   push esi
// 006bb1ed  57                   push edi
// 006bb1ee  e8bdf9ffff           call 0x6babb0
// 006bb1f3  8b08                 mov ecx, dword ptr [eax]
// 006bb1f5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006bb1f9  890a                 mov dword ptr [edx], ecx
// 006bb1fb  8b4804               mov ecx, dword ptr [eax + 4]
// 006bb1fe  83c40c               add esp, 0xc
// 006bb201  894a04               mov dword ptr [edx + 4], ecx
// 006bb204  85c9                 test ecx, ecx
// 006bb206  740c                 je 0x6bb214
// 006bb208  83c104               add ecx, 4
// 006bb20b  b801000000           mov eax, 1
// 006bb210  f00fc101             lock xadd dword ptr [ecx], eax
// 006bb214  5f                   pop edi
// 006bb215  8bc2                 mov eax, edx
// 006bb217  5e                   pop esi
// 006bb218  59                   pop ecx
// 006bb219  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getPtr@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA?AV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

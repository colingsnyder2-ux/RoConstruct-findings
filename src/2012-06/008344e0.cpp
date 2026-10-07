// roc 2012-06 008344e0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008344e0
//
// 008344e0  51                   push ecx
// 008344e1  56                   push esi
// 008344e2  8b742414             mov esi, dword ptr [esp + 0x14]
// 008344e6  57                   push edi
// 008344e7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008344eb  56                   push esi
// 008344ec  57                   push edi
// 008344ed  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008344f5  e8e6d7ffff           call 0x831ce0
// 008344fa  83c408               add esp, 8
// 008344fd  85c0                 test eax, eax
// 008344ff  7515                 jne 0x834516
// 00834501  8b442410             mov eax, dword ptr [esp + 0x10]
// 00834505  5f                   pop edi
// 00834506  c70000000000         mov dword ptr [eax], 0
// 0083450c  c7400400000000       mov dword ptr [eax + 4], 0
// 00834513  5e                   pop esi
// 00834514  59                   pop ecx
// 00834515  c3                   ret 
// 00834516  a17c0ede00           mov eax, dword ptr [0xde0e7c]
// 0083451b  50                   push eax
// 0083451c  56                   push esi
// 0083451d  57                   push edi
// 0083451e  e8edf2ffff           call 0x833810
// 00834523  8b08                 mov ecx, dword ptr [eax]
// 00834525  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00834529  890a                 mov dword ptr [edx], ecx
// 0083452b  8b4804               mov ecx, dword ptr [eax + 4]
// 0083452e  83c40c               add esp, 0xc
// 00834531  894a04               mov dword ptr [edx + 4], ecx
// 00834534  85c9                 test ecx, ecx
// 00834536  740c                 je 0x834544
// 00834538  83c104               add ecx, 4
// 0083453b  b801000000           mov eax, 1
// 00834540  f00fc101             lock xadd dword ptr [ecx], eax
// 00834544  5f                   pop edi
// 00834545  8bc2                 mov eax, edx
// 00834547  5e                   pop esi
// 00834548  59                   pop ecx
// 00834549  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getPtr@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA?AV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

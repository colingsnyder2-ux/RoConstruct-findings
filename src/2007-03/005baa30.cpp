// roc 2007-03 005baa30  unit: seg_005b0000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005baa30
//
// 005baa30  51                   push ecx
// 005baa31  56                   push esi
// 005baa32  8b742414             mov esi, dword ptr [esp + 0x14]
// 005baa36  57                   push edi
// 005baa37  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005baa3b  56                   push esi
// 005baa3c  57                   push edi
// 005baa3d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005baa45  e8f6e1ffff           call 0x5b8c40
// 005baa4a  83c408               add esp, 8
// 005baa4d  85c0                 test eax, eax
// 005baa4f  7515                 jne 0x5baa66
// 005baa51  8b442410             mov eax, dword ptr [esp + 0x10]
// 005baa55  5f                   pop edi
// 005baa56  c70000000000         mov dword ptr [eax], 0
// 005baa5c  c7400400000000       mov dword ptr [eax + 4], 0
// 005baa63  5e                   pop esi
// 005baa64  59                   pop ecx
// 005baa65  c3                   ret 
// 005baa66  a1b07f8a00           mov eax, dword ptr [0x8a7fb0]
// 005baa6b  50                   push eax
// 005baa6c  56                   push esi
// 005baa6d  57                   push edi
// 005baa6e  e83dfaffff           call 0x5ba4b0
// 005baa73  8b08                 mov ecx, dword ptr [eax]
// 005baa75  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005baa79  890a                 mov dword ptr [edx], ecx
// 005baa7b  8b4804               mov ecx, dword ptr [eax + 4]
// 005baa7e  83c40c               add esp, 0xc
// 005baa81  85c9                 test ecx, ecx
// 005baa83  894a04               mov dword ptr [edx + 4], ecx
// 005baa86  740c                 je 0x5baa94
// 005baa88  83c104               add ecx, 4
// 005baa8b  b801000000           mov eax, 1
// 005baa90  f00fc101             lock xadd dword ptr [ecx], eax
// 005baa94  5f                   pop edi
// 005baa95  8bc2                 mov eax, edx
// 005baa97  5e                   pop esi
// 005baa98  59                   pop ecx
// 005baa99  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getPtr@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SA?AV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

// roc 2007-08 00534550  unit: RBX::ScriptContext  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534550
//
// 00534550  6aff                 push -1
// 00534552  6879be7500           push 0x75be79
// 00534557  64a100000000         mov eax, dword ptr fs:[0]
// 0053455d  50                   push eax
// 0053455e  64892500000000       mov dword ptr fs:[0], esp
// 00534565  83ec1c               sub esp, 0x1c
// 00534568  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0053456c  50                   push eax
// 0053456d  8d4c2404             lea ecx, [esp + 4]
// 00534571  51                   push ecx
// 00534572  e8298d0500           call 0x58d2a0
// 00534577  83c408               add esp, 8
// 0053457a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0053457f  8b442404             mov eax, dword ptr [esp + 4]
// 00534583  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0053458b  7304                 jae 0x534591
// 0053458d  8d442404             lea eax, [esp + 4]
// 00534591  8b542430             mov edx, dword ptr [esp + 0x30]
// 00534595  50                   push eax
// 00534596  52                   push edx
// 00534597  e854960800           call 0x5bdbf0
// 0053459c  83c408               add esp, 8
// 0053459f  8d0c24               lea ecx, [esp]
// 005345a2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005345aa  ff15ace67700         call dword ptr [0x77e6ac]
// 005345b0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005345b4  b801000000           mov eax, 1
// 005345b9  64890d00000000       mov dword ptr fs:[0], ecx
// 005345c0  83c428               add esp, 0x28
// 005345c3  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp

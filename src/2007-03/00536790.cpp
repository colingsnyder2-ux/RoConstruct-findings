// roc 2007-03 00536790  unit: seg_00530000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536790
//
// 00536790  6aff                 push -1
// 00536792  6809807500           push 0x758009
// 00536797  64a100000000         mov eax, dword ptr fs:[0]
// 0053679d  50                   push eax
// 0053679e  64892500000000       mov dword ptr fs:[0], esp
// 005367a5  83ec1c               sub esp, 0x1c
// 005367a8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005367ac  50                   push eax
// 005367ad  8d4c2404             lea ecx, [esp + 4]
// 005367b1  51                   push ecx
// 005367b2  e8e9110500           call 0x5879a0
// 005367b7  83c408               add esp, 8
// 005367ba  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 005367bf  8b442404             mov eax, dword ptr [esp + 4]
// 005367c3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005367cb  7304                 jae 0x5367d1
// 005367cd  8d442404             lea eax, [esp + 4]
// 005367d1  8b542430             mov edx, dword ptr [esp + 0x30]
// 005367d5  50                   push eax
// 005367d6  52                   push edx
// 005367d7  e8e4280800           call 0x5b90c0
// 005367dc  83c408               add esp, 8
// 005367df  8d0c24               lea ecx, [esp]
// 005367e2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005367ea  ff158ce77700         call dword ptr [0x77e78c]
// 005367f0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005367f4  b801000000           mov eax, 1
// 005367f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00536800  83c428               add esp, 0x28
// 00536803  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp

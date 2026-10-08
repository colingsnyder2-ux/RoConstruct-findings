// roc 2007-03 00536b30  unit: seg_00530000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536b30
//
// 00536b30  6aff                 push -1
// 00536b32  68011a7500           push 0x751a01
// 00536b37  64a100000000         mov eax, dword ptr fs:[0]
// 00536b3d  50                   push eax
// 00536b3e  64892500000000       mov dword ptr fs:[0], esp
// 00536b45  83ec08               sub esp, 8
// 00536b48  56                   push esi
// 00536b49  57                   push edi
// 00536b4a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00536b4e  6a30                 push 0x30
// 00536b50  57                   push edi
// 00536b51  e82a2f0800           call 0x5b9a80
// 00536b56  8bf0                 mov esi, eax
// 00536b58  83c408               add esp, 8
// 00536b5b  89742408             mov dword ptr [esp + 8], esi
// 00536b5f  8974240c             mov dword ptr [esp + 0xc], esi
// 00536b63  85f6                 test esi, esi
// 00536b65  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00536b6d  7421                 je 0x536b90
// 00536b6f  8d442424             lea eax, [esp + 0x24]
// 00536b73  50                   push eax
// 00536b74  8bce                 mov ecx, esi
// 00536b76  e8057efcff           call 0x4fe980
// 00536b7b  d9442448             fld dword ptr [esp + 0x48]
// 00536b7f  d95e24               fstp dword ptr [esi + 0x24]
// 00536b82  d944244c             fld dword ptr [esp + 0x4c]
// 00536b86  d95e28               fstp dword ptr [esi + 0x28]
// 00536b89  d9442450             fld dword ptr [esp + 0x50]
// 00536b8d  d95e2c               fstp dword ptr [esi + 0x2c]
// 00536b90  8b0d50828a00         mov ecx, dword ptr [0x8a8250]
// 00536b96  51                   push ecx
// 00536b97  68f0d8ffff           push 0xffffd8f0
// 00536b9c  57                   push edi
// 00536b9d  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00536ba5  e826270800           call 0x5b92d0
// 00536baa  6afe                 push -2
// 00536bac  57                   push edi
// 00536bad  e87e2a0800           call 0x5b9630
// 00536bb2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00536bb6  83c414               add esp, 0x14
// 00536bb9  5f                   pop edi
// 00536bba  8bc6                 mov eax, esi
// 00536bbc  5e                   pop esi
// 00536bbd  64890d00000000       mov dword ptr fs:[0], ecx
// 00536bc4  83c414               add esp, 0x14
// 00536bc7  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VCoordinateFrame@G3D@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAPAVCoordinateFrame@G3D@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp

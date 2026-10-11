// roc 2007-03 00536a10  unit: seg_00530000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536a10
//
// 00536a10  6aff                 push -1
// 00536a12  6809807500           push 0x758009
// 00536a17  64a100000000         mov eax, dword ptr fs:[0]
// 00536a1d  50                   push eax
// 00536a1e  64892500000000       mov dword ptr fs:[0], esp
// 00536a25  83ec1c               sub esp, 0x1c
// 00536a28  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00536a2c  50                   push eax
// 00536a2d  8d4c2404             lea ecx, [esp + 4]
// 00536a31  51                   push ecx
// 00536a32  e869110500           call 0x587ba0
// 00536a37  83c408               add esp, 8
// 00536a3a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 00536a3f  8b442404             mov eax, dword ptr [esp + 4]
// 00536a43  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00536a4b  7304                 jae 0x536a51
// 00536a4d  8d442404             lea eax, [esp + 4]
// 00536a51  8b542430             mov edx, dword ptr [esp + 0x30]
// 00536a55  50                   push eax
// 00536a56  52                   push edx
// 00536a57  e864260800           call 0x5b90c0
// 00536a5c  83c408               add esp, 8
// 00536a5f  8d0c24               lea ecx, [esp]
// 00536a62  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00536a6a  ff158ce77700         call dword ptr [0x77e78c]
// 00536a70  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00536a74  b801000000           mov eax, 1
// 00536a79  64890d00000000       mov dword ptr fs:[0], ecx
// 00536a80  83c428               add esp, 0x28
// 00536a83  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp

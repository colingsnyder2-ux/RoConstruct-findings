// roc 2008-06 005a8a50  unit: RBX::ScriptContext  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8a50
//
// 005a8a50  6aff                 push -1
// 005a8a52  6809e77c00           push 0x7ce709
// 005a8a57  64a100000000         mov eax, dword ptr fs:[0]
// 005a8a5d  50                   push eax
// 005a8a5e  64892500000000       mov dword ptr fs:[0], esp
// 005a8a65  83ec1c               sub esp, 0x1c
// 005a8a68  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a8a6c  50                   push eax
// 005a8a6d  8d4c2404             lea ecx, [esp + 4]
// 005a8a71  51                   push ecx
// 005a8a72  e879620100           call 0x5becf0
// 005a8a77  83c408               add esp, 8
// 005a8a7a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 005a8a7f  8b442404             mov eax, dword ptr [esp + 4]
// 005a8a83  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005a8a8b  7304                 jae 0x5a8a91
// 005a8a8d  8d442404             lea eax, [esp + 4]
// 005a8a91  8b542430             mov edx, dword ptr [esp + 0x30]
// 005a8a95  50                   push eax
// 005a8a96  52                   push edx
// 005a8a97  e8e4970600           call 0x612280
// 005a8a9c  83c408               add esp, 8
// 005a8a9f  8d0c24               lea ecx, [esp]
// 005a8aa2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005a8aaa  ff1568248000         call dword ptr [0x802468]
// 005a8ab0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a8ab4  b801000000           mov eax, 1
// 005a8ab9  64890d00000000       mov dword ptr fs:[0], ecx
// 005a8ac0  83c428               add esp, 0x28
// 005a8ac3  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp

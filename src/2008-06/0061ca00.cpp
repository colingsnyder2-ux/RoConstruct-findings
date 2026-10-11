// roc 2008-06 0061ca00  unit: RBX::Lua::LuaArguments  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061ca00
//
// 0061ca00  6aff                 push -1
// 0061ca02  68b9fe7c00           push 0x7cfeb9
// 0061ca07  64a100000000         mov eax, dword ptr fs:[0]
// 0061ca0d  50                   push eax
// 0061ca0e  64892500000000       mov dword ptr fs:[0], esp
// 0061ca15  83ec44               sub esp, 0x44
// 0061ca18  8b442458             mov eax, dword ptr [esp + 0x58]
// 0061ca1c  50                   push eax
// 0061ca1d  8d4c2404             lea ecx, [esp + 4]
// 0061ca21  6824228300           push 0x832224
// 0061ca26  51                   push ecx
// 0061ca27  e8e4d0eeff           call 0x509b10
// 0061ca2c  83c40c               add esp, 0xc
// 0061ca2f  50                   push eax
// 0061ca30  8d4c2420             lea ecx, [esp + 0x20]
// 0061ca34  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0061ca3c  e80fd3deff           call 0x409d50
// 0061ca41  68c81b8d00           push 0x8d1bc8
// 0061ca46  8d542420             lea edx, [esp + 0x20]
// 0061ca4a  52                   push edx
// 0061ca4b  e83c4b0800           call 0x6a158c
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_newindex@?$Bridge@VColor3@G3D@@$00@Lua@RBX@@KAXAAVColor3@G3D@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp

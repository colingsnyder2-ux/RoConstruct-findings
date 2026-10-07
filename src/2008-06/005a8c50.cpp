// roc 2008-06 005a8c50  unit: RBX::ScriptContext  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8c50
//
// 005a8c50  6aff                 push -1
// 005a8c52  6881757d00           push 0x7d7581
// 005a8c57  64a100000000         mov eax, dword ptr fs:[0]
// 005a8c5d  50                   push eax
// 005a8c5e  64892500000000       mov dword ptr fs:[0], esp
// 005a8c65  83ec08               sub esp, 8
// 005a8c68  56                   push esi
// 005a8c69  57                   push edi
// 005a8c6a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005a8c6e  6a30                 push 0x30
// 005a8c70  57                   push edi
// 005a8c71  e8ca9f0600           call 0x612c40
// 005a8c76  8bf0                 mov esi, eax
// 005a8c78  83c408               add esp, 8
// 005a8c7b  89742408             mov dword ptr [esp + 8], esi
// 005a8c7f  8974240c             mov dword ptr [esp + 0xc], esi
// 005a8c83  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a8c8b  85f6                 test esi, esi
// 005a8c8d  7421                 je 0x5a8cb0
// 005a8c8f  8d442424             lea eax, [esp + 0x24]
// 005a8c93  50                   push eax
// 005a8c94  8bce                 mov ecx, esi
// 005a8c96  e885a5f6ff           call 0x513220
// 005a8c9b  d9442448             fld dword ptr [esp + 0x48]
// 005a8c9f  d95e24               fstp dword ptr [esi + 0x24]
// 005a8ca2  d944244c             fld dword ptr [esp + 0x4c]
// 005a8ca6  d95e28               fstp dword ptr [esi + 0x28]
// 005a8ca9  d9442450             fld dword ptr [esp + 0x50]
// 005a8cad  d95e2c               fstp dword ptr [esi + 0x2c]
// 005a8cb0  8b0dc8b19500         mov ecx, dword ptr [0x95b1c8]
// 005a8cb6  51                   push ecx
// 005a8cb7  68f0d8ffff           push 0xffffd8f0
// 005a8cbc  57                   push edi
// 005a8cbd  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005a8cc5  e8c6970600           call 0x612490
// 005a8cca  6afe                 push -2
// 005a8ccc  57                   push edi
// 005a8ccd  e81e9b0600           call 0x6127f0
// 005a8cd2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a8cd6  83c414               add esp, 0x14
// 005a8cd9  5f                   pop edi
// 005a8cda  8bc6                 mov eax, esi
// 005a8cdc  5e                   pop esi
// 005a8cdd  64890d00000000       mov dword ptr fs:[0], ecx
// 005a8ce4  83c414               add esp, 0x14
// 005a8ce7  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VCoordinateFrame@G3D@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAPAVCoordinateFrame@G3D@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp

// roc 2009-06 00633690  unit: std::strstream  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633690
//
// 00633690  6aff                 push -1
// 00633692  68f17d8600           push 0x867df1
// 00633697  64a100000000         mov eax, dword ptr fs:[0]
// 0063369d  50                   push eax
// 0063369e  64892500000000       mov dword ptr fs:[0], esp
// 006336a5  83ec08               sub esp, 8
// 006336a8  56                   push esi
// 006336a9  57                   push edi
// 006336aa  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006336ae  6a30                 push 0x30
// 006336b0  57                   push edi
// 006336b1  e81a670800           call 0x6b9dd0
// 006336b6  8bf0                 mov esi, eax
// 006336b8  83c408               add esp, 8
// 006336bb  89742408             mov dword ptr [esp + 8], esi
// 006336bf  8974240c             mov dword ptr [esp + 0xc], esi
// 006336c3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006336cb  85f6                 test esi, esi
// 006336cd  7421                 je 0x6336f0
// 006336cf  8d442424             lea eax, [esp + 0x24]
// 006336d3  50                   push eax
// 006336d4  8bce                 mov ecx, esi
// 006336d6  e8a568e6ff           call 0x499f80
// 006336db  d9442448             fld dword ptr [esp + 0x48]
// 006336df  d95e24               fstp dword ptr [esi + 0x24]
// 006336e2  d944244c             fld dword ptr [esp + 0x4c]
// 006336e6  d95e28               fstp dword ptr [esi + 0x28]
// 006336e9  d9442450             fld dword ptr [esp + 0x50]
// 006336ed  d95e2c               fstp dword ptr [esi + 0x2c]
// 006336f0  8b0dfc2aa200         mov ecx, dword ptr [0xa22afc]
// 006336f6  51                   push ecx
// 006336f7  68f0d8ffff           push 0xffffd8f0
// 006336fc  57                   push edi
// 006336fd  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00633705  e8c65e0800           call 0x6b95d0
// 0063370a  6afe                 push -2
// 0063370c  57                   push edi
// 0063370d  e84e620800           call 0x6b9960
// 00633712  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00633716  83c414               add esp, 0x14
// 00633719  5f                   pop edi
// 0063371a  8bc6                 mov eax, esi
// 0063371c  5e                   pop esi
// 0063371d  64890d00000000       mov dword ptr fs:[0], ecx
// 00633724  83c414               add esp, 0x14
// 00633727  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VCoordinateFrame@G3D@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAPAVCoordinateFrame@G3D@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp

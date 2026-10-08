// roc 2007-08 00534780  unit: RBX::ScriptContext  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534780
//
// 00534780  6aff                 push -1
// 00534782  68d1267500           push 0x7526d1
// 00534787  64a100000000         mov eax, dword ptr fs:[0]
// 0053478d  50                   push eax
// 0053478e  64892500000000       mov dword ptr fs:[0], esp
// 00534795  83ec08               sub esp, 8
// 00534798  56                   push esi
// 00534799  57                   push edi
// 0053479a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0053479e  6a30                 push 0x30
// 005347a0  57                   push edi
// 005347a1  e80a9e0800           call 0x5be5b0
// 005347a6  8bf0                 mov esi, eax
// 005347a8  83c408               add esp, 8
// 005347ab  89742408             mov dword ptr [esp + 8], esi
// 005347af  8974240c             mov dword ptr [esp + 0xc], esi
// 005347b3  85f6                 test esi, esi
// 005347b5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005347bd  7421                 je 0x5347e0
// 005347bf  8d442424             lea eax, [esp + 0x24]
// 005347c3  50                   push eax
// 005347c4  8bce                 mov ecx, esi
// 005347c6  e8054efdff           call 0x5095d0
// 005347cb  d9442448             fld dword ptr [esp + 0x48]
// 005347cf  d95e24               fstp dword ptr [esi + 0x24]
// 005347d2  d944244c             fld dword ptr [esp + 0x4c]
// 005347d6  d95e28               fstp dword ptr [esi + 0x28]
// 005347d9  d9442450             fld dword ptr [esp + 0x50]
// 005347dd  d95e2c               fstp dword ptr [esi + 0x2c]
// 005347e0  8b0d80be8a00         mov ecx, dword ptr [0x8abe80]
// 005347e6  51                   push ecx
// 005347e7  68f0d8ffff           push 0xffffd8f0
// 005347ec  57                   push edi
// 005347ed  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005347f5  e806960800           call 0x5bde00
// 005347fa  6afe                 push -2
// 005347fc  57                   push edi
// 005347fd  e85e990800           call 0x5be160
// 00534802  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00534806  83c414               add esp, 0x14
// 00534809  5f                   pop edi
// 0053480a  8bc6                 mov eax, esi
// 0053480c  5e                   pop esi
// 0053480d  64890d00000000       mov dword ptr fs:[0], ecx
// 00534814  83c414               add esp, 0x14
// 00534817  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VCoordinateFrame@G3D@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAPAVCoordinateFrame@G3D@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp

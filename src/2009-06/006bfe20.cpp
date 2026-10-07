// roc 2009-06 006bfe20  unit: RBX::Lua::LuaArguments  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bfe20
//
// 006bfe20  53                   push ebx
// 006bfe21  56                   push esi
// 006bfe22  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bfe26  57                   push edi
// 006bfe27  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006bfe2b  57                   push edi
// 006bfe2c  56                   push esi
// 006bfe2d  e82e94ffff           call 0x6b9260
// 006bfe32  8bd8                 mov ebx, eax
// 006bfe34  83c408               add esp, 8
// 006bfe37  85db                 test ebx, ebx
// 006bfe39  746d                 je 0x6bfea8
// 006bfe3b  57                   push edi
// 006bfe3c  56                   push esi
// 006bfe3d  e8ce98ffff           call 0x6b9710
// 006bfe42  83c408               add esp, 8
// 006bfe45  85c0                 test eax, eax
// 006bfe47  7454                 je 0x6bfe9d
// 006bfe49  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 006bfe4e  50                   push eax
// 006bfe4f  68f0d8ffff           push 0xffffd8f0
// 006bfe54  56                   push esi
// 006bfe55  e87697ffff           call 0x6b95d0
// 006bfe5a  6afe                 push -2
// 006bfe5c  6aff                 push -1
// 006bfe5e  56                   push esi
// 006bfe5f  e8ec91ffff           call 0x6b9050
// 006bfe64  83c418               add esp, 0x18
// 006bfe67  85c0                 test eax, eax
// 006bfe69  743d                 je 0x6bfea8
// 006bfe6b  6afd                 push -3
// 006bfe6d  56                   push esi
// 006bfe6e  e81d8fffff           call 0x6b8d90
// 006bfe73  8b442420             mov eax, dword ptr [esp + 0x20]
// 006bfe77  8bf3                 mov esi, ebx
// 006bfe79  8bf8                 mov edi, eax
// 006bfe7b  b909000000           mov ecx, 9
// 006bfe80  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006bfe82  d94324               fld dword ptr [ebx + 0x24]
// 006bfe85  d95824               fstp dword ptr [eax + 0x24]
// 006bfe88  d94328               fld dword ptr [ebx + 0x28]
// 006bfe8b  d95828               fstp dword ptr [eax + 0x28]
// 006bfe8e  d9432c               fld dword ptr [ebx + 0x2c]
// 006bfe91  d9582c               fstp dword ptr [eax + 0x2c]
// 006bfe94  83c408               add esp, 8
// 006bfe97  5f                   pop edi
// 006bfe98  5e                   pop esi
// 006bfe99  b001                 mov al, 1
// 006bfe9b  5b                   pop ebx
// 006bfe9c  c3                   ret 
// 006bfe9d  6afe                 push -2
// 006bfe9f  56                   push esi
// 006bfea0  e8eb8effff           call 0x6b8d90
// 006bfea5  83c408               add esp, 8
// 006bfea8  5f                   pop edi
// 006bfea9  5e                   pop esi
// 006bfeaa  32c0                 xor al, al
// 006bfeac  5b                   pop ebx
// 006bfead  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$getValue@VCoordinateFrame@G3D@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp

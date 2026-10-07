// roc 2008-06 0061ec30  unit: RBX::Lua::LuaArguments  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061ec30
//
// 0061ec30  53                   push ebx
// 0061ec31  56                   push esi
// 0061ec32  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061ec36  57                   push edi
// 0061ec37  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0061ec3b  57                   push edi
// 0061ec3c  56                   push esi
// 0061ec3d  e8de34ffff           call 0x612120
// 0061ec42  8bd8                 mov ebx, eax
// 0061ec44  83c408               add esp, 8
// 0061ec47  85db                 test ebx, ebx
// 0061ec49  746d                 je 0x61ecb8
// 0061ec4b  57                   push edi
// 0061ec4c  56                   push esi
// 0061ec4d  e85e39ffff           call 0x6125b0
// 0061ec52  83c408               add esp, 8
// 0061ec55  85c0                 test eax, eax
// 0061ec57  7454                 je 0x61ecad
// 0061ec59  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 0061ec5e  50                   push eax
// 0061ec5f  68f0d8ffff           push 0xffffd8f0
// 0061ec64  56                   push esi
// 0061ec65  e82638ffff           call 0x612490
// 0061ec6a  6afe                 push -2
// 0061ec6c  6aff                 push -1
// 0061ec6e  56                   push esi
// 0061ec6f  e86c32ffff           call 0x611ee0
// 0061ec74  83c418               add esp, 0x18
// 0061ec77  85c0                 test eax, eax
// 0061ec79  743d                 je 0x61ecb8
// 0061ec7b  6afd                 push -3
// 0061ec7d  56                   push esi
// 0061ec7e  e89d2fffff           call 0x611c20
// 0061ec83  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061ec87  8bf3                 mov esi, ebx
// 0061ec89  8bf8                 mov edi, eax
// 0061ec8b  b909000000           mov ecx, 9
// 0061ec90  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0061ec92  d94324               fld dword ptr [ebx + 0x24]
// 0061ec95  d95824               fstp dword ptr [eax + 0x24]
// 0061ec98  d94328               fld dword ptr [ebx + 0x28]
// 0061ec9b  d95828               fstp dword ptr [eax + 0x28]
// 0061ec9e  d9432c               fld dword ptr [ebx + 0x2c]
// 0061eca1  d9582c               fstp dword ptr [eax + 0x2c]
// 0061eca4  83c408               add esp, 8
// 0061eca7  5f                   pop edi
// 0061eca8  5e                   pop esi
// 0061eca9  b001                 mov al, 1
// 0061ecab  5b                   pop ebx
// 0061ecac  c3                   ret 
// 0061ecad  6afe                 push -2
// 0061ecaf  56                   push esi
// 0061ecb0  e86b2fffff           call 0x611c20
// 0061ecb5  83c408               add esp, 8
// 0061ecb8  5f                   pop edi
// 0061ecb9  5e                   pop esi
// 0061ecba  32c0                 xor al, al
// 0061ecbc  5b                   pop ebx
// 0061ecbd  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$getValue@VCoordinateFrame@G3D@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp

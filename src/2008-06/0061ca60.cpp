// roc 2008-06 0061ca60  unit: RBX::Lua::LuaArguments  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061ca60
//
// 0061ca60  53                   push ebx
// 0061ca61  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0061ca65  56                   push esi
// 0061ca66  57                   push edi
// 0061ca67  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0061ca6b  53                   push ebx
// 0061ca6c  57                   push edi
// 0061ca6d  e8ae56ffff           call 0x612120
// 0061ca72  8bf0                 mov esi, eax
// 0061ca74  83c408               add esp, 8
// 0061ca77  85f6                 test esi, esi
// 0061ca79  7460                 je 0x61cadb
// 0061ca7b  53                   push ebx
// 0061ca7c  57                   push edi
// 0061ca7d  e82e5bffff           call 0x6125b0
// 0061ca82  83c408               add esp, 8
// 0061ca85  85c0                 test eax, eax
// 0061ca87  7447                 je 0x61cad0
// 0061ca89  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 0061ca8e  50                   push eax
// 0061ca8f  68f0d8ffff           push 0xffffd8f0
// 0061ca94  57                   push edi
// 0061ca95  e8f659ffff           call 0x612490
// 0061ca9a  6afe                 push -2
// 0061ca9c  6aff                 push -1
// 0061ca9e  57                   push edi
// 0061ca9f  e83c54ffff           call 0x611ee0
// 0061caa4  83c418               add esp, 0x18
// 0061caa7  85c0                 test eax, eax
// 0061caa9  7430                 je 0x61cadb
// 0061caab  6afd                 push -3
// 0061caad  57                   push edi
// 0061caae  e86d51ffff           call 0x611c20
// 0061cab3  d906                 fld dword ptr [esi]
// 0061cab5  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061cab9  d918                 fstp dword ptr [eax]
// 0061cabb  83c408               add esp, 8
// 0061cabe  d94604               fld dword ptr [esi + 4]
// 0061cac1  5f                   pop edi
// 0061cac2  d95804               fstp dword ptr [eax + 4]
// 0061cac5  d94608               fld dword ptr [esi + 8]
// 0061cac8  5e                   pop esi
// 0061cac9  d95808               fstp dword ptr [eax + 8]
// 0061cacc  b001                 mov al, 1
// 0061cace  5b                   pop ebx
// 0061cacf  c3                   ret 
// 0061cad0  6afe                 push -2
// 0061cad2  57                   push edi
// 0061cad3  e84851ffff           call 0x611c20
// 0061cad8  83c408               add esp, 8
// 0061cadb  5f                   pop edi
// 0061cadc  5e                   pop esi
// 0061cadd  32c0                 xor al, al
// 0061cadf  5b                   pop ebx
// 0061cae0  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$getValue@VVector3@G3D@@@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp

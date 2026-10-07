// roc 2007-08 005c16a0  unit: RBX::Lua::LuaArguments  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c16a0
//
// 005c16a0  53                   push ebx
// 005c16a1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005c16a5  56                   push esi
// 005c16a6  57                   push edi
// 005c16a7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005c16ab  53                   push ebx
// 005c16ac  57                   push edi
// 005c16ad  e8dec3ffff           call 0x5bda90
// 005c16b2  8bf0                 mov esi, eax
// 005c16b4  83c408               add esp, 8
// 005c16b7  85f6                 test esi, esi
// 005c16b9  7460                 je 0x5c171b
// 005c16bb  53                   push ebx
// 005c16bc  57                   push edi
// 005c16bd  e85ec8ffff           call 0x5bdf20
// 005c16c2  83c408               add esp, 8
// 005c16c5  85c0                 test eax, eax
// 005c16c7  7447                 je 0x5c1710
// 005c16c9  a178be8a00           mov eax, dword ptr [0x8abe78]
// 005c16ce  50                   push eax
// 005c16cf  68f0d8ffff           push 0xffffd8f0
// 005c16d4  57                   push edi
// 005c16d5  e826c7ffff           call 0x5bde00
// 005c16da  6afe                 push -2
// 005c16dc  6aff                 push -1
// 005c16de  57                   push edi
// 005c16df  e86cc1ffff           call 0x5bd850
// 005c16e4  83c418               add esp, 0x18
// 005c16e7  85c0                 test eax, eax
// 005c16e9  7430                 je 0x5c171b
// 005c16eb  6afd                 push -3
// 005c16ed  57                   push edi
// 005c16ee  e89dbeffff           call 0x5bd590
// 005c16f3  d906                 fld dword ptr [esi]
// 005c16f5  8b442420             mov eax, dword ptr [esp + 0x20]
// 005c16f9  d918                 fstp dword ptr [eax]
// 005c16fb  83c408               add esp, 8
// 005c16fe  d94604               fld dword ptr [esi + 4]
// 005c1701  5f                   pop edi
// 005c1702  d95804               fstp dword ptr [eax + 4]
// 005c1705  d94608               fld dword ptr [esi + 8]
// 005c1708  5e                   pop esi
// 005c1709  d95808               fstp dword ptr [eax + 8]
// 005c170c  b001                 mov al, 1
// 005c170e  5b                   pop ebx
// 005c170f  c3                   ret 
// 005c1710  6afe                 push -2
// 005c1712  57                   push edi
// 005c1713  e878beffff           call 0x5bd590
// 005c1718  83c408               add esp, 8
// 005c171b  5f                   pop edi
// 005c171c  5e                   pop esi
// 005c171d  32c0                 xor al, al
// 005c171f  5b                   pop ebx
// 005c1720  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$getValue@VVector3@G3D@@@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp

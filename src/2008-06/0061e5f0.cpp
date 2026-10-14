// roc 2008-06 0061e5f0  unit: RBX::Lua::LuaArguments  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061e5f0
//
// 0061e5f0  83ec58               sub esp, 0x58
// 0061e5f3  53                   push ebx
// 0061e5f4  56                   push esi
// 0061e5f5  57                   push edi
// 0061e5f6  8d4c2434             lea ecx, [esp + 0x34]
// 0061e5fa  e8d19ce5ff           call 0x4782d0
// 0061e5ff  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 0061e604  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0061e608  50                   push eax
// 0061e609  6a01                 push 1
// 0061e60b  53                   push ebx
// 0061e60c  e89f2fffff           call 0x6115b0
// 0061e611  6a02                 push 2
// 0061e613  53                   push ebx
// 0061e614  8bf0                 mov esi, eax
// 0061e616  e86531ffff           call 0x611780
// 0061e61b  d95c2410             fstp dword ptr [esp + 0x10]
// 0061e61f  83c410               add esp, 0x10
// 0061e622  8d4c2414             lea ecx, [esp + 0x14]
// 0061e626  56                   push esi
// 0061e627  51                   push ecx
// 0061e628  e85350efff           call 0x513680
// 0061e62d  83ec24               sub esp, 0x24
// 0061e630  8bf0                 mov esi, eax
// 0061e632  b909000000           mov ecx, 9
// 0061e637  8d7c2464             lea edi, [esp + 0x64]
// 0061e63b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0061e63d  8bf4                 mov esi, esp
// 0061e63f  8d542464             lea edx, [esp + 0x64]
// 0061e643  8964243c             mov dword ptr [esp + 0x3c], esp
// 0061e647  52                   push edx
// 0061e648  8bce                 mov ecx, esi
// 0061e64a  e8d14befff           call 0x513220
// 0061e64f  53                   push ebx
// 0061e650  d984248c000000       fld dword ptr [esp + 0x8c]
// 0061e657  d95e24               fstp dword ptr [esi + 0x24]
// 0061e65a  d9842490000000       fld dword ptr [esp + 0x90]
// 0061e661  d95e28               fstp dword ptr [esi + 0x28]
// 0061e664  d9842494000000       fld dword ptr [esp + 0x94]
// 0061e66b  d95e2c               fstp dword ptr [esi + 0x2c]
// 0061e66e  e8dda5f8ff           call 0x5a8c50
// 0061e673  83c434               add esp, 0x34
// 0061e676  5f                   pop edi
// 0061e677  5e                   pop esi
// 0061e678  b801000000           mov eax, 1
// 0061e67d  5b                   pop ebx
// 0061e67e  83c458               add esp, 0x58
// 0061e681  c3                   ret 
// library rbxgs-dll/script\LuaAtomicClasses.cpp (function ?fromAxisAngle@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll script/LuaAtomicClasses.cpp

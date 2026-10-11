// roc 2007-08 005c15d0  unit: RBX::Lua::LuaArguments  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c15d0
//
// 005c15d0  64a100000000         mov eax, dword ptr fs:[0]
// 005c15d6  6aff                 push -1
// 005c15d8  68d9967500           push 0x7596d9
// 005c15dd  50                   push eax
// 005c15de  8b442414             mov eax, dword ptr [esp + 0x14]
// 005c15e2  64892500000000       mov dword ptr fs:[0], esp
// 005c15e9  83ec44               sub esp, 0x44
// 005c15ec  56                   push esi
// 005c15ed  57                   push edi
// 005c15ee  bff4f47900           mov edi, 0x79f4f4
// 005c15f3  8bf0                 mov esi, eax
// 005c15f5  b902000000           mov ecx, 2
// 005c15fa  33d2                 xor edx, edx
// 005c15fc  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c15fe  752f                 jne 0x5c162f
// 005c1600  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005c1604  d900                 fld dword ptr [eax]
// 005c1606  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005c160a  83ec08               sub esp, 8
// 005c160d  dd1c24               fstp qword ptr [esp]
// 005c1610  51                   push ecx
// 005c1611  e85ac5ffff           call 0x5bdb70
// 005c1616  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005c161a  83c40c               add esp, 0xc
// 005c161d  5f                   pop edi
// 005c161e  b801000000           mov eax, 1
// 005c1623  5e                   pop esi
// 005c1624  64890d00000000       mov dword ptr fs:[0], ecx
// 005c162b  83c450               add esp, 0x50
// 005c162e  c3                   ret 
// 005c162f  bf34947b00           mov edi, 0x7b9434
// 005c1634  8bf0                 mov esi, eax
// 005c1636  b902000000           mov ecx, 2
// 005c163b  33d2                 xor edx, edx
// 005c163d  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c163f  7509                 jne 0x5c164a
// 005c1641  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005c1645  d94004               fld dword ptr [eax + 4]
// 005c1648  ebbc                 jmp 0x5c1606
// 005c164a  bf30947b00           mov edi, 0x7b9430
// 005c164f  8bf0                 mov esi, eax
// 005c1651  b902000000           mov ecx, 2
// 005c1656  33d2                 xor edx, edx
// 005c1658  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c165a  7509                 jne 0x5c1665
// 005c165c  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005c1660  d94008               fld dword ptr [eax + 8]
// 005c1663  eba1                 jmp 0x5c1606
// 005c1665  50                   push eax
// 005c1666  8d54240c             lea edx, [esp + 0xc]
// 005c166a  68109f7a00           push 0x7a9f10
// 005c166f  52                   push edx
// 005c1670  e84b01f4ff           call 0x5017c0
// 005c1675  83c40c               add esp, 0xc
// 005c1678  50                   push eax
// 005c1679  8d4c2428             lea ecx, [esp + 0x28]
// 005c167d  c744245800000000     mov dword ptr [esp + 0x58], 0
// 005c1685  e83617e5ff           call 0x412dc0
// 005c168a  68c0108400           push 0x8410c0
// 005c168f  8d442428             lea eax, [esp + 0x28]
// 005c1693  50                   push eax
// 005c1694  e805f50600           call 0x630b9e
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_index@?$Bridge@VColor3@G3D@@$00@Lua@RBX@@KAHABVColor3@G3D@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp

// roc 2007-03 005bd940  unit: seg_005b0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd940
//
// 005bd940  83ec34               sub esp, 0x34
// 005bd943  a150828a00           mov eax, dword ptr [0x8a8250]
// 005bd948  56                   push esi
// 005bd949  57                   push edi
// 005bd94a  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005bd94e  50                   push eax
// 005bd94f  6a01                 push 1
// 005bd951  57                   push edi
// 005bd952  e859cbffff           call 0x5ba4b0
// 005bd957  83c40c               add esp, 0xc
// 005bd95a  8d4c240c             lea ecx, [esp + 0xc]
// 005bd95e  51                   push ecx
// 005bd95f  8bc8                 mov ecx, eax
// 005bd961  e86a78ebff           call 0x4751d0
// 005bd966  83ec30               sub esp, 0x30
// 005bd969  8bf4                 mov esi, esp
// 005bd96b  8d54243c             lea edx, [esp + 0x3c]
// 005bd96f  89642438             mov dword ptr [esp + 0x38], esp
// 005bd973  52                   push edx
// 005bd974  8bce                 mov ecx, esi
// 005bd976  e80510f4ff           call 0x4fe980
// 005bd97b  d9442460             fld dword ptr [esp + 0x60]
// 005bd97f  d95e24               fstp dword ptr [esi + 0x24]
// 005bd982  57                   push edi
// 005bd983  d9442468             fld dword ptr [esp + 0x68]
// 005bd987  d95e28               fstp dword ptr [esi + 0x28]
// 005bd98a  d944246c             fld dword ptr [esp + 0x6c]
// 005bd98e  d95e2c               fstp dword ptr [esi + 0x2c]
// 005bd991  e89a91f7ff           call 0x536b30
// 005bd996  83c434               add esp, 0x34
// 005bd999  5f                   pop edi
// 005bd99a  b801000000           mov eax, 1
// 005bd99f  5e                   pop esi
// 005bd9a0  83c434               add esp, 0x34
// 005bd9a3  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_inverse@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp

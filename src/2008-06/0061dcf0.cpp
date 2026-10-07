// roc 2008-06 0061dcf0  unit: RBX::Lua::LuaArguments  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061dcf0
//
// 0061dcf0  83ec34               sub esp, 0x34
// 0061dcf3  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 0061dcf8  56                   push esi
// 0061dcf9  57                   push edi
// 0061dcfa  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0061dcfe  50                   push eax
// 0061dcff  6a01                 push 1
// 0061dd01  57                   push edi
// 0061dd02  e8a938ffff           call 0x6115b0
// 0061dd07  83c40c               add esp, 0xc
// 0061dd0a  8d4c240c             lea ecx, [esp + 0xc]
// 0061dd0e  51                   push ecx
// 0061dd0f  8bc8                 mov ecx, eax
// 0061dd11  e81aa6e5ff           call 0x478330
// 0061dd16  83ec30               sub esp, 0x30
// 0061dd19  8bf4                 mov esi, esp
// 0061dd1b  8d54243c             lea edx, [esp + 0x3c]
// 0061dd1f  89642438             mov dword ptr [esp + 0x38], esp
// 0061dd23  52                   push edx
// 0061dd24  8bce                 mov ecx, esi
// 0061dd26  e8f554efff           call 0x513220
// 0061dd2b  d9442460             fld dword ptr [esp + 0x60]
// 0061dd2f  d95e24               fstp dword ptr [esi + 0x24]
// 0061dd32  57                   push edi
// 0061dd33  d9442468             fld dword ptr [esp + 0x68]
// 0061dd37  d95e28               fstp dword ptr [esi + 0x28]
// 0061dd3a  d944246c             fld dword ptr [esp + 0x6c]
// 0061dd3e  d95e2c               fstp dword ptr [esi + 0x2c]
// 0061dd41  e80aaff8ff           call 0x5a8c50
// 0061dd46  83c434               add esp, 0x34
// 0061dd49  5f                   pop edi
// 0061dd4a  b801000000           mov eax, 1
// 0061dd4f  5e                   pop esi
// 0061dd50  83c434               add esp, 0x34
// 0061dd53  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_inverse@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp

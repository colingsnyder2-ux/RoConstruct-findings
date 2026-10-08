// roc 2007-03 005bd9b0  unit: seg_005b0000  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd9b0
//
// 005bd9b0  83ec38               sub esp, 0x38
// 005bd9b3  a150828a00           mov eax, dword ptr [0x8a8250]
// 005bd9b8  53                   push ebx
// 005bd9b9  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005bd9bd  55                   push ebp
// 005bd9be  56                   push esi
// 005bd9bf  57                   push edi
// 005bd9c0  50                   push eax
// 005bd9c1  6a01                 push 1
// 005bd9c3  53                   push ebx
// 005bd9c4  e8e7caffff           call 0x5ba4b0
// 005bd9c9  53                   push ebx
// 005bd9ca  8be8                 mov ebp, eax
// 005bd9cc  e87fb0ffff           call 0x5b8a50
// 005bd9d1  83c410               add esp, 0x10
// 005bd9d4  83e801               sub eax, 1
// 005bd9d7  89442410             mov dword ptr [esp + 0x10], eax
// 005bd9db  755f                 jne 0x5bda3c
// 005bd9dd  55                   push ebp
// 005bd9de  8d4c241c             lea ecx, [esp + 0x1c]
// 005bd9e2  e8990ff4ff           call 0x4fe980
// 005bd9e7  d94524               fld dword ptr [ebp + 0x24]
// 005bd9ea  d95c243c             fstp dword ptr [esp + 0x3c]
// 005bd9ee  83ec30               sub esp, 0x30
// 005bd9f1  d94528               fld dword ptr [ebp + 0x28]
// 005bd9f4  8bf4                 mov esi, esp
// 005bd9f6  d95c2470             fstp dword ptr [esp + 0x70]
// 005bd9fa  8d4c2448             lea ecx, [esp + 0x48]
// 005bd9fe  d9452c               fld dword ptr [ebp + 0x2c]
// 005bda01  89642440             mov dword ptr [esp + 0x40], esp
// 005bda05  51                   push ecx
// 005bda06  d95c2478             fstp dword ptr [esp + 0x78]
// 005bda0a  8bce                 mov ecx, esi
// 005bda0c  e86f0ff4ff           call 0x4fe980
// 005bda11  d944246c             fld dword ptr [esp + 0x6c]
// 005bda15  d95e24               fstp dword ptr [esi + 0x24]
// 005bda18  53                   push ebx
// 005bda19  d9442474             fld dword ptr [esp + 0x74]
// 005bda1d  d95e28               fstp dword ptr [esi + 0x28]
// 005bda20  d9442478             fld dword ptr [esp + 0x78]
// 005bda24  d95e2c               fstp dword ptr [esi + 0x2c]
// 005bda27  e80491f7ff           call 0x536b30
// 005bda2c  83c434               add esp, 0x34
// 005bda2f  b801000000           mov eax, 1
// 005bda34  5f                   pop edi
// 005bda35  5e                   pop esi
// 005bda36  5d                   pop ebp
// 005bda37  5b                   pop ebx
// 005bda38  83c438               add esp, 0x38
// 005bda3b  c3                   ret 
// 005bda3c  33ff                 xor edi, edi
// 005bda3e  85c0                 test eax, eax
// 005bda40  7e61                 jle 0x5bdaa3
// 005bda42  8b1550828a00         mov edx, dword ptr [0x8a8250]
// 005bda48  52                   push edx
// 005bda49  8d4702               lea eax, [edi + 2]
// 005bda4c  50                   push eax
// 005bda4d  53                   push ebx
// 005bda4e  e85dcaffff           call 0x5ba4b0
// 005bda53  83c40c               add esp, 0xc
// 005bda56  50                   push eax
// 005bda57  8d4c241c             lea ecx, [esp + 0x1c]
// 005bda5b  51                   push ecx
// 005bda5c  8bcd                 mov ecx, ebp
// 005bda5e  e88d58ebff           call 0x4732f0
// 005bda63  83ec30               sub esp, 0x30
// 005bda66  8bf4                 mov esi, esp
// 005bda68  8d542448             lea edx, [esp + 0x48]
// 005bda6c  89642444             mov dword ptr [esp + 0x44], esp
// 005bda70  52                   push edx
// 005bda71  8bce                 mov ecx, esi
// 005bda73  e8080ff4ff           call 0x4fe980
// 005bda78  d944246c             fld dword ptr [esp + 0x6c]
// 005bda7c  d95e24               fstp dword ptr [esi + 0x24]
// 005bda7f  53                   push ebx
// 005bda80  d9442474             fld dword ptr [esp + 0x74]
// 005bda84  d95e28               fstp dword ptr [esi + 0x28]
// 005bda87  d9442478             fld dword ptr [esp + 0x78]
// 005bda8b  d95e2c               fstp dword ptr [esi + 0x2c]
// 005bda8e  e89d90f7ff           call 0x536b30
// 005bda93  83c701               add edi, 1
// 005bda96  83c434               add esp, 0x34
// 005bda99  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005bda9d  7ca3                 jl 0x5bda42
// 005bda9f  8b442410             mov eax, dword ptr [esp + 0x10]
// 005bdaa3  5f                   pop edi
// 005bdaa4  5e                   pop esi
// 005bdaa5  5d                   pop ebp
// 005bdaa6  5b                   pop ebx
// 005bdaa7  83c438               add esp, 0x38
// 005bdaaa  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toWorldSpace@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp

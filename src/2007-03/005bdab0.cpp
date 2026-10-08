// roc 2007-03 005bdab0  unit: seg_005b0000  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bdab0
//
// 005bdab0  83ec38               sub esp, 0x38
// 005bdab3  a150828a00           mov eax, dword ptr [0x8a8250]
// 005bdab8  53                   push ebx
// 005bdab9  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005bdabd  55                   push ebp
// 005bdabe  56                   push esi
// 005bdabf  57                   push edi
// 005bdac0  50                   push eax
// 005bdac1  6a01                 push 1
// 005bdac3  53                   push ebx
// 005bdac4  e8e7c9ffff           call 0x5ba4b0
// 005bdac9  8bf0                 mov esi, eax
// 005bdacb  53                   push ebx
// 005bdacc  89742420             mov dword ptr [esp + 0x20], esi
// 005bdad0  e87bafffff           call 0x5b8a50
// 005bdad5  8be8                 mov ebp, eax
// 005bdad7  83c410               add esp, 0x10
// 005bdada  83ed01               sub ebp, 1
// 005bdadd  754c                 jne 0x5bdb2b
// 005bdadf  8d4c2418             lea ecx, [esp + 0x18]
// 005bdae3  51                   push ecx
// 005bdae4  8bce                 mov ecx, esi
// 005bdae6  e8e576ebff           call 0x4751d0
// 005bdaeb  83ec30               sub esp, 0x30
// 005bdaee  8bf4                 mov esi, esp
// 005bdaf0  8d542448             lea edx, [esp + 0x48]
// 005bdaf4  89642440             mov dword ptr [esp + 0x40], esp
// 005bdaf8  52                   push edx
// 005bdaf9  8bce                 mov ecx, esi
// 005bdafb  e8800ef4ff           call 0x4fe980
// 005bdb00  d944246c             fld dword ptr [esp + 0x6c]
// 005bdb04  d95e24               fstp dword ptr [esi + 0x24]
// 005bdb07  53                   push ebx
// 005bdb08  d9442474             fld dword ptr [esp + 0x74]
// 005bdb0c  d95e28               fstp dword ptr [esi + 0x28]
// 005bdb0f  d9442478             fld dword ptr [esp + 0x78]
// 005bdb13  d95e2c               fstp dword ptr [esi + 0x2c]
// 005bdb16  e81590f7ff           call 0x536b30
// 005bdb1b  83c434               add esp, 0x34
// 005bdb1e  b801000000           mov eax, 1
// 005bdb23  5f                   pop edi
// 005bdb24  5e                   pop esi
// 005bdb25  5d                   pop ebp
// 005bdb26  5b                   pop ebx
// 005bdb27  83c438               add esp, 0x38
// 005bdb2a  c3                   ret 
// 005bdb2b  33ff                 xor edi, edi
// 005bdb2d  85ed                 test ebp, ebp
// 005bdb2f  7e60                 jle 0x5bdb91
// 005bdb31  eb04                 jmp 0x5bdb37
// 005bdb33  8b742410             mov esi, dword ptr [esp + 0x10]
// 005bdb37  a150828a00           mov eax, dword ptr [0x8a8250]
// 005bdb3c  50                   push eax
// 005bdb3d  8d4f02               lea ecx, [edi + 2]
// 005bdb40  51                   push ecx
// 005bdb41  53                   push ebx
// 005bdb42  e869c9ffff           call 0x5ba4b0
// 005bdb47  83c40c               add esp, 0xc
// 005bdb4a  50                   push eax
// 005bdb4b  8d54241c             lea edx, [esp + 0x1c]
// 005bdb4f  52                   push edx
// 005bdb50  8bce                 mov ecx, esi
// 005bdb52  e86921ffff           call 0x5afcc0
// 005bdb57  83ec30               sub esp, 0x30
// 005bdb5a  8bf4                 mov esi, esp
// 005bdb5c  8d442448             lea eax, [esp + 0x48]
// 005bdb60  89642444             mov dword ptr [esp + 0x44], esp
// 005bdb64  50                   push eax
// 005bdb65  8bce                 mov ecx, esi
// 005bdb67  e8140ef4ff           call 0x4fe980
// 005bdb6c  d944246c             fld dword ptr [esp + 0x6c]
// 005bdb70  d95e24               fstp dword ptr [esi + 0x24]
// 005bdb73  53                   push ebx
// 005bdb74  d9442474             fld dword ptr [esp + 0x74]
// 005bdb78  d95e28               fstp dword ptr [esi + 0x28]
// 005bdb7b  d9442478             fld dword ptr [esp + 0x78]
// 005bdb7f  d95e2c               fstp dword ptr [esi + 0x2c]
// 005bdb82  e8a98ff7ff           call 0x536b30
// 005bdb87  83c701               add edi, 1
// 005bdb8a  83c434               add esp, 0x34
// 005bdb8d  3bfd                 cmp edi, ebp
// 005bdb8f  7ca2                 jl 0x5bdb33
// 005bdb91  5f                   pop edi
// 005bdb92  5e                   pop esi
// 005bdb93  8bc5                 mov eax, ebp
// 005bdb95  5d                   pop ebp
// 005bdb96  5b                   pop ebx
// 005bdb97  83c438               add esp, 0x38
// 005bdb9a  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toObjectSpace@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp

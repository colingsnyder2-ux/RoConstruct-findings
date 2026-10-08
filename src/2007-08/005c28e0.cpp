// roc 2007-08 005c28e0  unit: RBX::Lua::LuaArguments  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c28e0
//
// 005c28e0  83ec38               sub esp, 0x38
// 005c28e3  a180be8a00           mov eax, dword ptr [0x8abe80]
// 005c28e8  53                   push ebx
// 005c28e9  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005c28ed  55                   push ebp
// 005c28ee  56                   push esi
// 005c28ef  57                   push edi
// 005c28f0  50                   push eax
// 005c28f1  6a01                 push 1
// 005c28f3  53                   push ebx
// 005c28f4  e847c9ffff           call 0x5bf240
// 005c28f9  8bf0                 mov esi, eax
// 005c28fb  53                   push ebx
// 005c28fc  89742420             mov dword ptr [esp + 0x20], esi
// 005c2900  e87bacffff           call 0x5bd580
// 005c2905  8be8                 mov ebp, eax
// 005c2907  83c410               add esp, 0x10
// 005c290a  83ed01               sub ebp, 1
// 005c290d  754c                 jne 0x5c295b
// 005c290f  8d4c2418             lea ecx, [esp + 0x18]
// 005c2913  51                   push ecx
// 005c2914  8bce                 mov ecx, esi
// 005c2916  e89527ebff           call 0x4750b0
// 005c291b  83ec30               sub esp, 0x30
// 005c291e  8bf4                 mov esi, esp
// 005c2920  8d542448             lea edx, [esp + 0x48]
// 005c2924  89642440             mov dword ptr [esp + 0x40], esp
// 005c2928  52                   push edx
// 005c2929  8bce                 mov ecx, esi
// 005c292b  e8a06cf4ff           call 0x5095d0
// 005c2930  d944246c             fld dword ptr [esp + 0x6c]
// 005c2934  d95e24               fstp dword ptr [esi + 0x24]
// 005c2937  53                   push ebx
// 005c2938  d9442474             fld dword ptr [esp + 0x74]
// 005c293c  d95e28               fstp dword ptr [esi + 0x28]
// 005c293f  d9442478             fld dword ptr [esp + 0x78]
// 005c2943  d95e2c               fstp dword ptr [esi + 0x2c]
// 005c2946  e8351ef7ff           call 0x534780
// 005c294b  83c434               add esp, 0x34
// 005c294e  b801000000           mov eax, 1
// 005c2953  5f                   pop edi
// 005c2954  5e                   pop esi
// 005c2955  5d                   pop ebp
// 005c2956  5b                   pop ebx
// 005c2957  83c438               add esp, 0x38
// 005c295a  c3                   ret 
// 005c295b  33ff                 xor edi, edi
// 005c295d  85ed                 test ebp, ebp
// 005c295f  7e60                 jle 0x5c29c1
// 005c2961  eb04                 jmp 0x5c2967
// 005c2963  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c2967  a180be8a00           mov eax, dword ptr [0x8abe80]
// 005c296c  50                   push eax
// 005c296d  8d4f02               lea ecx, [edi + 2]
// 005c2970  51                   push ecx
// 005c2971  53                   push ebx
// 005c2972  e8c9c8ffff           call 0x5bf240
// 005c2977  83c40c               add esp, 0xc
// 005c297a  50                   push eax
// 005c297b  8d54241c             lea edx, [esp + 0x1c]
// 005c297f  52                   push edx
// 005c2980  8bce                 mov ecx, esi
// 005c2982  e83979ffff           call 0x5ba2c0
// 005c2987  83ec30               sub esp, 0x30
// 005c298a  8bf4                 mov esi, esp
// 005c298c  8d442448             lea eax, [esp + 0x48]
// 005c2990  89642444             mov dword ptr [esp + 0x44], esp
// 005c2994  50                   push eax
// 005c2995  8bce                 mov ecx, esi
// 005c2997  e8346cf4ff           call 0x5095d0
// 005c299c  d944246c             fld dword ptr [esp + 0x6c]
// 005c29a0  d95e24               fstp dword ptr [esi + 0x24]
// 005c29a3  53                   push ebx
// 005c29a4  d9442474             fld dword ptr [esp + 0x74]
// 005c29a8  d95e28               fstp dword ptr [esi + 0x28]
// 005c29ab  d9442478             fld dword ptr [esp + 0x78]
// 005c29af  d95e2c               fstp dword ptr [esi + 0x2c]
// 005c29b2  e8c91df7ff           call 0x534780
// 005c29b7  83c701               add edi, 1
// 005c29ba  83c434               add esp, 0x34
// 005c29bd  3bfd                 cmp edi, ebp
// 005c29bf  7ca2                 jl 0x5c2963
// 005c29c1  5f                   pop edi
// 005c29c2  5e                   pop esi
// 005c29c3  8bc5                 mov eax, ebp
// 005c29c5  5d                   pop ebp
// 005c29c6  5b                   pop ebx
// 005c29c7  83c438               add esp, 0x38
// 005c29ca  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toObjectSpace@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp

// roc 2007-08 005c27e0  unit: RBX::Lua::LuaArguments  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c27e0
//
// 005c27e0  83ec38               sub esp, 0x38
// 005c27e3  a180be8a00           mov eax, dword ptr [0x8abe80]
// 005c27e8  53                   push ebx
// 005c27e9  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005c27ed  55                   push ebp
// 005c27ee  56                   push esi
// 005c27ef  57                   push edi
// 005c27f0  50                   push eax
// 005c27f1  6a01                 push 1
// 005c27f3  53                   push ebx
// 005c27f4  e847caffff           call 0x5bf240
// 005c27f9  53                   push ebx
// 005c27fa  8be8                 mov ebp, eax
// 005c27fc  e87fadffff           call 0x5bd580
// 005c2801  83c410               add esp, 0x10
// 005c2804  83e801               sub eax, 1
// 005c2807  89442410             mov dword ptr [esp + 0x10], eax
// 005c280b  755f                 jne 0x5c286c
// 005c280d  55                   push ebp
// 005c280e  8d4c241c             lea ecx, [esp + 0x1c]
// 005c2812  e8b96df4ff           call 0x5095d0
// 005c2817  d94524               fld dword ptr [ebp + 0x24]
// 005c281a  d95c243c             fstp dword ptr [esp + 0x3c]
// 005c281e  83ec30               sub esp, 0x30
// 005c2821  d94528               fld dword ptr [ebp + 0x28]
// 005c2824  8bf4                 mov esi, esp
// 005c2826  d95c2470             fstp dword ptr [esp + 0x70]
// 005c282a  8d4c2448             lea ecx, [esp + 0x48]
// 005c282e  d9452c               fld dword ptr [ebp + 0x2c]
// 005c2831  89642440             mov dword ptr [esp + 0x40], esp
// 005c2835  51                   push ecx
// 005c2836  d95c2478             fstp dword ptr [esp + 0x78]
// 005c283a  8bce                 mov ecx, esi
// 005c283c  e88f6df4ff           call 0x5095d0
// 005c2841  d944246c             fld dword ptr [esp + 0x6c]
// 005c2845  d95e24               fstp dword ptr [esi + 0x24]
// 005c2848  53                   push ebx
// 005c2849  d9442474             fld dword ptr [esp + 0x74]
// 005c284d  d95e28               fstp dword ptr [esi + 0x28]
// 005c2850  d9442478             fld dword ptr [esp + 0x78]
// 005c2854  d95e2c               fstp dword ptr [esi + 0x2c]
// 005c2857  e8241ff7ff           call 0x534780
// 005c285c  83c434               add esp, 0x34
// 005c285f  b801000000           mov eax, 1
// 005c2864  5f                   pop edi
// 005c2865  5e                   pop esi
// 005c2866  5d                   pop ebp
// 005c2867  5b                   pop ebx
// 005c2868  83c438               add esp, 0x38
// 005c286b  c3                   ret 
// 005c286c  33ff                 xor edi, edi
// 005c286e  85c0                 test eax, eax
// 005c2870  7e61                 jle 0x5c28d3
// 005c2872  8b1580be8a00         mov edx, dword ptr [0x8abe80]
// 005c2878  52                   push edx
// 005c2879  8d4702               lea eax, [edi + 2]
// 005c287c  50                   push eax
// 005c287d  53                   push ebx
// 005c287e  e8bdc9ffff           call 0x5bf240
// 005c2883  83c40c               add esp, 0xc
// 005c2886  50                   push eax
// 005c2887  8d4c241c             lea ecx, [esp + 0x1c]
// 005c288b  51                   push ecx
// 005c288c  8bcd                 mov ecx, ebp
// 005c288e  e86d09ebff           call 0x473200
// 005c2893  83ec30               sub esp, 0x30
// 005c2896  8bf4                 mov esi, esp
// 005c2898  8d542448             lea edx, [esp + 0x48]
// 005c289c  89642444             mov dword ptr [esp + 0x44], esp
// 005c28a0  52                   push edx
// 005c28a1  8bce                 mov ecx, esi
// 005c28a3  e8286df4ff           call 0x5095d0
// 005c28a8  d944246c             fld dword ptr [esp + 0x6c]
// 005c28ac  d95e24               fstp dword ptr [esi + 0x24]
// 005c28af  53                   push ebx
// 005c28b0  d9442474             fld dword ptr [esp + 0x74]
// 005c28b4  d95e28               fstp dword ptr [esi + 0x28]
// 005c28b7  d9442478             fld dword ptr [esp + 0x78]
// 005c28bb  d95e2c               fstp dword ptr [esi + 0x2c]
// 005c28be  e8bd1ef7ff           call 0x534780
// 005c28c3  83c701               add edi, 1
// 005c28c6  83c434               add esp, 0x34
// 005c28c9  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005c28cd  7ca3                 jl 0x5c2872
// 005c28cf  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c28d3  5f                   pop edi
// 005c28d4  5e                   pop esi
// 005c28d5  5d                   pop ebp
// 005c28d6  5b                   pop ebx
// 005c28d7  83c438               add esp, 0x38
// 005c28da  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toWorldSpace@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp

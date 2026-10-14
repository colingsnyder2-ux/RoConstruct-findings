// roc 2008-06 0061e050  unit: RBX::Lua::LuaArguments  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061e050
//
// 0061e050  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 0061e055  53                   push ebx
// 0061e056  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0061e05a  55                   push ebp
// 0061e05b  56                   push esi
// 0061e05c  57                   push edi
// 0061e05d  50                   push eax
// 0061e05e  6a01                 push 1
// 0061e060  53                   push ebx
// 0061e061  e84a35ffff           call 0x6115b0
// 0061e066  53                   push ebx
// 0061e067  8bf0                 mov esi, eax
// 0061e069  e8a23bffff           call 0x611c10
// 0061e06e  8be8                 mov ebp, eax
// 0061e070  83c410               add esp, 0x10
// 0061e073  83ed01               sub ebp, 1
// 0061e076  7549                 jne 0x61e0c1
// 0061e078  f60550f0960001       test byte ptr [0x96f050], 1
// 0061e07f  751b                 jne 0x61e09c
// 0061e081  d9ee                 fldz 
// 0061e083  830d50f0960001       or dword ptr [0x96f050], 1
// 0061e08a  d91544f09600         fst dword ptr [0x96f044]
// 0061e090  d91548f09600         fst dword ptr [0x96f048]
// 0061e096  d91d4cf09600         fstp dword ptr [0x96f04c]
// 0061e09c  83ec0c               sub esp, 0xc
// 0061e09f  8bcc                 mov ecx, esp
// 0061e0a1  6844f09600           push 0x96f044
// 0061e0a6  51                   push ecx
// 0061e0a7  8bce                 mov ecx, esi
// 0061e0a9  e8f23beeff           call 0x501ca0
// 0061e0ae  53                   push ebx
// 0061e0af  e88caff8ff           call 0x5a9040
// 0061e0b4  83c410               add esp, 0x10
// 0061e0b7  b801000000           mov eax, 1
// 0061e0bc  5f                   pop edi
// 0061e0bd  5e                   pop esi
// 0061e0be  5d                   pop ebp
// 0061e0bf  5b                   pop ebx
// 0061e0c0  c3                   ret 
// 0061e0c1  33ff                 xor edi, edi
// 0061e0c3  85ed                 test ebp, ebp
// 0061e0c5  0f8e7d000000         jle 0x61e148
// 0061e0cb  eb03                 jmp 0x61e0d0
// 0061e0cd  8d4900               lea ecx, [ecx]
// 0061e0d0  8b15c0b19500         mov edx, dword ptr [0x95b1c0]
// 0061e0d6  52                   push edx
// 0061e0d7  8d4702               lea eax, [edi + 2]
// 0061e0da  50                   push eax
// 0061e0db  53                   push ebx
// 0061e0dc  e8cf34ffff           call 0x6115b0
// 0061e0e1  d900                 fld dword ptr [eax]
// 0061e0e3  d86624               fsub dword ptr [esi + 0x24]
// 0061e0e6  8bcc                 mov ecx, esp
// 0061e0e8  d94004               fld dword ptr [eax + 4]
// 0061e0eb  53                   push ebx
// 0061e0ec  d86628               fsub dword ptr [esi + 0x28]
// 0061e0ef  d94008               fld dword ptr [eax + 8]
// 0061e0f2  d8662c               fsub dword ptr [esi + 0x2c]
// 0061e0f5  d9461c               fld dword ptr [esi + 0x1c]
// 0061e0f8  d8c9                 fmul st(1)
// 0061e0fa  d94610               fld dword ptr [esi + 0x10]
// 0061e0fd  d8cb                 fmul st(3)
// 0061e0ff  dec1                 faddp st(1)
// 0061e101  d9c3                 fld st(3)
// 0061e103  d84e04               fmul dword ptr [esi + 4]
// 0061e106  dec1                 faddp st(1)
// 0061e108  d94608               fld dword ptr [esi + 8]
// 0061e10b  d8cc                 fmul st(4)
// 0061e10d  d94620               fld dword ptr [esi + 0x20]
// 0061e110  d8cb                 fmul st(3)
// 0061e112  dec1                 faddp st(1)
// 0061e114  d94614               fld dword ptr [esi + 0x14]
// 0061e117  d8cc                 fmul st(4)
// 0061e119  dec1                 faddp st(1)
// 0061e11b  d94618               fld dword ptr [esi + 0x18]
// 0061e11e  decb                 fmulp st(3)
// 0061e120  d9460c               fld dword ptr [esi + 0xc]
// 0061e123  decc                 fmulp st(4)
// 0061e125  d9ca                 fxch st(2)
// 0061e127  dec3                 faddp st(3)
// 0061e129  d906                 fld dword ptr [esi]
// 0061e12b  decc                 fmulp st(4)
// 0061e12d  d9ca                 fxch st(2)
// 0061e12f  dec3                 faddp st(3)
// 0061e131  d9ca                 fxch st(2)
// 0061e133  d919                 fstp dword ptr [ecx]
// 0061e135  d95904               fstp dword ptr [ecx + 4]
// 0061e138  d95908               fstp dword ptr [ecx + 8]
// 0061e13b  e800aff8ff           call 0x5a9040
// 0061e140  47                   inc edi
// 0061e141  83c410               add esp, 0x10
// 0061e144  3bfd                 cmp edi, ebp
// 0061e146  7c88                 jl 0x61e0d0
// 0061e148  5f                   pop edi
// 0061e149  5e                   pop esi
// 0061e14a  8bc5                 mov eax, ebp
// 0061e14c  5d                   pop ebp
// 0061e14d  5b                   pop ebx
// 0061e14e  c3                   ret 
// library rbxgs-dll/script\LuaAtomicClasses.cpp (function ?on_pointToObjectSpace@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll script/LuaAtomicClasses.cpp

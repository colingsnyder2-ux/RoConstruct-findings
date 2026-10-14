// roc 2008-06 0061e150  unit: RBX::Lua::LuaArguments  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061e150
//
// 0061e150  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 0061e155  53                   push ebx
// 0061e156  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0061e15a  55                   push ebp
// 0061e15b  56                   push esi
// 0061e15c  57                   push edi
// 0061e15d  50                   push eax
// 0061e15e  6a01                 push 1
// 0061e160  53                   push ebx
// 0061e161  e84a34ffff           call 0x6115b0
// 0061e166  53                   push ebx
// 0061e167  8bf0                 mov esi, eax
// 0061e169  e8a23affff           call 0x611c10
// 0061e16e  8be8                 mov ebp, eax
// 0061e170  83c410               add esp, 0x10
// 0061e173  83ed01               sub ebp, 1
// 0061e176  0f85a8000000         jne 0x61e224
// 0061e17c  f60550f0960001       test byte ptr [0x96f050], 1
// 0061e183  d9ee                 fldz 
// 0061e185  7519                 jne 0x61e1a0
// 0061e187  830d50f0960001       or dword ptr [0x96f050], 1
// 0061e18e  d91544f09600         fst dword ptr [0x96f044]
// 0061e194  d91548f09600         fst dword ptr [0x96f048]
// 0061e19a  d9154cf09600         fst dword ptr [0x96f04c]
// 0061e1a0  83ec0c               sub esp, 0xc
// 0061e1a3  8bc4                 mov eax, esp
// 0061e1a5  d910                 fst dword ptr [eax]
// 0061e1a7  53                   push ebx
// 0061e1a8  d95004               fst dword ptr [eax + 4]
// 0061e1ab  d95808               fstp dword ptr [eax + 8]
// 0061e1ae  d94608               fld dword ptr [esi + 8]
// 0061e1b1  d80d4cf09600         fmul dword ptr [0x96f04c]
// 0061e1b7  d94604               fld dword ptr [esi + 4]
// 0061e1ba  d80d48f09600         fmul dword ptr [0x96f048]
// 0061e1c0  dec1                 faddp st(1)
// 0061e1c2  d906                 fld dword ptr [esi]
// 0061e1c4  d80d44f09600         fmul dword ptr [0x96f044]
// 0061e1ca  dec1                 faddp st(1)
// 0061e1cc  d918                 fstp dword ptr [eax]
// 0061e1ce  d94614               fld dword ptr [esi + 0x14]
// 0061e1d1  d80d4cf09600         fmul dword ptr [0x96f04c]
// 0061e1d7  d94610               fld dword ptr [esi + 0x10]
// 0061e1da  d80d48f09600         fmul dword ptr [0x96f048]
// 0061e1e0  dec1                 faddp st(1)
// 0061e1e2  d9460c               fld dword ptr [esi + 0xc]
// 0061e1e5  d80d44f09600         fmul dword ptr [0x96f044]
// 0061e1eb  dec1                 faddp st(1)
// 0061e1ed  d95804               fstp dword ptr [eax + 4]
// 0061e1f0  d94620               fld dword ptr [esi + 0x20]
// 0061e1f3  d80d4cf09600         fmul dword ptr [0x96f04c]
// 0061e1f9  d9461c               fld dword ptr [esi + 0x1c]
// 0061e1fc  d80d48f09600         fmul dword ptr [0x96f048]
// 0061e202  dec1                 faddp st(1)
// 0061e204  d94618               fld dword ptr [esi + 0x18]
// 0061e207  d80d44f09600         fmul dword ptr [0x96f044]
// 0061e20d  dec1                 faddp st(1)
// 0061e20f  d95808               fstp dword ptr [eax + 8]
// 0061e212  e829aef8ff           call 0x5a9040
// 0061e217  83c410               add esp, 0x10
// 0061e21a  b801000000           mov eax, 1
// 0061e21f  5f                   pop edi
// 0061e220  5e                   pop esi
// 0061e221  5d                   pop ebp
// 0061e222  5b                   pop ebx
// 0061e223  c3                   ret 
// 0061e224  33ff                 xor edi, edi
// 0061e226  85ed                 test ebp, ebp
// 0061e228  7e77                 jle 0x61e2a1
// 0061e22a  8d9b00000000         lea ebx, [ebx]
// 0061e230  8b0dc0b19500         mov ecx, dword ptr [0x95b1c0]
// 0061e236  51                   push ecx
// 0061e237  8d5702               lea edx, [edi + 2]
// 0061e23a  52                   push edx
// 0061e23b  53                   push ebx
// 0061e23c  e86f33ffff           call 0x6115b0
// 0061e241  d9ee                 fldz 
// 0061e243  8bcc                 mov ecx, esp
// 0061e245  d911                 fst dword ptr [ecx]
// 0061e247  d95104               fst dword ptr [ecx + 4]
// 0061e24a  53                   push ebx
// 0061e24b  d95908               fstp dword ptr [ecx + 8]
// 0061e24e  d94604               fld dword ptr [esi + 4]
// 0061e251  d84804               fmul dword ptr [eax + 4]
// 0061e254  d900                 fld dword ptr [eax]
// 0061e256  d80e                 fmul dword ptr [esi]
// 0061e258  dec1                 faddp st(1)
// 0061e25a  d94608               fld dword ptr [esi + 8]
// 0061e25d  d84808               fmul dword ptr [eax + 8]
// 0061e260  dec1                 faddp st(1)
// 0061e262  d919                 fstp dword ptr [ecx]
// 0061e264  d900                 fld dword ptr [eax]
// 0061e266  d84e0c               fmul dword ptr [esi + 0xc]
// 0061e269  d94610               fld dword ptr [esi + 0x10]
// 0061e26c  d84804               fmul dword ptr [eax + 4]
// 0061e26f  dec1                 faddp st(1)
// 0061e271  d94614               fld dword ptr [esi + 0x14]
// 0061e274  d84808               fmul dword ptr [eax + 8]
// 0061e277  dec1                 faddp st(1)
// 0061e279  d95904               fstp dword ptr [ecx + 4]
// 0061e27c  d900                 fld dword ptr [eax]
// 0061e27e  d84e18               fmul dword ptr [esi + 0x18]
// 0061e281  d94620               fld dword ptr [esi + 0x20]
// 0061e284  d84808               fmul dword ptr [eax + 8]
// 0061e287  dec1                 faddp st(1)
// 0061e289  d9461c               fld dword ptr [esi + 0x1c]
// 0061e28c  d84804               fmul dword ptr [eax + 4]
// 0061e28f  dec1                 faddp st(1)
// 0061e291  d95908               fstp dword ptr [ecx + 8]
// 0061e294  e8a7adf8ff           call 0x5a9040
// 0061e299  47                   inc edi
// 0061e29a  83c410               add esp, 0x10
// 0061e29d  3bfd                 cmp edi, ebp
// 0061e29f  7c8f                 jl 0x61e230
// 0061e2a1  5f                   pop edi
// 0061e2a2  5e                   pop esi
// 0061e2a3  8bc5                 mov eax, ebp
// 0061e2a5  5d                   pop ebp
// 0061e2a6  5b                   pop ebx
// 0061e2a7  c3                   ret 
// library rbxgs-dll/script\LuaAtomicClasses.cpp (function ?on_vectorToWorldSpace@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll script/LuaAtomicClasses.cpp

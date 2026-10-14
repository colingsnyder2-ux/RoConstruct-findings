// roc 2008-06 0061e3b0  unit: RBX::Lua::LuaArguments  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061e3b0
//
// 0061e3b0  83ec2c               sub esp, 0x2c
// 0061e3b3  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 0061e3b8  53                   push ebx
// 0061e3b9  55                   push ebp
// 0061e3ba  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0061e3be  56                   push esi
// 0061e3bf  57                   push edi
// 0061e3c0  50                   push eax
// 0061e3c1  6a01                 push 1
// 0061e3c3  55                   push ebp
// 0061e3c4  e8e731ffff           call 0x6115b0
// 0061e3c9  8bf8                 mov edi, eax
// 0061e3cb  55                   push ebp
// 0061e3cc  897c2424             mov dword ptr [esp + 0x24], edi
// 0061e3d0  e83b38ffff           call 0x611c10
// 0061e3d5  83c410               add esp, 0x10
// 0061e3d8  83e801               sub eax, 1
// 0061e3db  89442410             mov dword ptr [esp + 0x10], eax
// 0061e3df  0f85bd000000         jne 0x61e4a2
// 0061e3e5  f60550f0960001       test byte ptr [0x96f050], 1
// 0061e3ec  d9ee                 fldz 
// 0061e3ee  751b                 jne 0x61e40b
// 0061e3f0  830d50f0960001       or dword ptr [0x96f050], 1
// 0061e3f7  d91544f09600         fst dword ptr [0x96f044]
// 0061e3fd  d91548f09600         fst dword ptr [0x96f048]
// 0061e403  d91d4cf09600         fstp dword ptr [0x96f04c]
// 0061e409  eb02                 jmp 0x61e40d
// 0061e40b  ddd8                 fstp st(0)
// 0061e40d  83ec0c               sub esp, 0xc
// 0061e410  8d4c2424             lea ecx, [esp + 0x24]
// 0061e414  8bf4                 mov esi, esp
// 0061e416  51                   push ecx
// 0061e417  8bcf                 mov ecx, edi
// 0061e419  e8f250efff           call 0x513510
// 0061e41e  d9ee                 fldz 
// 0061e420  d916                 fst dword ptr [esi]
// 0061e422  55                   push ebp
// 0061e423  d95604               fst dword ptr [esi + 4]
// 0061e426  d95e08               fstp dword ptr [esi + 8]
// 0061e429  d94008               fld dword ptr [eax + 8]
// 0061e42c  d80d4cf09600         fmul dword ptr [0x96f04c]
// 0061e432  d94004               fld dword ptr [eax + 4]
// 0061e435  d80d48f09600         fmul dword ptr [0x96f048]
// 0061e43b  dec1                 faddp st(1)
// 0061e43d  d900                 fld dword ptr [eax]
// 0061e43f  d80d44f09600         fmul dword ptr [0x96f044]
// 0061e445  dec1                 faddp st(1)
// 0061e447  d91e                 fstp dword ptr [esi]
// 0061e449  d94014               fld dword ptr [eax + 0x14]
// 0061e44c  d80d4cf09600         fmul dword ptr [0x96f04c]
// 0061e452  d94010               fld dword ptr [eax + 0x10]
// 0061e455  d80d48f09600         fmul dword ptr [0x96f048]
// 0061e45b  dec1                 faddp st(1)
// 0061e45d  d9400c               fld dword ptr [eax + 0xc]
// 0061e460  d80d44f09600         fmul dword ptr [0x96f044]
// 0061e466  dec1                 faddp st(1)
// 0061e468  d95e04               fstp dword ptr [esi + 4]
// 0061e46b  d94020               fld dword ptr [eax + 0x20]
// 0061e46e  d80d4cf09600         fmul dword ptr [0x96f04c]
// 0061e474  d9401c               fld dword ptr [eax + 0x1c]
// 0061e477  d80d48f09600         fmul dword ptr [0x96f048]
// 0061e47d  dec1                 faddp st(1)
// 0061e47f  d94018               fld dword ptr [eax + 0x18]
// 0061e482  d80d44f09600         fmul dword ptr [0x96f044]
// 0061e488  dec1                 faddp st(1)
// 0061e48a  d95e08               fstp dword ptr [esi + 8]
// 0061e48d  e8aeabf8ff           call 0x5a9040
// 0061e492  83c410               add esp, 0x10
// 0061e495  b801000000           mov eax, 1
// 0061e49a  5f                   pop edi
// 0061e49b  5e                   pop esi
// 0061e49c  5d                   pop ebp
// 0061e49d  5b                   pop ebx
// 0061e49e  83c42c               add esp, 0x2c
// 0061e4a1  c3                   ret 
// 0061e4a2  33db                 xor ebx, ebx
// 0061e4a4  85c0                 test eax, eax
// 0061e4a6  0f8e8f000000         jle 0x61e53b
// 0061e4ac  8d642400             lea esp, [esp]
// 0061e4b0  8b15c0b19500         mov edx, dword ptr [0x95b1c0]
// 0061e4b6  52                   push edx
// 0061e4b7  8d4302               lea eax, [ebx + 2]
// 0061e4ba  50                   push eax
// 0061e4bb  55                   push ebp
// 0061e4bc  e8ef30ffff           call 0x6115b0
// 0061e4c1  8d4c2424             lea ecx, [esp + 0x24]
// 0061e4c5  8bfc                 mov edi, esp
// 0061e4c7  51                   push ecx
// 0061e4c8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061e4cc  8bf0                 mov esi, eax
// 0061e4ce  e83d50efff           call 0x513510
// 0061e4d3  d9ee                 fldz 
// 0061e4d5  d917                 fst dword ptr [edi]
// 0061e4d7  55                   push ebp
// 0061e4d8  d95704               fst dword ptr [edi + 4]
// 0061e4db  d95f08               fstp dword ptr [edi + 8]
// 0061e4de  d94008               fld dword ptr [eax + 8]
// 0061e4e1  d84e08               fmul dword ptr [esi + 8]
// 0061e4e4  d94004               fld dword ptr [eax + 4]
// 0061e4e7  d84e04               fmul dword ptr [esi + 4]
// 0061e4ea  dec1                 faddp st(1)
// 0061e4ec  d906                 fld dword ptr [esi]
// 0061e4ee  d808                 fmul dword ptr [eax]
// 0061e4f0  dec1                 faddp st(1)
// 0061e4f2  d91f                 fstp dword ptr [edi]
// 0061e4f4  d94014               fld dword ptr [eax + 0x14]
// 0061e4f7  d84e08               fmul dword ptr [esi + 8]
// 0061e4fa  d9400c               fld dword ptr [eax + 0xc]
// 0061e4fd  d80e                 fmul dword ptr [esi]
// 0061e4ff  dec1                 faddp st(1)
// 0061e501  d94010               fld dword ptr [eax + 0x10]
// 0061e504  d84e04               fmul dword ptr [esi + 4]
// 0061e507  dec1                 faddp st(1)
// 0061e509  d95f04               fstp dword ptr [edi + 4]
// 0061e50c  d94020               fld dword ptr [eax + 0x20]
// 0061e50f  d84e08               fmul dword ptr [esi + 8]
// 0061e512  d94018               fld dword ptr [eax + 0x18]
// 0061e515  d80e                 fmul dword ptr [esi]
// 0061e517  dec1                 faddp st(1)
// 0061e519  d9401c               fld dword ptr [eax + 0x1c]
// 0061e51c  d84e04               fmul dword ptr [esi + 4]
// 0061e51f  dec1                 faddp st(1)
// 0061e521  d95f08               fstp dword ptr [edi + 8]
// 0061e524  e817abf8ff           call 0x5a9040
// 0061e529  43                   inc ebx
// 0061e52a  83c410               add esp, 0x10
// 0061e52d  3b5c2410             cmp ebx, dword ptr [esp + 0x10]
// 0061e531  0f8c79ffffff         jl 0x61e4b0
// 0061e537  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061e53b  5f                   pop edi
// 0061e53c  5e                   pop esi
// 0061e53d  5d                   pop ebp
// 0061e53e  5b                   pop ebx
// 0061e53f  83c42c               add esp, 0x2c
// 0061e542  c3                   ret 
// library rbxgs-dll/script\LuaAtomicClasses.cpp (function ?on_vectorToObjectSpace@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll script/LuaAtomicClasses.cpp

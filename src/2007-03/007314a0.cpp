// roc 2007-03 007314a0  unit: seg_00730000  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007314a0
//
// 007314a0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007314a4  d901                 fld dword ptr [ecx]
// 007314a6  53                   push ebx
// 007314a7  55                   push ebp
// 007314a8  56                   push esi
// 007314a9  57                   push edi
// 007314aa  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007314ae  8d87a8040000         lea eax, [edi + 0x4a8]
// 007314b4  d918                 fstp dword ptr [eax]
// 007314b6  50                   push eax
// 007314b7  d94104               fld dword ptr [ecx + 4]
// 007314ba  d95804               fstp dword ptr [eax + 4]
// 007314bd  d94108               fld dword ptr [ecx + 8]
// 007314c0  d95808               fstp dword ptr [eax + 8]
// 007314c3  d9410c               fld dword ptr [ecx + 0xc]
// 007314c6  d9580c               fstp dword ptr [eax + 0xc]
// 007314c9  ff15b0eb7700         call dword ptr [0x77ebb0]
// 007314cf  6a05                 push 5
// 007314d1  8bcf                 mov ecx, edi
// 007314d3  e8c86ad4ff           call 0x477fa0
// 007314d8  d9ee                 fldz 
// 007314da  8b1d10eb7700         mov ebx, dword ptr [0x77eb10]
// 007314e0  83ec08               sub esp, 8
// 007314e3  d9542404             fst dword ptr [esp + 4]
// 007314e7  d91c24               fstp dword ptr [esp]
// 007314ea  ffd3                 call ebx
// 007314ec  8b742414             mov esi, dword ptr [esp + 0x14]
// 007314f0  d94604               fld dword ptr [esi + 4]
// 007314f3  8b2d80ec7700         mov ebp, dword ptr [0x77ec80]
// 007314f9  83ec08               sub esp, 8
// 007314fc  d95c2404             fstp dword ptr [esp + 4]
// 00731500  d906                 fld dword ptr [esi]
// 00731502  d91c24               fstp dword ptr [esp]
// 00731505  ffd5                 call ebp
// 00731507  d9e8                 fld1 
// 00731509  83ec08               sub esp, 8
// 0073150c  d95c2404             fstp dword ptr [esp + 4]
// 00731510  d9ee                 fldz 
// 00731512  d91c24               fstp dword ptr [esp]
// 00731515  ffd3                 call ebx
// 00731517  d9460c               fld dword ptr [esi + 0xc]
// 0073151a  83ec08               sub esp, 8
// 0073151d  d95c2404             fstp dword ptr [esp + 4]
// 00731521  d906                 fld dword ptr [esi]
// 00731523  d91c24               fstp dword ptr [esp]
// 00731526  ffd5                 call ebp
// 00731528  d9e8                 fld1 
// 0073152a  83ec08               sub esp, 8
// 0073152d  d9542404             fst dword ptr [esp + 4]
// 00731531  d91c24               fstp dword ptr [esp]
// 00731534  ffd3                 call ebx
// 00731536  d9460c               fld dword ptr [esi + 0xc]
// 00731539  83ec08               sub esp, 8
// 0073153c  d95c2404             fstp dword ptr [esp + 4]
// 00731540  d94608               fld dword ptr [esi + 8]
// 00731543  d91c24               fstp dword ptr [esp]
// 00731546  ffd5                 call ebp
// 00731548  d9ee                 fldz 
// 0073154a  83ec08               sub esp, 8
// 0073154d  d95c2404             fstp dword ptr [esp + 4]
// 00731551  d9e8                 fld1 
// 00731553  d91c24               fstp dword ptr [esp]
// 00731556  ffd3                 call ebx
// 00731558  d94604               fld dword ptr [esi + 4]
// 0073155b  83ec08               sub esp, 8
// 0073155e  d95c2404             fstp dword ptr [esp + 4]
// 00731562  d94608               fld dword ptr [esi + 8]
// 00731565  d91c24               fstp dword ptr [esp]
// 00731568  ffd5                 call ebp
// 0073156a  8bcf                 mov ecx, edi
// 0073156c  e89f43d4ff           call 0x475910
// 00731571  83477008             add dword ptr [edi + 0x70], 8
// 00731575  5f                   pop edi
// 00731576  5e                   pop esi
// 00731577  5d                   pop ebp
// 00731578  5b                   pop ebx
// 00731579  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?fastRect2D@Draw@G3D@@SAXABVRect2D@2@PAVRenderDevice@2@ABVColor4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp

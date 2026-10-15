// roc 2008-06 005cc0c0  unit: RBX::Camera  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc0c0
//
// 005cc0c0  8b442408             mov eax, dword ptr [esp + 8]
// 005cc0c4  56                   push esi
// 005cc0c5  8bf1                 mov esi, ecx
// 005cc0c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cc0cb  50                   push eax
// 005cc0cc  51                   push ecx
// 005cc0cd  8d9674010000         lea edx, [esi + 0x174]
// 005cc0d3  52                   push edx
// 005cc0d4  e887250100           call 0x5de660
// 005cc0d9  d98698010000         fld dword ptr [esi + 0x198]
// 005cc0df  d8a6c8010000         fsub dword ptr [esi + 0x1c8]
// 005cc0e5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005cc0e9  d9869c010000         fld dword ptr [esi + 0x19c]
// 005cc0ef  83c40c               add esp, 0xc
// 005cc0f2  d8a6cc010000         fsub dword ptr [esi + 0x1cc]
// 005cc0f8  d986a0010000         fld dword ptr [esi + 0x1a0]
// 005cc0fe  d8a6d0010000         fsub dword ptr [esi + 0x1d0]
// 005cc104  5e                   pop esi
// 005cc105  d9c2                 fld st(2)
// 005cc107  decb                 fmulp st(3)
// 005cc109  dcc8                 fmul st(0), st(0)
// 005cc10b  dec2                 faddp st(2)
// 005cc10d  dcc8                 fmul st(0), st(0)
// 005cc10f  dec1                 faddp st(1)
// 005cc111  d9fa                 fsqrt 
// 005cc113  d918                 fstp dword ptr [eax]
// 005cc115  c20c00               ret 0xc
// library rbxgs/roc_camera_expanded_native_family_2b7088a7dcd2e755.cpp (function ?getHeadingElevationDistance@Camera@RBX@@AAEXAAM00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_expanded_native_family_2b7088a7dcd2e755.cpp

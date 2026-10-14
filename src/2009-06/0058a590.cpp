// roc 2009-06 0058a590  unit: seg_00580000  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058a590
//
// 0058a590  83ec10               sub esp, 0x10
// 0058a593  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058a597  d900                 fld dword ptr [eax]
// 0058a599  d944241c             fld dword ptr [esp + 0x1c]
// 0058a59d  dcc9                 fmul st(1), st(0)
// 0058a59f  d94004               fld dword ptr [eax + 4]
// 0058a5a2  d8c9                 fmul st(1)
// 0058a5a4  d94008               fld dword ptr [eax + 8]
// 0058a5a7  d8ca                 fmul st(2)
// 0058a5a9  d9400c               fld dword ptr [eax + 0xc]
// 0058a5ac  8b442414             mov eax, dword ptr [esp + 0x14]
// 0058a5b0  d8cb                 fmul st(3)
// 0058a5b2  d9e8                 fld1 
// 0058a5b4  d9c0                 fld st(0)
// 0058a5b6  dee5                 fsubrp st(5)
// 0058a5b8  d901                 fld dword ptr [ecx]
// 0058a5ba  d8cd                 fmul st(5)
// 0058a5bc  d94104               fld dword ptr [ecx + 4]
// 0058a5bf  d8ce                 fmul st(6)
// 0058a5c1  d95c2404             fstp dword ptr [esp + 4]
// 0058a5c5  d94108               fld dword ptr [ecx + 8]
// 0058a5c8  d8ce                 fmul st(6)
// 0058a5ca  d95c2408             fstp dword ptr [esp + 8]
// 0058a5ce  d9410c               fld dword ptr [ecx + 0xc]
// 0058a5d1  dece                 fmulp st(6)
// 0058a5d3  dec6                 faddp st(6)
// 0058a5d5  d9442404             fld dword ptr [esp + 4]
// 0058a5d9  dec4                 faddp st(4)
// 0058a5db  d9442408             fld dword ptr [esp + 8]
// 0058a5df  dec3                 faddp st(3)
// 0058a5e1  d9cc                 fxch st(4)
// 0058a5e3  dec1                 faddp st(1)
// 0058a5e5  d9c0                 fld st(0)
// 0058a5e7  d8c9                 fmul st(1)
// 0058a5e9  d9c2                 fld st(2)
// 0058a5eb  d8cb                 fmul st(3)
// 0058a5ed  dec1                 faddp st(1)
// 0058a5ef  d9c3                 fld st(3)
// 0058a5f1  d8cc                 fmul st(4)
// 0058a5f3  dec1                 faddp st(1)
// 0058a5f5  d9c5                 fld st(5)
// 0058a5f7  d8ce                 fmul st(6)
// 0058a5f9  dec1                 faddp st(1)
// 0058a5fb  d9fa                 fsqrt 
// 0058a5fd  defc                 fdivp st(4)
// 0058a5ff  d9c3                 fld st(3)
// 0058a601  decd                 fmulp st(5)
// 0058a603  d9cc                 fxch st(4)
// 0058a605  d918                 fstp dword ptr [eax]
// 0058a607  d9c2                 fld st(2)
// 0058a609  deca                 fmulp st(2)
// 0058a60b  d9c9                 fxch st(1)
// 0058a60d  d95804               fstp dword ptr [eax + 4]
// 0058a610  d8c9                 fmul st(1)
// 0058a612  d95808               fstp dword ptr [eax + 8]
// 0058a615  dec9                 fmulp st(1)
// 0058a617  d9580c               fstp dword ptr [eax + 0xc]
// 0058a61a  83c410               add esp, 0x10
// 0058a61d  c20c00               ret 0xc
// library g3d-6.09-rbx2008/G3Dcpp\Quat.cpp (function ?nlerp@Quat@G3D@@QBE?AV12@ABV12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Quat.cpp

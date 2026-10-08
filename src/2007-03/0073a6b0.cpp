// roc 2007-03 0073a6b0  unit: seg_00730000  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0073a6b0
//
// 0073a6b0  83ec10               sub esp, 0x10
// 0073a6b3  56                   push esi
// 0073a6b4  8bf1                 mov esi, ecx
// 0073a6b6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073a6ba  d94104               fld dword ptr [ecx + 4]
// 0073a6bd  8d442404             lea eax, [esp + 4]
// 0073a6c1  d95c2408             fstp dword ptr [esp + 8]
// 0073a6c5  50                   push eax
// 0073a6c6  d94108               fld dword ptr [ecx + 8]
// 0073a6c9  8d54240c             lea edx, [esp + 0xc]
// 0073a6cd  d95c2410             fstp dword ptr [esp + 0x10]
// 0073a6d1  52                   push edx
// 0073a6d2  d9410c               fld dword ptr [ecx + 0xc]
// 0073a6d5  d95c2418             fstp dword ptr [esp + 0x18]
// 0073a6d9  e8129fddff           call 0x5145f0
// 0073a6de  d94614               fld dword ptr [esi + 0x14]
// 0073a6e1  d944240c             fld dword ptr [esp + 0xc]
// 0073a6e5  d9c0                 fld st(0)
// 0073a6e7  deca                 fmulp st(2)
// 0073a6e9  d94610               fld dword ptr [esi + 0x10]
// 0073a6ec  d9442408             fld dword ptr [esp + 8]
// 0073a6f0  d9c0                 fld st(0)
// 0073a6f2  deca                 fmulp st(2)
// 0073a6f4  d9cb                 fxch st(3)
// 0073a6f6  dec1                 faddp st(1)
// 0073a6f8  d94618               fld dword ptr [esi + 0x18]
// 0073a6fb  d9442410             fld dword ptr [esp + 0x10]
// 0073a6ff  d9c0                 fld st(0)
// 0073a701  deca                 fmulp st(2)
// 0073a703  d9ca                 fxch st(2)
// 0073a705  dec1                 faddp st(1)
// 0073a707  d95c241c             fstp dword ptr [esp + 0x1c]
// 0073a70b  d9ee                 fldz 
// 0073a70d  d944241c             fld dword ptr [esp + 0x1c]
// 0073a711  dde1                 fucom st(1)
// 0073a713  dfe0                 fnstsw ax
// 0073a715  ddd9                 fstp st(1)
// 0073a717  f6c444               test ah, 0x44
// 0073a71a  7a2a                 jp 0x73a746
// 0073a71c  ddda                 fstp st(2)
// 0073a71e  ddda                 fstp st(2)
// 0073a720  ddd9                 fstp st(1)
// 0073a722  ddd8                 fstp st(0)
// 0073a724  e8a7d2daff           call 0x4e79d0
// 0073a729  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073a72d  d900                 fld dword ptr [eax]
// 0073a72f  d919                 fstp dword ptr [ecx]
// 0073a731  5e                   pop esi
// 0073a732  d94004               fld dword ptr [eax + 4]
// 0073a735  d95904               fstp dword ptr [ecx + 4]
// 0073a738  d94008               fld dword ptr [eax + 8]
// 0073a73b  8bc1                 mov eax, ecx
// 0073a73d  d95908               fstp dword ptr [ecx + 8]
// 0073a740  83c410               add esp, 0x10
// 0073a743  c20800               ret 8
// 0073a746  d94608               fld dword ptr [esi + 8]
// 0073a749  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073a74d  decb                 fmulp st(3)
// 0073a74f  d94604               fld dword ptr [esi + 4]
// 0073a752  decc                 fmulp st(4)
// 0073a754  d9ca                 fxch st(2)
// 0073a756  dec3                 faddp st(3)
// 0073a758  d84e0c               fmul dword ptr [esi + 0xc]
// 0073a75b  dec2                 faddp st(2)
// 0073a75d  d9c9                 fxch st(1)
// 0073a75f  d95c241c             fstp dword ptr [esp + 0x1c]
// 0073a763  d944241c             fld dword ptr [esp + 0x1c]
// 0073a767  d8442404             fadd dword ptr [esp + 4]
// 0073a76b  def1                 fdivrp st(1)
// 0073a76d  d9e0                 fchs 
// 0073a76f  d95c241c             fstp dword ptr [esp + 0x1c]
// 0073a773  d94610               fld dword ptr [esi + 0x10]
// 0073a776  d944241c             fld dword ptr [esp + 0x1c]
// 0073a77a  d9c0                 fld st(0)
// 0073a77c  deca                 fmulp st(2)
// 0073a77e  d9c9                 fxch st(1)
// 0073a780  d95c2408             fstp dword ptr [esp + 8]
// 0073a784  d94614               fld dword ptr [esi + 0x14]
// 0073a787  d8c9                 fmul st(1)
// 0073a789  d95c240c             fstp dword ptr [esp + 0xc]
// 0073a78d  d84e18               fmul dword ptr [esi + 0x18]
// 0073a790  d95c2410             fstp dword ptr [esp + 0x10]
// 0073a794  d94604               fld dword ptr [esi + 4]
// 0073a797  d8442408             fadd dword ptr [esp + 8]
// 0073a79b  d918                 fstp dword ptr [eax]
// 0073a79d  d94608               fld dword ptr [esi + 8]
// 0073a7a0  d844240c             fadd dword ptr [esp + 0xc]
// 0073a7a4  d95804               fstp dword ptr [eax + 4]
// 0073a7a7  d9460c               fld dword ptr [esi + 0xc]
// 0073a7aa  5e                   pop esi
// 0073a7ab  d844240c             fadd dword ptr [esp + 0xc]
// 0073a7af  d95808               fstp dword ptr [eax + 8]
// 0073a7b2  83c410               add esp, 0x10
// 0073a7b5  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Line.cpp (function ?intersection@Line@G3D@@QBE?AVVector3@2@ABVPlane@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Line.cpp

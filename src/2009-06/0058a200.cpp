// roc 2009-06 0058a200  unit: seg_00580000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058a200
//
// 0058a200  83ec0c               sub esp, 0xc
// 0058a203  56                   push esi
// 0058a204  8bf1                 mov esi, ecx
// 0058a206  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058a20a  d94104               fld dword ptr [ecx + 4]
// 0058a20d  8d442418             lea eax, [esp + 0x18]
// 0058a211  d95c2404             fstp dword ptr [esp + 4]
// 0058a215  50                   push eax
// 0058a216  d94108               fld dword ptr [ecx + 8]
// 0058a219  8d542408             lea edx, [esp + 8]
// 0058a21d  d95c240c             fstp dword ptr [esp + 0xc]
// 0058a221  52                   push edx
// 0058a222  d9410c               fld dword ptr [ecx + 0xc]
// 0058a225  d95c2414             fstp dword ptr [esp + 0x14]
// 0058a229  e802fbffff           call 0x589d30
// 0058a22e  d94618               fld dword ptr [esi + 0x18]
// 0058a231  d944240c             fld dword ptr [esp + 0xc]
// 0058a235  dcc9                 fmul st(1), st(0)
// 0058a237  d94614               fld dword ptr [esi + 0x14]
// 0058a23a  d9442408             fld dword ptr [esp + 8]
// 0058a23e  dcc9                 fmul st(1), st(0)
// 0058a240  d9cb                 fxch st(3)
// 0058a242  dec1                 faddp st(1)
// 0058a244  d94610               fld dword ptr [esi + 0x10]
// 0058a247  d9442404             fld dword ptr [esp + 4]
// 0058a24b  dcc9                 fmul st(1), st(0)
// 0058a24d  d9ca                 fxch st(2)
// 0058a24f  dec1                 faddp st(1)
// 0058a251  d9ee                 fldz 
// 0058a253  dde9                 fucomp st(1)
// 0058a255  dfe0                 fnstsw ax
// 0058a257  f6c444               test ah, 0x44
// 0058a25a  7a2a                 jp 0x58a286
// 0058a25c  ddd8                 fstp st(0)
// 0058a25e  ddd9                 fstp st(1)
// 0058a260  ddd9                 fstp st(1)
// 0058a262  ddd8                 fstp st(0)
// 0058a264  e8f78dfeff           call 0x573060
// 0058a269  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058a26d  d900                 fld dword ptr [eax]
// 0058a26f  d919                 fstp dword ptr [ecx]
// 0058a271  5e                   pop esi
// 0058a272  d94004               fld dword ptr [eax + 4]
// 0058a275  d95904               fstp dword ptr [ecx + 4]
// 0058a278  d94008               fld dword ptr [eax + 8]
// 0058a27b  8bc1                 mov eax, ecx
// 0058a27d  d95908               fstp dword ptr [ecx + 8]
// 0058a280  83c40c               add esp, 0xc
// 0058a283  c20800               ret 8
// 0058a286  d9460c               fld dword ptr [esi + 0xc]
// 0058a289  8b442414             mov eax, dword ptr [esp + 0x14]
// 0058a28d  decb                 fmulp st(3)
// 0058a28f  d94608               fld dword ptr [esi + 8]
// 0058a292  decc                 fmulp st(4)
// 0058a294  d9ca                 fxch st(2)
// 0058a296  dec3                 faddp st(3)
// 0058a298  d84e04               fmul dword ptr [esi + 4]
// 0058a29b  dec2                 faddp st(2)
// 0058a29d  d9c9                 fxch st(1)
// 0058a29f  d8442418             fadd dword ptr [esp + 0x18]
// 0058a2a3  def1                 fdivrp st(1)
// 0058a2a5  d9e0                 fchs 
// 0058a2a7  d94610               fld dword ptr [esi + 0x10]
// 0058a2aa  d8c9                 fmul st(1)
// 0058a2ac  d94614               fld dword ptr [esi + 0x14]
// 0058a2af  d8ca                 fmul st(2)
// 0058a2b1  d94618               fld dword ptr [esi + 0x18]
// 0058a2b4  decb                 fmulp st(3)
// 0058a2b6  d94604               fld dword ptr [esi + 4]
// 0058a2b9  dec2                 faddp st(2)
// 0058a2bb  d9c9                 fxch st(1)
// 0058a2bd  d918                 fstp dword ptr [eax]
// 0058a2bf  d84608               fadd dword ptr [esi + 8]
// 0058a2c2  d95804               fstp dword ptr [eax + 4]
// 0058a2c5  d8460c               fadd dword ptr [esi + 0xc]
// 0058a2c8  5e                   pop esi
// 0058a2c9  d95808               fstp dword ptr [eax + 8]
// 0058a2cc  83c40c               add esp, 0xc
// 0058a2cf  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Line.cpp (function ?intersection@Line@G3D@@QBE?AVVector3@2@ABVPlane@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Line.cpp

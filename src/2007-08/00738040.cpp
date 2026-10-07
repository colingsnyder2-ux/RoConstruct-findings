// roc 2007-08 00738040  unit: G3D::GFont  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00738040
//
// 00738040  83ec10               sub esp, 0x10
// 00738043  56                   push esi
// 00738044  8bf1                 mov esi, ecx
// 00738046  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073804a  d94104               fld dword ptr [ecx + 4]
// 0073804d  8d442404             lea eax, [esp + 4]
// 00738051  d95c2408             fstp dword ptr [esp + 8]
// 00738055  50                   push eax
// 00738056  d94108               fld dword ptr [ecx + 8]
// 00738059  8d54240c             lea edx, [esp + 0xc]
// 0073805d  d95c2410             fstp dword ptr [esp + 0x10]
// 00738061  52                   push edx
// 00738062  d9410c               fld dword ptr [ecx + 0xc]
// 00738065  d95c2418             fstp dword ptr [esp + 0x18]
// 00738069  e8c261deff           call 0x51e230
// 0073806e  d94614               fld dword ptr [esi + 0x14]
// 00738071  d944240c             fld dword ptr [esp + 0xc]
// 00738075  d9c0                 fld st(0)
// 00738077  deca                 fmulp st(2)
// 00738079  d94610               fld dword ptr [esi + 0x10]
// 0073807c  d9442408             fld dword ptr [esp + 8]
// 00738080  d9c0                 fld st(0)
// 00738082  deca                 fmulp st(2)
// 00738084  d9cb                 fxch st(3)
// 00738086  dec1                 faddp st(1)
// 00738088  d94618               fld dword ptr [esi + 0x18]
// 0073808b  d9442410             fld dword ptr [esp + 0x10]
// 0073808f  d9c0                 fld st(0)
// 00738091  deca                 fmulp st(2)
// 00738093  d9ca                 fxch st(2)
// 00738095  dec1                 faddp st(1)
// 00738097  d95c241c             fstp dword ptr [esp + 0x1c]
// 0073809b  d9ee                 fldz 
// 0073809d  d944241c             fld dword ptr [esp + 0x1c]
// 007380a1  dde1                 fucom st(1)
// 007380a3  dfe0                 fnstsw ax
// 007380a5  ddd9                 fstp st(1)
// 007380a7  f6c444               test ah, 0x44
// 007380aa  7a2a                 jp 0x7380d6
// 007380ac  ddda                 fstp st(2)
// 007380ae  ddda                 fstp st(2)
// 007380b0  ddd9                 fstp st(1)
// 007380b2  ddd8                 fstp st(0)
// 007380b4  e827bfdbff           call 0x4f3fe0
// 007380b9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007380bd  d900                 fld dword ptr [eax]
// 007380bf  d919                 fstp dword ptr [ecx]
// 007380c1  5e                   pop esi
// 007380c2  d94004               fld dword ptr [eax + 4]
// 007380c5  d95904               fstp dword ptr [ecx + 4]
// 007380c8  d94008               fld dword ptr [eax + 8]
// 007380cb  8bc1                 mov eax, ecx
// 007380cd  d95908               fstp dword ptr [ecx + 8]
// 007380d0  83c410               add esp, 0x10
// 007380d3  c20800               ret 8
// 007380d6  d94608               fld dword ptr [esi + 8]
// 007380d9  8b442418             mov eax, dword ptr [esp + 0x18]
// 007380dd  decb                 fmulp st(3)
// 007380df  d94604               fld dword ptr [esi + 4]
// 007380e2  decc                 fmulp st(4)
// 007380e4  d9ca                 fxch st(2)
// 007380e6  dec3                 faddp st(3)
// 007380e8  d84e0c               fmul dword ptr [esi + 0xc]
// 007380eb  dec2                 faddp st(2)
// 007380ed  d9c9                 fxch st(1)
// 007380ef  d95c241c             fstp dword ptr [esp + 0x1c]
// 007380f3  d944241c             fld dword ptr [esp + 0x1c]
// 007380f7  d8442404             fadd dword ptr [esp + 4]
// 007380fb  def1                 fdivrp st(1)
// 007380fd  d9e0                 fchs 
// 007380ff  d95c241c             fstp dword ptr [esp + 0x1c]
// 00738103  d94610               fld dword ptr [esi + 0x10]
// 00738106  d944241c             fld dword ptr [esp + 0x1c]
// 0073810a  d9c0                 fld st(0)
// 0073810c  deca                 fmulp st(2)
// 0073810e  d9c9                 fxch st(1)
// 00738110  d95c2408             fstp dword ptr [esp + 8]
// 00738114  d94614               fld dword ptr [esi + 0x14]
// 00738117  d8c9                 fmul st(1)
// 00738119  d95c240c             fstp dword ptr [esp + 0xc]
// 0073811d  d84e18               fmul dword ptr [esi + 0x18]
// 00738120  d95c2410             fstp dword ptr [esp + 0x10]
// 00738124  d94604               fld dword ptr [esi + 4]
// 00738127  d8442408             fadd dword ptr [esp + 8]
// 0073812b  d918                 fstp dword ptr [eax]
// 0073812d  d94608               fld dword ptr [esi + 8]
// 00738130  d844240c             fadd dword ptr [esp + 0xc]
// 00738134  d95804               fstp dword ptr [eax + 4]
// 00738137  d9460c               fld dword ptr [esi + 0xc]
// 0073813a  5e                   pop esi
// 0073813b  d844240c             fadd dword ptr [esp + 0xc]
// 0073813f  d95808               fstp dword ptr [eax + 8]
// 00738142  83c410               add esp, 0x10
// 00738145  c20800               ret 8
// library g3d-6.09/G3Dcpp\Line.cpp (function ?intersection@Line@G3D@@QBE?AVVector3@2@ABVPlane@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Line.cpp

// roc 2007-08 00730650  unit: seg_00730000  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00730650
//
// 00730650  83ec08               sub esp, 8
// 00730653  80791400             cmp byte ptr [ecx + 0x14], 0
// 00730657  53                   push ebx
// 00730658  56                   push esi
// 00730659  7413                 je 0x73066e
// 0073065b  833d58ac8b0000       cmp dword ptr [0x8bac58], 0
// 00730662  740a                 je 0x73066e
// 00730664  dd05b8067a00         fld qword ptr [0x7a06b8]
// 0073066a  b301                 mov bl, 1
// 0073066c  eb04                 jmp 0x730672
// 0073066e  d9e8                 fld1 
// 00730670  32db                 xor bl, bl
// 00730672  8b442418             mov eax, dword ptr [esp + 0x18]
// 00730676  dd5c2408             fstp qword ptr [esp + 8]
// 0073067a  8b742414             mov esi, dword ptr [esp + 0x14]
// 0073067e  50                   push eax
// 0073067f  8bce                 mov ecx, esi
// 00730681  e8eacdd9ff           call 0x4cd470
// 00730686  dd442408             fld qword ptr [esp + 8]
// 0073068a  84db                 test bl, bl
// 0073068c  d95c2418             fstp dword ptr [esp + 0x18]
// 00730690  d9442418             fld dword ptr [esp + 0x18]
// 00730694  d9542418             fst dword ptr [esp + 0x18]
// 00730698  d906                 fld dword ptr [esi]
// 0073069a  d9442418             fld dword ptr [esp + 0x18]
// 0073069e  d9c0                 fld st(0)
// 007306a0  deca                 fmulp st(2)
// 007306a2  d9c9                 fxch st(1)
// 007306a4  d91e                 fstp dword ptr [esi]
// 007306a6  d94604               fld dword ptr [esi + 4]
// 007306a9  d8c9                 fmul st(1)
// 007306ab  d95e04               fstp dword ptr [esi + 4]
// 007306ae  d84e08               fmul dword ptr [esi + 8]
// 007306b1  d95e08               fstp dword ptr [esi + 8]
// 007306b4  7408                 je 0x7306be
// 007306b6  dd05485b7900         fld qword ptr [0x795b48]
// 007306bc  eb02                 jmp 0x7306c0
// 007306be  d9e8                 fld1 
// 007306c0  d95c2418             fstp dword ptr [esp + 0x18]
// 007306c4  8bc6                 mov eax, esi
// 007306c6  d9460c               fld dword ptr [esi + 0xc]
// 007306c9  d9442418             fld dword ptr [esp + 0x18]
// 007306cd  d9c0                 fld st(0)
// 007306cf  deca                 fmulp st(2)
// 007306d1  d9c9                 fxch st(1)
// 007306d3  d95e0c               fstp dword ptr [esi + 0xc]
// 007306d6  d94610               fld dword ptr [esi + 0x10]
// 007306d9  d8c9                 fmul st(1)
// 007306db  d95e10               fstp dword ptr [esi + 0x10]
// 007306de  d84e14               fmul dword ptr [esi + 0x14]
// 007306e1  d95e14               fstp dword ptr [esi + 0x14]
// 007306e4  d9542418             fst dword ptr [esp + 0x18]
// 007306e8  d94618               fld dword ptr [esi + 0x18]
// 007306eb  d9442418             fld dword ptr [esp + 0x18]
// 007306ef  d9c0                 fld st(0)
// 007306f1  deca                 fmulp st(2)
// 007306f3  d9c9                 fxch st(1)
// 007306f5  d95e18               fstp dword ptr [esi + 0x18]
// 007306f8  d9c0                 fld st(0)
// 007306fa  d84e1c               fmul dword ptr [esi + 0x1c]
// 007306fd  d95e1c               fstp dword ptr [esi + 0x1c]
// 00730700  d84e20               fmul dword ptr [esi + 0x20]
// 00730703  d95e20               fstp dword ptr [esi + 0x20]
// 00730706  d9542418             fst dword ptr [esp + 0x18]
// 0073070a  d9442418             fld dword ptr [esp + 0x18]
// 0073070e  d9c0                 fld st(0)
// 00730710  d84e24               fmul dword ptr [esi + 0x24]
// 00730713  d95e24               fstp dword ptr [esi + 0x24]
// 00730716  d94628               fld dword ptr [esi + 0x28]
// 00730719  d8c9                 fmul st(1)
// 0073071b  d95e28               fstp dword ptr [esi + 0x28]
// 0073071e  d84e2c               fmul dword ptr [esi + 0x2c]
// 00730721  d95e2c               fstp dword ptr [esi + 0x2c]
// 00730724  d95c2418             fstp dword ptr [esp + 0x18]
// 00730728  d94630               fld dword ptr [esi + 0x30]
// 0073072b  d9442418             fld dword ptr [esp + 0x18]
// 0073072f  d9c0                 fld st(0)
// 00730731  deca                 fmulp st(2)
// 00730733  d9c9                 fxch st(1)
// 00730735  d95e30               fstp dword ptr [esi + 0x30]
// 00730738  d94634               fld dword ptr [esi + 0x34]
// 0073073b  d8c9                 fmul st(1)
// 0073073d  d95e34               fstp dword ptr [esi + 0x34]
// 00730740  d84e38               fmul dword ptr [esi + 0x38]
// 00730743  d95e38               fstp dword ptr [esi + 0x38]
// 00730746  5e                   pop esi
// 00730747  5b                   pop ebx
// 00730748  83c408               add esp, 8
// 0073074b  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?prepareLightingParameters@ToneMap@G3D@@QBE?AVLightingParameters@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp

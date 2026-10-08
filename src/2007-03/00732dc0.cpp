// roc 2007-03 00732dc0  unit: seg_00730000  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00732dc0
//
// 00732dc0  83ec08               sub esp, 8
// 00732dc3  80791400             cmp byte ptr [ecx + 0x14], 0
// 00732dc7  53                   push ebx
// 00732dc8  56                   push esi
// 00732dc9  7413                 je 0x732dde
// 00732dcb  833d6c518b0000       cmp dword ptr [0x8b516c], 0
// 00732dd2  740a                 je 0x732dde
// 00732dd4  dd05f8fd7900         fld qword ptr [0x79fdf8]
// 00732dda  b301                 mov bl, 1
// 00732ddc  eb04                 jmp 0x732de2
// 00732dde  d9e8                 fld1 
// 00732de0  32db                 xor bl, bl
// 00732de2  8b442418             mov eax, dword ptr [esp + 0x18]
// 00732de6  dd5c2408             fstp qword ptr [esp + 8]
// 00732dea  8b742414             mov esi, dword ptr [esp + 0x14]
// 00732dee  50                   push eax
// 00732def  8bce                 mov ecx, esi
// 00732df1  e83af2d8ff           call 0x4c2030
// 00732df6  dd442408             fld qword ptr [esp + 8]
// 00732dfa  84db                 test bl, bl
// 00732dfc  d95c2418             fstp dword ptr [esp + 0x18]
// 00732e00  d9442418             fld dword ptr [esp + 0x18]
// 00732e04  d9542418             fst dword ptr [esp + 0x18]
// 00732e08  d906                 fld dword ptr [esi]
// 00732e0a  d9442418             fld dword ptr [esp + 0x18]
// 00732e0e  d9c0                 fld st(0)
// 00732e10  deca                 fmulp st(2)
// 00732e12  d9c9                 fxch st(1)
// 00732e14  d91e                 fstp dword ptr [esi]
// 00732e16  d94604               fld dword ptr [esi + 4]
// 00732e19  d8c9                 fmul st(1)
// 00732e1b  d95e04               fstp dword ptr [esi + 4]
// 00732e1e  d84e08               fmul dword ptr [esi + 8]
// 00732e21  d95e08               fstp dword ptr [esi + 8]
// 00732e24  7408                 je 0x732e2e
// 00732e26  dd05584f7900         fld qword ptr [0x794f58]
// 00732e2c  eb02                 jmp 0x732e30
// 00732e2e  d9e8                 fld1 
// 00732e30  d95c2418             fstp dword ptr [esp + 0x18]
// 00732e34  8bc6                 mov eax, esi
// 00732e36  d9460c               fld dword ptr [esi + 0xc]
// 00732e39  d9442418             fld dword ptr [esp + 0x18]
// 00732e3d  d9c0                 fld st(0)
// 00732e3f  deca                 fmulp st(2)
// 00732e41  d9c9                 fxch st(1)
// 00732e43  d95e0c               fstp dword ptr [esi + 0xc]
// 00732e46  d94610               fld dword ptr [esi + 0x10]
// 00732e49  d8c9                 fmul st(1)
// 00732e4b  d95e10               fstp dword ptr [esi + 0x10]
// 00732e4e  d84e14               fmul dword ptr [esi + 0x14]
// 00732e51  d95e14               fstp dword ptr [esi + 0x14]
// 00732e54  d9542418             fst dword ptr [esp + 0x18]
// 00732e58  d94618               fld dword ptr [esi + 0x18]
// 00732e5b  d9442418             fld dword ptr [esp + 0x18]
// 00732e5f  d9c0                 fld st(0)
// 00732e61  deca                 fmulp st(2)
// 00732e63  d9c9                 fxch st(1)
// 00732e65  d95e18               fstp dword ptr [esi + 0x18]
// 00732e68  d9c0                 fld st(0)
// 00732e6a  d84e1c               fmul dword ptr [esi + 0x1c]
// 00732e6d  d95e1c               fstp dword ptr [esi + 0x1c]
// 00732e70  d84e20               fmul dword ptr [esi + 0x20]
// 00732e73  d95e20               fstp dword ptr [esi + 0x20]
// 00732e76  d9542418             fst dword ptr [esp + 0x18]
// 00732e7a  d9442418             fld dword ptr [esp + 0x18]
// 00732e7e  d9c0                 fld st(0)
// 00732e80  d84e24               fmul dword ptr [esi + 0x24]
// 00732e83  d95e24               fstp dword ptr [esi + 0x24]
// 00732e86  d94628               fld dword ptr [esi + 0x28]
// 00732e89  d8c9                 fmul st(1)
// 00732e8b  d95e28               fstp dword ptr [esi + 0x28]
// 00732e8e  d84e2c               fmul dword ptr [esi + 0x2c]
// 00732e91  d95e2c               fstp dword ptr [esi + 0x2c]
// 00732e94  d95c2418             fstp dword ptr [esp + 0x18]
// 00732e98  d94630               fld dword ptr [esi + 0x30]
// 00732e9b  d9442418             fld dword ptr [esp + 0x18]
// 00732e9f  d9c0                 fld st(0)
// 00732ea1  deca                 fmulp st(2)
// 00732ea3  d9c9                 fxch st(1)
// 00732ea5  d95e30               fstp dword ptr [esi + 0x30]
// 00732ea8  d94634               fld dword ptr [esi + 0x34]
// 00732eab  d8c9                 fmul st(1)
// 00732ead  d95e34               fstp dword ptr [esi + 0x34]
// 00732eb0  d84e38               fmul dword ptr [esi + 0x38]
// 00732eb3  d95e38               fstp dword ptr [esi + 0x38]
// 00732eb6  5e                   pop esi
// 00732eb7  5b                   pop ebx
// 00732eb8  83c408               add esp, 8
// 00732ebb  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?prepareLightingParameters@ToneMap@G3D@@QBE?AVLightingParameters@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp

// roc 2007-03 00513d90  unit: seg_00510000  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00513d90
//
// 00513d90  83ec40               sub esp, 0x40
// 00513d93  56                   push esi
// 00513d94  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00513d98  57                   push edi
// 00513d99  8d442424             lea eax, [esp + 0x24]
// 00513d9d  50                   push eax
// 00513d9e  8bf9                 mov edi, ecx
// 00513da0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00513da8  e8a3affeff           call 0x4fed50
// 00513dad  d94614               fld dword ptr [esi + 0x14]
// 00513db0  d94610               fld dword ptr [esi + 0x10]
// 00513db3  8d4c240c             lea ecx, [esp + 0xc]
// 00513db7  d94618               fld dword ptr [esi + 0x18]
// 00513dba  51                   push ecx
// 00513dbb  d94004               fld dword ptr [eax + 4]
// 00513dbe  83c604               add esi, 4
// 00513dc1  d8cb                 fmul st(3)
// 00513dc3  56                   push esi
// 00513dc4  d900                 fld dword ptr [eax]
// 00513dc6  8d542420             lea edx, [esp + 0x20]
// 00513dca  d8cb                 fmul st(3)
// 00513dcc  52                   push edx
// 00513dcd  8bcf                 mov ecx, edi
// 00513dcf  dec1                 faddp st(1)
// 00513dd1  d94008               fld dword ptr [eax + 8]
// 00513dd4  d8ca                 fmul st(2)
// 00513dd6  dec1                 faddp st(1)
// 00513dd8  d95c2418             fstp dword ptr [esp + 0x18]
// 00513ddc  d9400c               fld dword ptr [eax + 0xc]
// 00513ddf  d8ca                 fmul st(2)
// 00513de1  d94010               fld dword ptr [eax + 0x10]
// 00513de4  d8cc                 fmul st(4)
// 00513de6  dec1                 faddp st(1)
// 00513de8  d94014               fld dword ptr [eax + 0x14]
// 00513deb  d8ca                 fmul st(2)
// 00513ded  dec1                 faddp st(1)
// 00513def  d95c241c             fstp dword ptr [esp + 0x1c]
// 00513df3  d94018               fld dword ptr [eax + 0x18]
// 00513df6  deca                 fmulp st(2)
// 00513df8  d9401c               fld dword ptr [eax + 0x1c]
// 00513dfb  decb                 fmulp st(3)
// 00513dfd  d9c9                 fxch st(1)
// 00513dff  dec2                 faddp st(2)
// 00513e01  d84820               fmul dword ptr [eax + 0x20]
// 00513e04  dec1                 faddp st(1)
// 00513e06  d95c2420             fstp dword ptr [esp + 0x20]
// 00513e0a  e82171fdff           call 0x4eaf30
// 00513e0f  8b742450             mov esi, dword ptr [esp + 0x50]
// 00513e13  50                   push eax
// 00513e14  56                   push esi
// 00513e15  e836feffff           call 0x513c50
// 00513e1a  83c40c               add esp, 0xc
// 00513e1d  5f                   pop edi
// 00513e1e  8bc6                 mov eax, esi
// 00513e20  5e                   pop esi
// 00513e21  83c440               add esp, 0x40
// 00513e24  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\CoordinateFrame.cpp (function ?toObjectSpace@CoordinateFrame@G3D@@QBE?AVRay@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/CoordinateFrame.cpp

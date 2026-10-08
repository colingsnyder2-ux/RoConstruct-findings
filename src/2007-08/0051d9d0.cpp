// from server: 100% by auto
// roc 2007-08 0051d9d0  unit: seg_00510000  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051d9d0
//
// 0051d9d0  83ec40               sub esp, 0x40
// 0051d9d3  56                   push esi
// 0051d9d4  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0051d9d8  57                   push edi
// 0051d9d9  8d442424             lea eax, [esp + 0x24]
// 0051d9dd  50                   push eax
// 0051d9de  8bf9                 mov edi, ecx
// 0051d9e0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0051d9e8  e8b3bffeff           call 0x5099a0
// 0051d9ed  d94614               fld dword ptr [esi + 0x14]
// 0051d9f0  d94610               fld dword ptr [esi + 0x10]
// 0051d9f3  8d4c240c             lea ecx, [esp + 0xc]
// 0051d9f7  d94618               fld dword ptr [esi + 0x18]
// 0051d9fa  51                   push ecx
// 0051d9fb  d94004               fld dword ptr [eax + 4]
// 0051d9fe  83c604               add esi, 4
// 0051da01  d8cb                 fmul st(3)
// 0051da03  56                   push esi
// 0051da04  d900                 fld dword ptr [eax]
// 0051da06  8d542420             lea edx, [esp + 0x20]
// 0051da0a  d8cb                 fmul st(3)
// 0051da0c  52                   push edx
// 0051da0d  8bcf                 mov ecx, edi
// 0051da0f  dec1                 faddp st(1)
// 0051da11  d94008               fld dword ptr [eax + 8]
// 0051da14  d8ca                 fmul st(2)
// 0051da16  dec1                 faddp st(1)
// 0051da18  d95c2418             fstp dword ptr [esp + 0x18]
// 0051da1c  d9400c               fld dword ptr [eax + 0xc]
// 0051da1f  d8ca                 fmul st(2)
// 0051da21  d94010               fld dword ptr [eax + 0x10]
// 0051da24  d8cc                 fmul st(4)
// 0051da26  dec1                 faddp st(1)
// 0051da28  d94014               fld dword ptr [eax + 0x14]
// 0051da2b  d8ca                 fmul st(2)
// 0051da2d  dec1                 faddp st(1)
// 0051da2f  d95c241c             fstp dword ptr [esp + 0x1c]
// 0051da33  d94018               fld dword ptr [eax + 0x18]
// 0051da36  deca                 fmulp st(2)
// 0051da38  d9401c               fld dword ptr [eax + 0x1c]
// 0051da3b  decb                 fmulp st(3)
// 0051da3d  d9c9                 fxch st(1)
// 0051da3f  dec2                 faddp st(2)
// 0051da41  d84820               fmul dword ptr [eax + 0x20]
// 0051da44  dec1                 faddp st(1)
// 0051da46  d95c2420             fstp dword ptr [esp + 0x20]
// 0051da4a  e8b19afdff           call 0x4f7500
// 0051da4f  8b742450             mov esi, dword ptr [esp + 0x50]
// 0051da53  50                   push eax
// 0051da54  56                   push esi
// 0051da55  e836feffff           call 0x51d890
// 0051da5a  83c40c               add esp, 0xc
// 0051da5d  5f                   pop edi
// 0051da5e  8bc6                 mov eax, esi
// 0051da60  5e                   pop esi
// 0051da61  83c440               add esp, 0x40
// 0051da64  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?toObjectSpace@CoordinateFrame@G3D@@QBE?AVRay@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp

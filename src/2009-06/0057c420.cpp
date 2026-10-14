// roc 2009-06 0057c420  unit: G3D::TextInput::WrongSymbol  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057c420
//
// 0057c420  83ec40               sub esp, 0x40
// 0057c423  56                   push esi
// 0057c424  57                   push edi
// 0057c425  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0057c429  8d442424             lea eax, [esp + 0x24]
// 0057c42d  50                   push eax
// 0057c42e  8bf1                 mov esi, ecx
// 0057c430  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057c438  e843baffff           call 0x577e80
// 0057c43d  d94008               fld dword ptr [eax + 8]
// 0057c440  d84f18               fmul dword ptr [edi + 0x18]
// 0057c443  8d4c240c             lea ecx, [esp + 0xc]
// 0057c447  d94004               fld dword ptr [eax + 4]
// 0057c44a  51                   push ecx
// 0057c44b  d84f14               fmul dword ptr [edi + 0x14]
// 0057c44e  8d54241c             lea edx, [esp + 0x1c]
// 0057c452  52                   push edx
// 0057c453  dec1                 faddp st(1)
// 0057c455  d900                 fld dword ptr [eax]
// 0057c457  d84f10               fmul dword ptr [edi + 0x10]
// 0057c45a  dec1                 faddp st(1)
// 0057c45c  d95c2414             fstp dword ptr [esp + 0x14]
// 0057c460  d94014               fld dword ptr [eax + 0x14]
// 0057c463  d84f18               fmul dword ptr [edi + 0x18]
// 0057c466  d94010               fld dword ptr [eax + 0x10]
// 0057c469  d84f14               fmul dword ptr [edi + 0x14]
// 0057c46c  dec1                 faddp st(1)
// 0057c46e  d9400c               fld dword ptr [eax + 0xc]
// 0057c471  d84f10               fmul dword ptr [edi + 0x10]
// 0057c474  dec1                 faddp st(1)
// 0057c476  d95c2418             fstp dword ptr [esp + 0x18]
// 0057c47a  d94020               fld dword ptr [eax + 0x20]
// 0057c47d  d84f18               fmul dword ptr [edi + 0x18]
// 0057c480  d9401c               fld dword ptr [eax + 0x1c]
// 0057c483  d84f14               fmul dword ptr [edi + 0x14]
// 0057c486  dec1                 faddp st(1)
// 0057c488  d94018               fld dword ptr [eax + 0x18]
// 0057c48b  d84f10               fmul dword ptr [edi + 0x10]
// 0057c48e  dec1                 faddp st(1)
// 0057c490  d95c241c             fstp dword ptr [esp + 0x1c]
// 0057c494  d94704               fld dword ptr [edi + 4]
// 0057c497  d86624               fsub dword ptr [esi + 0x24]
// 0057c49a  d94708               fld dword ptr [edi + 8]
// 0057c49d  d86628               fsub dword ptr [esi + 0x28]
// 0057c4a0  d9470c               fld dword ptr [edi + 0xc]
// 0057c4a3  d8662c               fsub dword ptr [esi + 0x2c]
// 0057c4a6  d94618               fld dword ptr [esi + 0x18]
// 0057c4a9  d8c9                 fmul st(1)
// 0057c4ab  d9460c               fld dword ptr [esi + 0xc]
// 0057c4ae  d8cb                 fmul st(3)
// 0057c4b0  dec1                 faddp st(1)
// 0057c4b2  d906                 fld dword ptr [esi]
// 0057c4b4  d8cc                 fmul st(4)
// 0057c4b6  dec1                 faddp st(1)
// 0057c4b8  d95c2420             fstp dword ptr [esp + 0x20]
// 0057c4bc  d9461c               fld dword ptr [esi + 0x1c]
// 0057c4bf  d8c9                 fmul st(1)
// 0057c4c1  d94610               fld dword ptr [esi + 0x10]
// 0057c4c4  d8cb                 fmul st(3)
// 0057c4c6  dec1                 faddp st(1)
// 0057c4c8  d94604               fld dword ptr [esi + 4]
// 0057c4cb  d8cc                 fmul st(4)
// 0057c4cd  dec1                 faddp st(1)
// 0057c4cf  d95c2424             fstp dword ptr [esp + 0x24]
// 0057c4d3  d84e20               fmul dword ptr [esi + 0x20]
// 0057c4d6  d94614               fld dword ptr [esi + 0x14]
// 0057c4d9  deca                 fmulp st(2)
// 0057c4db  dec1                 faddp st(1)
// 0057c4dd  d94608               fld dword ptr [esi + 8]
// 0057c4e0  8b742454             mov esi, dword ptr [esp + 0x54]
// 0057c4e4  deca                 fmulp st(2)
// 0057c4e6  56                   push esi
// 0057c4e7  dec1                 faddp st(1)
// 0057c4e9  d95c242c             fstp dword ptr [esp + 0x2c]
// 0057c4ed  e8bea3ffff           call 0x5768b0
// 0057c4f2  83c40c               add esp, 0xc
// 0057c4f5  5f                   pop edi
// 0057c4f6  8bc6                 mov eax, esi
// 0057c4f8  5e                   pop esi
// 0057c4f9  83c440               add esp, 0x40
// 0057c4fc  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\CoordinateFrame.cpp (function ?toObjectSpace@CoordinateFrame@G3D@@QBE?AVRay@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CoordinateFrame.cpp

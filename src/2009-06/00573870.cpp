// from server: 100% by auto
// roc 2009-06 00573870  unit: G3D::GCamera  size: 450 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00573870
//
// 00573870  83ec40               sub esp, 0x40
// 00573873  53                   push ebx
// 00573874  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 00573878  55                   push ebp
// 00573879  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0057387d  56                   push esi
// 0057387e  8bf1                 mov esi, ecx
// 00573880  8b06                 mov eax, dword ptr [esi]
// 00573882  57                   push edi
// 00573883  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00573887  3bf8                 cmp edi, eax
// 00573889  7210                 jb 0x57389b
// 0057388b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057388e  c1e104               shl ecx, 4
// 00573891  03c8                 add ecx, eax
// 00573893  3bf9                 cmp edi, ecx
// 00573895  0f8201010000         jb 0x57399c
// 0057389b  3bd8                 cmp ebx, eax
// 0057389d  7210                 jb 0x5738af
// 0057389f  8b5604               mov edx, dword ptr [esi + 4]
// 005738a2  c1e204               shl edx, 4
// 005738a5  03d0                 add edx, eax
// 005738a7  3bda                 cmp ebx, edx
// 005738a9  0f82ed000000         jb 0x57399c
// 005738af  3be8                 cmp ebp, eax
// 005738b1  7210                 jb 0x5738c3
// 005738b3  8b4e04               mov ecx, dword ptr [esi + 4]
// 005738b6  c1e104               shl ecx, 4
// 005738b9  03c8                 add ecx, eax
// 005738bb  3be9                 cmp ebp, ecx
// 005738bd  0f82d9000000         jb 0x57399c
// 005738c3  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005738c7  3bc8                 cmp ecx, eax
// 005738c9  7210                 jb 0x5738db
// 005738cb  8b5604               mov edx, dword ptr [esi + 4]
// 005738ce  c1e204               shl edx, 4
// 005738d1  03d0                 add edx, eax
// 005738d3  3bca                 cmp ecx, edx
// 005738d5  0f82c5000000         jb 0x5739a0
// 005738db  8b4e04               mov ecx, dword ptr [esi + 4]
// 005738de  8d5103               lea edx, [ecx + 3]
// 005738e1  3b5608               cmp edx, dword ptr [esi + 8]
// 005738e4  7d56                 jge 0x57393c
// 005738e6  c1e104               shl ecx, 4
// 005738e9  03c8                 add ecx, eax
// 005738eb  7406                 je 0x5738f3
// 005738ed  57                   push edi
// 005738ee  e83d20f1ff           call 0x485930
// 005738f3  8b4e04               mov ecx, dword ptr [esi + 4]
// 005738f6  41                   inc ecx
// 005738f7  c1e104               shl ecx, 4
// 005738fa  030e                 add ecx, dword ptr [esi]
// 005738fc  7406                 je 0x573904
// 005738fe  53                   push ebx
// 005738ff  e82c20f1ff           call 0x485930
// 00573904  8b4e04               mov ecx, dword ptr [esi + 4]
// 00573907  83c102               add ecx, 2
// 0057390a  c1e104               shl ecx, 4
// 0057390d  030e                 add ecx, dword ptr [esi]
// 0057390f  7406                 je 0x573917
// 00573911  55                   push ebp
// 00573912  e81920f1ff           call 0x485930
// 00573917  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057391a  83c103               add ecx, 3
// 0057391d  c1e104               shl ecx, 4
// 00573920  030e                 add ecx, dword ptr [esi]
// 00573922  740a                 je 0x57392e
// 00573924  8b442460             mov eax, dword ptr [esp + 0x60]
// 00573928  50                   push eax
// 00573929  e80220f1ff           call 0x485930
// 0057392e  83460404             add dword ptr [esi + 4], 4
// 00573932  5f                   pop edi
// 00573933  5e                   pop esi
// 00573934  5d                   pop ebp
// 00573935  5b                   pop ebx
// 00573936  83c440               add esp, 0x40
// 00573939  c21000               ret 0x10
// 0057393c  83c104               add ecx, 4
// 0057393f  6a00                 push 0
// 00573941  51                   push ecx
// 00573942  8bce                 mov ecx, esi
// 00573944  e807fdffff           call 0x573650
// 00573949  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057394c  83e904               sub ecx, 4
// 0057394f  c1e104               shl ecx, 4
// 00573952  030e                 add ecx, dword ptr [esi]
// 00573954  57                   push edi
// 00573955  e8d61ff1ff           call 0x485930
// 0057395a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057395d  83e903               sub ecx, 3
// 00573960  c1e104               shl ecx, 4
// 00573963  030e                 add ecx, dword ptr [esi]
// 00573965  53                   push ebx
// 00573966  e8c51ff1ff           call 0x485930
// 0057396b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057396e  83e902               sub ecx, 2
// 00573971  c1e104               shl ecx, 4
// 00573974  030e                 add ecx, dword ptr [esi]
// 00573976  55                   push ebp
// 00573977  e8b41ff1ff           call 0x485930
// 0057397c  8b5604               mov edx, dword ptr [esi + 4]
// 0057397f  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00573983  8b06                 mov eax, dword ptr [esi]
// 00573985  c1e204               shl edx, 4
// 00573988  51                   push ecx
// 00573989  8d4c02f0             lea ecx, [edx + eax - 0x10]
// 0057398d  e89e1ff1ff           call 0x485930
// 00573992  5f                   pop edi
// 00573993  5e                   pop esi
// 00573994  5d                   pop ebp
// 00573995  5b                   pop ebx
// 00573996  83c440               add esp, 0x40
// 00573999  c21000               ret 0x10
// 0057399c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005739a0  d907                 fld dword ptr [edi]
// 005739a2  8d542420             lea edx, [esp + 0x20]
// 005739a6  d95c2440             fstp dword ptr [esp + 0x40]
// 005739aa  8d442430             lea eax, [esp + 0x30]
// 005739ae  d94704               fld dword ptr [edi + 4]
// 005739b1  d95c2444             fstp dword ptr [esp + 0x44]
// 005739b5  d94708               fld dword ptr [edi + 8]
// 005739b8  d95c2448             fstp dword ptr [esp + 0x48]
// 005739bc  d9470c               fld dword ptr [edi + 0xc]
// 005739bf  d95c244c             fstp dword ptr [esp + 0x4c]
// 005739c3  d903                 fld dword ptr [ebx]
// 005739c5  d95c2430             fstp dword ptr [esp + 0x30]
// 005739c9  d94304               fld dword ptr [ebx + 4]
// 005739cc  d95c2434             fstp dword ptr [esp + 0x34]
// 005739d0  d94308               fld dword ptr [ebx + 8]
// 005739d3  d95c2438             fstp dword ptr [esp + 0x38]
// 005739d7  d9430c               fld dword ptr [ebx + 0xc]
// 005739da  d95c243c             fstp dword ptr [esp + 0x3c]
// 005739de  d94500               fld dword ptr [ebp]
// 005739e1  d95c2420             fstp dword ptr [esp + 0x20]
// 005739e5  d94504               fld dword ptr [ebp + 4]
// 005739e8  d95c2424             fstp dword ptr [esp + 0x24]
// 005739ec  d94508               fld dword ptr [ebp + 8]
// 005739ef  d95c2428             fstp dword ptr [esp + 0x28]
// 005739f3  d9450c               fld dword ptr [ebp + 0xc]
// 005739f6  d95c242c             fstp dword ptr [esp + 0x2c]
// 005739fa  d901                 fld dword ptr [ecx]
// 005739fc  d95c2410             fstp dword ptr [esp + 0x10]
// 00573a00  d94104               fld dword ptr [ecx + 4]
// 00573a03  d95c2414             fstp dword ptr [esp + 0x14]
// 00573a07  d94108               fld dword ptr [ecx + 8]
// 00573a0a  d95c2418             fstp dword ptr [esp + 0x18]
// 00573a0e  d9410c               fld dword ptr [ecx + 0xc]
// 00573a11  8d4c2410             lea ecx, [esp + 0x10]
// 00573a15  51                   push ecx
// 00573a16  d95c2420             fstp dword ptr [esp + 0x20]
// 00573a1a  52                   push edx
// 00573a1b  50                   push eax
// 00573a1c  8d4c244c             lea ecx, [esp + 0x4c]
// 00573a20  51                   push ecx
// 00573a21  8bce                 mov ecx, esi
// 00573a23  e848feffff           call 0x573870
// 00573a28  5f                   pop edi
// 00573a29  5e                   pop esi
// 00573a2a  5d                   pop ebp
// 00573a2b  5b                   pop ebx
// 00573a2c  83c440               add esp, 0x40
// 00573a2f  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?append@?$Array@VVector4@G3D@@@G3D@@QAEXABVVector4@2@000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp

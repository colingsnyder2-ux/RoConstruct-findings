// from server: 100% by auto
// roc 2008-06 00511070  unit: G3D::GCamera  size: 450 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00511070
//
// 00511070  83ec40               sub esp, 0x40
// 00511073  53                   push ebx
// 00511074  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 00511078  55                   push ebp
// 00511079  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0051107d  56                   push esi
// 0051107e  8bf1                 mov esi, ecx
// 00511080  8b06                 mov eax, dword ptr [esi]
// 00511082  57                   push edi
// 00511083  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00511087  3bf8                 cmp edi, eax
// 00511089  7210                 jb 0x51109b
// 0051108b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0051108e  c1e104               shl ecx, 4
// 00511091  03c8                 add ecx, eax
// 00511093  3bf9                 cmp edi, ecx
// 00511095  0f8201010000         jb 0x51119c
// 0051109b  3bd8                 cmp ebx, eax
// 0051109d  7210                 jb 0x5110af
// 0051109f  8b5604               mov edx, dword ptr [esi + 4]
// 005110a2  c1e204               shl edx, 4
// 005110a5  03d0                 add edx, eax
// 005110a7  3bda                 cmp ebx, edx
// 005110a9  0f82ed000000         jb 0x51119c
// 005110af  3be8                 cmp ebp, eax
// 005110b1  7210                 jb 0x5110c3
// 005110b3  8b4e04               mov ecx, dword ptr [esi + 4]
// 005110b6  c1e104               shl ecx, 4
// 005110b9  03c8                 add ecx, eax
// 005110bb  3be9                 cmp ebp, ecx
// 005110bd  0f82d9000000         jb 0x51119c
// 005110c3  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005110c7  3bc8                 cmp ecx, eax
// 005110c9  7210                 jb 0x5110db
// 005110cb  8b5604               mov edx, dword ptr [esi + 4]
// 005110ce  c1e204               shl edx, 4
// 005110d1  03d0                 add edx, eax
// 005110d3  3bca                 cmp ecx, edx
// 005110d5  0f82c5000000         jb 0x5111a0
// 005110db  8b4e04               mov ecx, dword ptr [esi + 4]
// 005110de  8d5103               lea edx, [ecx + 3]
// 005110e1  3b5608               cmp edx, dword ptr [esi + 8]
// 005110e4  7d56                 jge 0x51113c
// 005110e6  c1e104               shl ecx, 4
// 005110e9  03c8                 add ecx, eax
// 005110eb  7406                 je 0x5110f3
// 005110ed  57                   push edi
// 005110ee  e85d54f6ff           call 0x476550
// 005110f3  8b4e04               mov ecx, dword ptr [esi + 4]
// 005110f6  41                   inc ecx
// 005110f7  c1e104               shl ecx, 4
// 005110fa  030e                 add ecx, dword ptr [esi]
// 005110fc  7406                 je 0x511104
// 005110fe  53                   push ebx
// 005110ff  e84c54f6ff           call 0x476550
// 00511104  8b4e04               mov ecx, dword ptr [esi + 4]
// 00511107  83c102               add ecx, 2
// 0051110a  c1e104               shl ecx, 4
// 0051110d  030e                 add ecx, dword ptr [esi]
// 0051110f  7406                 je 0x511117
// 00511111  55                   push ebp
// 00511112  e83954f6ff           call 0x476550
// 00511117  8b4e04               mov ecx, dword ptr [esi + 4]
// 0051111a  83c103               add ecx, 3
// 0051111d  c1e104               shl ecx, 4
// 00511120  030e                 add ecx, dword ptr [esi]
// 00511122  740a                 je 0x51112e
// 00511124  8b442460             mov eax, dword ptr [esp + 0x60]
// 00511128  50                   push eax
// 00511129  e82254f6ff           call 0x476550
// 0051112e  83460404             add dword ptr [esi + 4], 4
// 00511132  5f                   pop edi
// 00511133  5e                   pop esi
// 00511134  5d                   pop ebp
// 00511135  5b                   pop ebx
// 00511136  83c440               add esp, 0x40
// 00511139  c21000               ret 0x10
// 0051113c  83c104               add ecx, 4
// 0051113f  6a00                 push 0
// 00511141  51                   push ecx
// 00511142  8bce                 mov ecx, esi
// 00511144  e807fdffff           call 0x510e50
// 00511149  8b4e04               mov ecx, dword ptr [esi + 4]
// 0051114c  83e904               sub ecx, 4
// 0051114f  c1e104               shl ecx, 4
// 00511152  030e                 add ecx, dword ptr [esi]
// 00511154  57                   push edi
// 00511155  e8f653f6ff           call 0x476550
// 0051115a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0051115d  83e903               sub ecx, 3
// 00511160  c1e104               shl ecx, 4
// 00511163  030e                 add ecx, dword ptr [esi]
// 00511165  53                   push ebx
// 00511166  e8e553f6ff           call 0x476550
// 0051116b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0051116e  83e902               sub ecx, 2
// 00511171  c1e104               shl ecx, 4
// 00511174  030e                 add ecx, dword ptr [esi]
// 00511176  55                   push ebp
// 00511177  e8d453f6ff           call 0x476550
// 0051117c  8b5604               mov edx, dword ptr [esi + 4]
// 0051117f  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00511183  8b06                 mov eax, dword ptr [esi]
// 00511185  c1e204               shl edx, 4
// 00511188  51                   push ecx
// 00511189  8d4c02f0             lea ecx, [edx + eax - 0x10]
// 0051118d  e8be53f6ff           call 0x476550
// 00511192  5f                   pop edi
// 00511193  5e                   pop esi
// 00511194  5d                   pop ebp
// 00511195  5b                   pop ebx
// 00511196  83c440               add esp, 0x40
// 00511199  c21000               ret 0x10
// 0051119c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005111a0  d907                 fld dword ptr [edi]
// 005111a2  8d542420             lea edx, [esp + 0x20]
// 005111a6  d95c2440             fstp dword ptr [esp + 0x40]
// 005111aa  8d442430             lea eax, [esp + 0x30]
// 005111ae  d94704               fld dword ptr [edi + 4]
// 005111b1  d95c2444             fstp dword ptr [esp + 0x44]
// 005111b5  d94708               fld dword ptr [edi + 8]
// 005111b8  d95c2448             fstp dword ptr [esp + 0x48]
// 005111bc  d9470c               fld dword ptr [edi + 0xc]
// 005111bf  d95c244c             fstp dword ptr [esp + 0x4c]
// 005111c3  d903                 fld dword ptr [ebx]
// 005111c5  d95c2430             fstp dword ptr [esp + 0x30]
// 005111c9  d94304               fld dword ptr [ebx + 4]
// 005111cc  d95c2434             fstp dword ptr [esp + 0x34]
// 005111d0  d94308               fld dword ptr [ebx + 8]
// 005111d3  d95c2438             fstp dword ptr [esp + 0x38]
// 005111d7  d9430c               fld dword ptr [ebx + 0xc]
// 005111da  d95c243c             fstp dword ptr [esp + 0x3c]
// 005111de  d94500               fld dword ptr [ebp]
// 005111e1  d95c2420             fstp dword ptr [esp + 0x20]
// 005111e5  d94504               fld dword ptr [ebp + 4]
// 005111e8  d95c2424             fstp dword ptr [esp + 0x24]
// 005111ec  d94508               fld dword ptr [ebp + 8]
// 005111ef  d95c2428             fstp dword ptr [esp + 0x28]
// 005111f3  d9450c               fld dword ptr [ebp + 0xc]
// 005111f6  d95c242c             fstp dword ptr [esp + 0x2c]
// 005111fa  d901                 fld dword ptr [ecx]
// 005111fc  d95c2410             fstp dword ptr [esp + 0x10]
// 00511200  d94104               fld dword ptr [ecx + 4]
// 00511203  d95c2414             fstp dword ptr [esp + 0x14]
// 00511207  d94108               fld dword ptr [ecx + 8]
// 0051120a  d95c2418             fstp dword ptr [esp + 0x18]
// 0051120e  d9410c               fld dword ptr [ecx + 0xc]
// 00511211  8d4c2410             lea ecx, [esp + 0x10]
// 00511215  51                   push ecx
// 00511216  d95c2420             fstp dword ptr [esp + 0x20]
// 0051121a  52                   push edx
// 0051121b  50                   push eax
// 0051121c  8d4c244c             lea ecx, [esp + 0x4c]
// 00511220  51                   push ecx
// 00511221  8bce                 mov ecx, esi
// 00511223  e848feffff           call 0x511070
// 00511228  5f                   pop edi
// 00511229  5e                   pop esi
// 0051122a  5d                   pop ebp
// 0051122b  5b                   pop ebx
// 0051122c  83c440               add esp, 0x40
// 0051122f  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?append@?$Array@VVector4@G3D@@@G3D@@QAEXABVVector4@2@000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp

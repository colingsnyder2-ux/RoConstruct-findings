// from server: 100% by auto
// roc 2007-08 005073c0  unit: G3D::GCamera  size: 452 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005073c0
//
// 005073c0  83ec40               sub esp, 0x40
// 005073c3  53                   push ebx
// 005073c4  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 005073c8  55                   push ebp
// 005073c9  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 005073cd  56                   push esi
// 005073ce  8bf1                 mov esi, ecx
// 005073d0  8b06                 mov eax, dword ptr [esi]
// 005073d2  57                   push edi
// 005073d3  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 005073d7  3bf8                 cmp edi, eax
// 005073d9  7210                 jb 0x5073eb
// 005073db  8b4e04               mov ecx, dword ptr [esi + 4]
// 005073de  c1e104               shl ecx, 4
// 005073e1  03c8                 add ecx, eax
// 005073e3  3bf9                 cmp edi, ecx
// 005073e5  0f8203010000         jb 0x5074ee
// 005073eb  3bd8                 cmp ebx, eax
// 005073ed  7210                 jb 0x5073ff
// 005073ef  8b5604               mov edx, dword ptr [esi + 4]
// 005073f2  c1e204               shl edx, 4
// 005073f5  03d0                 add edx, eax
// 005073f7  3bda                 cmp ebx, edx
// 005073f9  0f82ef000000         jb 0x5074ee
// 005073ff  3be8                 cmp ebp, eax
// 00507401  7210                 jb 0x507413
// 00507403  8b4e04               mov ecx, dword ptr [esi + 4]
// 00507406  c1e104               shl ecx, 4
// 00507409  03c8                 add ecx, eax
// 0050740b  3be9                 cmp ebp, ecx
// 0050740d  0f82db000000         jb 0x5074ee
// 00507413  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00507417  3bc8                 cmp ecx, eax
// 00507419  7210                 jb 0x50742b
// 0050741b  8b5604               mov edx, dword ptr [esi + 4]
// 0050741e  c1e204               shl edx, 4
// 00507421  03d0                 add edx, eax
// 00507423  3bca                 cmp ecx, edx
// 00507425  0f82c7000000         jb 0x5074f2
// 0050742b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050742e  8d5103               lea edx, [ecx + 3]
// 00507431  3b5608               cmp edx, dword ptr [esi + 8]
// 00507434  7d58                 jge 0x50748e
// 00507436  c1e104               shl ecx, 4
// 00507439  03c8                 add ecx, eax
// 0050743b  7406                 je 0x507443
// 0050743d  57                   push edi
// 0050743e  e81dbcf6ff           call 0x473060
// 00507443  8b4e04               mov ecx, dword ptr [esi + 4]
// 00507446  83c101               add ecx, 1
// 00507449  c1e104               shl ecx, 4
// 0050744c  030e                 add ecx, dword ptr [esi]
// 0050744e  7406                 je 0x507456
// 00507450  53                   push ebx
// 00507451  e80abcf6ff           call 0x473060
// 00507456  8b4e04               mov ecx, dword ptr [esi + 4]
// 00507459  83c102               add ecx, 2
// 0050745c  c1e104               shl ecx, 4
// 0050745f  030e                 add ecx, dword ptr [esi]
// 00507461  7406                 je 0x507469
// 00507463  55                   push ebp
// 00507464  e8f7bbf6ff           call 0x473060
// 00507469  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050746c  83c103               add ecx, 3
// 0050746f  c1e104               shl ecx, 4
// 00507472  030e                 add ecx, dword ptr [esi]
// 00507474  740a                 je 0x507480
// 00507476  8b442460             mov eax, dword ptr [esp + 0x60]
// 0050747a  50                   push eax
// 0050747b  e8e0bbf6ff           call 0x473060
// 00507480  83460404             add dword ptr [esi + 4], 4
// 00507484  5f                   pop edi
// 00507485  5e                   pop esi
// 00507486  5d                   pop ebp
// 00507487  5b                   pop ebx
// 00507488  83c440               add esp, 0x40
// 0050748b  c21000               ret 0x10
// 0050748e  83c104               add ecx, 4
// 00507491  6a00                 push 0
// 00507493  51                   push ecx
// 00507494  8bce                 mov ecx, esi
// 00507496  e8f5fcffff           call 0x507190
// 0050749b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050749e  83e904               sub ecx, 4
// 005074a1  c1e104               shl ecx, 4
// 005074a4  030e                 add ecx, dword ptr [esi]
// 005074a6  57                   push edi
// 005074a7  e8b4bbf6ff           call 0x473060
// 005074ac  8b4e04               mov ecx, dword ptr [esi + 4]
// 005074af  83e903               sub ecx, 3
// 005074b2  c1e104               shl ecx, 4
// 005074b5  030e                 add ecx, dword ptr [esi]
// 005074b7  53                   push ebx
// 005074b8  e8a3bbf6ff           call 0x473060
// 005074bd  8b4e04               mov ecx, dword ptr [esi + 4]
// 005074c0  83e902               sub ecx, 2
// 005074c3  c1e104               shl ecx, 4
// 005074c6  030e                 add ecx, dword ptr [esi]
// 005074c8  55                   push ebp
// 005074c9  e892bbf6ff           call 0x473060
// 005074ce  8b5604               mov edx, dword ptr [esi + 4]
// 005074d1  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005074d5  8b06                 mov eax, dword ptr [esi]
// 005074d7  c1e204               shl edx, 4
// 005074da  51                   push ecx
// 005074db  8d4c02f0             lea ecx, [edx + eax - 0x10]
// 005074df  e87cbbf6ff           call 0x473060
// 005074e4  5f                   pop edi
// 005074e5  5e                   pop esi
// 005074e6  5d                   pop ebp
// 005074e7  5b                   pop ebx
// 005074e8  83c440               add esp, 0x40
// 005074eb  c21000               ret 0x10
// 005074ee  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005074f2  d907                 fld dword ptr [edi]
// 005074f4  8d542420             lea edx, [esp + 0x20]
// 005074f8  d95c2440             fstp dword ptr [esp + 0x40]
// 005074fc  8d442430             lea eax, [esp + 0x30]
// 00507500  d94704               fld dword ptr [edi + 4]
// 00507503  d95c2444             fstp dword ptr [esp + 0x44]
// 00507507  d94708               fld dword ptr [edi + 8]
// 0050750a  d95c2448             fstp dword ptr [esp + 0x48]
// 0050750e  d9470c               fld dword ptr [edi + 0xc]
// 00507511  d95c244c             fstp dword ptr [esp + 0x4c]
// 00507515  d903                 fld dword ptr [ebx]
// 00507517  d95c2430             fstp dword ptr [esp + 0x30]
// 0050751b  d94304               fld dword ptr [ebx + 4]
// 0050751e  d95c2434             fstp dword ptr [esp + 0x34]
// 00507522  d94308               fld dword ptr [ebx + 8]
// 00507525  d95c2438             fstp dword ptr [esp + 0x38]
// 00507529  d9430c               fld dword ptr [ebx + 0xc]
// 0050752c  d95c243c             fstp dword ptr [esp + 0x3c]
// 00507530  d94500               fld dword ptr [ebp]
// 00507533  d95c2420             fstp dword ptr [esp + 0x20]
// 00507537  d94504               fld dword ptr [ebp + 4]
// 0050753a  d95c2424             fstp dword ptr [esp + 0x24]
// 0050753e  d94508               fld dword ptr [ebp + 8]
// 00507541  d95c2428             fstp dword ptr [esp + 0x28]
// 00507545  d9450c               fld dword ptr [ebp + 0xc]
// 00507548  d95c242c             fstp dword ptr [esp + 0x2c]
// 0050754c  d901                 fld dword ptr [ecx]
// 0050754e  d95c2410             fstp dword ptr [esp + 0x10]
// 00507552  d94104               fld dword ptr [ecx + 4]
// 00507555  d95c2414             fstp dword ptr [esp + 0x14]
// 00507559  d94108               fld dword ptr [ecx + 8]
// 0050755c  d95c2418             fstp dword ptr [esp + 0x18]
// 00507560  d9410c               fld dword ptr [ecx + 0xc]
// 00507563  8d4c2410             lea ecx, [esp + 0x10]
// 00507567  51                   push ecx
// 00507568  d95c2420             fstp dword ptr [esp + 0x20]
// 0050756c  52                   push edx
// 0050756d  50                   push eax
// 0050756e  8d4c244c             lea ecx, [esp + 0x4c]
// 00507572  51                   push ecx
// 00507573  8bce                 mov ecx, esi
// 00507575  e846feffff           call 0x5073c0
// 0050757a  5f                   pop edi
// 0050757b  5e                   pop esi
// 0050757c  5d                   pop ebp
// 0050757d  5b                   pop ebx
// 0050757e  83c440               add esp, 0x40
// 00507581  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?append@?$Array@VVector4@G3D@@@G3D@@QAEXABVVector4@2@000@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp

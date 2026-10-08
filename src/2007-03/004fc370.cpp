// roc 2007-03 004fc370  unit: seg_004f0000  size: 452 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fc370
//
// 004fc370  83ec40               sub esp, 0x40
// 004fc373  53                   push ebx
// 004fc374  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 004fc378  55                   push ebp
// 004fc379  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 004fc37d  56                   push esi
// 004fc37e  8bf1                 mov esi, ecx
// 004fc380  8b06                 mov eax, dword ptr [esi]
// 004fc382  57                   push edi
// 004fc383  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 004fc387  3bf8                 cmp edi, eax
// 004fc389  7210                 jb 0x4fc39b
// 004fc38b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fc38e  c1e104               shl ecx, 4
// 004fc391  03c8                 add ecx, eax
// 004fc393  3bf9                 cmp edi, ecx
// 004fc395  0f8203010000         jb 0x4fc49e
// 004fc39b  3bd8                 cmp ebx, eax
// 004fc39d  7210                 jb 0x4fc3af
// 004fc39f  8b5604               mov edx, dword ptr [esi + 4]
// 004fc3a2  c1e204               shl edx, 4
// 004fc3a5  03d0                 add edx, eax
// 004fc3a7  3bda                 cmp ebx, edx
// 004fc3a9  0f82ef000000         jb 0x4fc49e
// 004fc3af  3be8                 cmp ebp, eax
// 004fc3b1  7210                 jb 0x4fc3c3
// 004fc3b3  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fc3b6  c1e104               shl ecx, 4
// 004fc3b9  03c8                 add ecx, eax
// 004fc3bb  3be9                 cmp ebp, ecx
// 004fc3bd  0f82db000000         jb 0x4fc49e
// 004fc3c3  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004fc3c7  3bc8                 cmp ecx, eax
// 004fc3c9  7210                 jb 0x4fc3db
// 004fc3cb  8b5604               mov edx, dword ptr [esi + 4]
// 004fc3ce  c1e204               shl edx, 4
// 004fc3d1  03d0                 add edx, eax
// 004fc3d3  3bca                 cmp ecx, edx
// 004fc3d5  0f82c7000000         jb 0x4fc4a2
// 004fc3db  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fc3de  8d5103               lea edx, [ecx + 3]
// 004fc3e1  3b5608               cmp edx, dword ptr [esi + 8]
// 004fc3e4  7d58                 jge 0x4fc43e
// 004fc3e6  c1e104               shl ecx, 4
// 004fc3e9  03c8                 add ecx, eax
// 004fc3eb  7406                 je 0x4fc3f3
// 004fc3ed  57                   push edi
// 004fc3ee  e85d6df7ff           call 0x473150
// 004fc3f3  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fc3f6  83c101               add ecx, 1
// 004fc3f9  c1e104               shl ecx, 4
// 004fc3fc  030e                 add ecx, dword ptr [esi]
// 004fc3fe  7406                 je 0x4fc406
// 004fc400  53                   push ebx
// 004fc401  e84a6df7ff           call 0x473150
// 004fc406  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fc409  83c102               add ecx, 2
// 004fc40c  c1e104               shl ecx, 4
// 004fc40f  030e                 add ecx, dword ptr [esi]
// 004fc411  7406                 je 0x4fc419
// 004fc413  55                   push ebp
// 004fc414  e8376df7ff           call 0x473150
// 004fc419  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fc41c  83c103               add ecx, 3
// 004fc41f  c1e104               shl ecx, 4
// 004fc422  030e                 add ecx, dword ptr [esi]
// 004fc424  740a                 je 0x4fc430
// 004fc426  8b442460             mov eax, dword ptr [esp + 0x60]
// 004fc42a  50                   push eax
// 004fc42b  e8206df7ff           call 0x473150
// 004fc430  83460404             add dword ptr [esi + 4], 4
// 004fc434  5f                   pop edi
// 004fc435  5e                   pop esi
// 004fc436  5d                   pop ebp
// 004fc437  5b                   pop ebx
// 004fc438  83c440               add esp, 0x40
// 004fc43b  c21000               ret 0x10
// 004fc43e  83c104               add ecx, 4
// 004fc441  6a00                 push 0
// 004fc443  51                   push ecx
// 004fc444  8bce                 mov ecx, esi
// 004fc446  e8f5fcffff           call 0x4fc140
// 004fc44b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fc44e  83e904               sub ecx, 4
// 004fc451  c1e104               shl ecx, 4
// 004fc454  030e                 add ecx, dword ptr [esi]
// 004fc456  57                   push edi
// 004fc457  e8f46cf7ff           call 0x473150
// 004fc45c  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fc45f  83e903               sub ecx, 3
// 004fc462  c1e104               shl ecx, 4
// 004fc465  030e                 add ecx, dword ptr [esi]
// 004fc467  53                   push ebx
// 004fc468  e8e36cf7ff           call 0x473150
// 004fc46d  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fc470  83e902               sub ecx, 2
// 004fc473  c1e104               shl ecx, 4
// 004fc476  030e                 add ecx, dword ptr [esi]
// 004fc478  55                   push ebp
// 004fc479  e8d26cf7ff           call 0x473150
// 004fc47e  8b5604               mov edx, dword ptr [esi + 4]
// 004fc481  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004fc485  8b06                 mov eax, dword ptr [esi]
// 004fc487  c1e204               shl edx, 4
// 004fc48a  51                   push ecx
// 004fc48b  8d4c02f0             lea ecx, [edx + eax - 0x10]
// 004fc48f  e8bc6cf7ff           call 0x473150
// 004fc494  5f                   pop edi
// 004fc495  5e                   pop esi
// 004fc496  5d                   pop ebp
// 004fc497  5b                   pop ebx
// 004fc498  83c440               add esp, 0x40
// 004fc49b  c21000               ret 0x10
// 004fc49e  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004fc4a2  d907                 fld dword ptr [edi]
// 004fc4a4  8d542420             lea edx, [esp + 0x20]
// 004fc4a8  d95c2440             fstp dword ptr [esp + 0x40]
// 004fc4ac  8d442430             lea eax, [esp + 0x30]
// 004fc4b0  d94704               fld dword ptr [edi + 4]
// 004fc4b3  d95c2444             fstp dword ptr [esp + 0x44]
// 004fc4b7  d94708               fld dword ptr [edi + 8]
// 004fc4ba  d95c2448             fstp dword ptr [esp + 0x48]
// 004fc4be  d9470c               fld dword ptr [edi + 0xc]
// 004fc4c1  d95c244c             fstp dword ptr [esp + 0x4c]
// 004fc4c5  d903                 fld dword ptr [ebx]
// 004fc4c7  d95c2430             fstp dword ptr [esp + 0x30]
// 004fc4cb  d94304               fld dword ptr [ebx + 4]
// 004fc4ce  d95c2434             fstp dword ptr [esp + 0x34]
// 004fc4d2  d94308               fld dword ptr [ebx + 8]
// 004fc4d5  d95c2438             fstp dword ptr [esp + 0x38]
// 004fc4d9  d9430c               fld dword ptr [ebx + 0xc]
// 004fc4dc  d95c243c             fstp dword ptr [esp + 0x3c]
// 004fc4e0  d94500               fld dword ptr [ebp]
// 004fc4e3  d95c2420             fstp dword ptr [esp + 0x20]
// 004fc4e7  d94504               fld dword ptr [ebp + 4]
// 004fc4ea  d95c2424             fstp dword ptr [esp + 0x24]
// 004fc4ee  d94508               fld dword ptr [ebp + 8]
// 004fc4f1  d95c2428             fstp dword ptr [esp + 0x28]
// 004fc4f5  d9450c               fld dword ptr [ebp + 0xc]
// 004fc4f8  d95c242c             fstp dword ptr [esp + 0x2c]
// 004fc4fc  d901                 fld dword ptr [ecx]
// 004fc4fe  d95c2410             fstp dword ptr [esp + 0x10]
// 004fc502  d94104               fld dword ptr [ecx + 4]
// 004fc505  d95c2414             fstp dword ptr [esp + 0x14]
// 004fc509  d94108               fld dword ptr [ecx + 8]
// 004fc50c  d95c2418             fstp dword ptr [esp + 0x18]
// 004fc510  d9410c               fld dword ptr [ecx + 0xc]
// 004fc513  8d4c2410             lea ecx, [esp + 0x10]
// 004fc517  51                   push ecx
// 004fc518  d95c2420             fstp dword ptr [esp + 0x20]
// 004fc51c  52                   push edx
// 004fc51d  50                   push eax
// 004fc51e  8d4c244c             lea ecx, [esp + 0x4c]
// 004fc522  51                   push ecx
// 004fc523  8bce                 mov ecx, esi
// 004fc525  e846feffff           call 0x4fc370
// 004fc52a  5f                   pop edi
// 004fc52b  5e                   pop esi
// 004fc52c  5d                   pop ebp
// 004fc52d  5b                   pop ebx
// 004fc52e  83c440               add esp, 0x40
// 004fc531  c21000               ret 0x10
// library rbxgs-g3d/G3Dcpp\GCamera.cpp (function ?append@?$Array@VVector4@G3D@@@G3D@@QAEXABVVector4@2@000@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/GCamera.cpp

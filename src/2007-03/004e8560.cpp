// roc 2007-03 004e8560  unit: seg_004e0000  size: 413 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e8560
//
// 004e8560  83ec24               sub esp, 0x24
// 004e8563  53                   push ebx
// 004e8564  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004e8568  55                   push ebp
// 004e8569  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 004e856d  56                   push esi
// 004e856e  8bf1                 mov esi, ecx
// 004e8570  8b06                 mov eax, dword ptr [esi]
// 004e8572  57                   push edi
// 004e8573  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 004e8577  3bf8                 cmp edi, eax
// 004e8579  7211                 jb 0x4e858c
// 004e857b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e857e  8d0c49               lea ecx, [ecx + ecx*2]
// 004e8581  8d1488               lea edx, [eax + ecx*4]
// 004e8584  3bfa                 cmp edi, edx
// 004e8586  0f8214010000         jb 0x4e86a0
// 004e858c  3bd8                 cmp ebx, eax
// 004e858e  7211                 jb 0x4e85a1
// 004e8590  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e8593  8d0c49               lea ecx, [ecx + ecx*2]
// 004e8596  8d1488               lea edx, [eax + ecx*4]
// 004e8599  3bda                 cmp ebx, edx
// 004e859b  0f82ff000000         jb 0x4e86a0
// 004e85a1  3be8                 cmp ebp, eax
// 004e85a3  7211                 jb 0x4e85b6
// 004e85a5  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e85a8  8d0c49               lea ecx, [ecx + ecx*2]
// 004e85ab  8d1488               lea edx, [eax + ecx*4]
// 004e85ae  3bea                 cmp ebp, edx
// 004e85b0  0f82ea000000         jb 0x4e86a0
// 004e85b6  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e85b9  8d5102               lea edx, [ecx + 2]
// 004e85bc  3b5608               cmp edx, dword ptr [esi + 8]
// 004e85bf  7d6d                 jge 0x4e862e
// 004e85c1  8d0c49               lea ecx, [ecx + ecx*2]
// 004e85c4  8d0488               lea eax, [eax + ecx*4]
// 004e85c7  85c0                 test eax, eax
// 004e85c9  7410                 je 0x4e85db
// 004e85cb  d907                 fld dword ptr [edi]
// 004e85cd  d918                 fstp dword ptr [eax]
// 004e85cf  d94704               fld dword ptr [edi + 4]
// 004e85d2  d95804               fstp dword ptr [eax + 4]
// 004e85d5  d94708               fld dword ptr [edi + 8]
// 004e85d8  d95808               fstp dword ptr [eax + 8]
// 004e85db  8b4604               mov eax, dword ptr [esi + 4]
// 004e85de  83c001               add eax, 1
// 004e85e1  8d1440               lea edx, [eax + eax*2]
// 004e85e4  8b06                 mov eax, dword ptr [esi]
// 004e85e6  8d0490               lea eax, [eax + edx*4]
// 004e85e9  85c0                 test eax, eax
// 004e85eb  7410                 je 0x4e85fd
// 004e85ed  d903                 fld dword ptr [ebx]
// 004e85ef  d918                 fstp dword ptr [eax]
// 004e85f1  d94304               fld dword ptr [ebx + 4]
// 004e85f4  d95804               fstp dword ptr [eax + 4]
// 004e85f7  d94308               fld dword ptr [ebx + 8]
// 004e85fa  d95808               fstp dword ptr [eax + 8]
// 004e85fd  8b4604               mov eax, dword ptr [esi + 4]
// 004e8600  8b16                 mov edx, dword ptr [esi]
// 004e8602  83c002               add eax, 2
// 004e8605  8d0c40               lea ecx, [eax + eax*2]
// 004e8608  8d048a               lea eax, [edx + ecx*4]
// 004e860b  85c0                 test eax, eax
// 004e860d  7411                 je 0x4e8620
// 004e860f  d94500               fld dword ptr [ebp]
// 004e8612  d918                 fstp dword ptr [eax]
// 004e8614  d94504               fld dword ptr [ebp + 4]
// 004e8617  d95804               fstp dword ptr [eax + 4]
// 004e861a  d94508               fld dword ptr [ebp + 8]
// 004e861d  d95808               fstp dword ptr [eax + 8]
// 004e8620  83460403             add dword ptr [esi + 4], 3
// 004e8624  5f                   pop edi
// 004e8625  5e                   pop esi
// 004e8626  5d                   pop ebp
// 004e8627  5b                   pop ebx
// 004e8628  83c424               add esp, 0x24
// 004e862b  c20c00               ret 0xc
// 004e862e  83c103               add ecx, 3
// 004e8631  6a00                 push 0
// 004e8633  51                   push ecx
// 004e8634  8bce                 mov ecx, esi
// 004e8636  e835f4ffff           call 0x4e7a70
// 004e863b  d907                 fld dword ptr [edi]
// 004e863d  8b4604               mov eax, dword ptr [esi + 4]
// 004e8640  8b0e                 mov ecx, dword ptr [esi]
// 004e8642  83e803               sub eax, 3
// 004e8645  8d0440               lea eax, [eax + eax*2]
// 004e8648  d91c81               fstp dword ptr [ecx + eax*4]
// 004e864b  8d0481               lea eax, [ecx + eax*4]
// 004e864e  d94704               fld dword ptr [edi + 4]
// 004e8651  d95804               fstp dword ptr [eax + 4]
// 004e8654  d94708               fld dword ptr [edi + 8]
// 004e8657  5f                   pop edi
// 004e8658  d95808               fstp dword ptr [eax + 8]
// 004e865b  8b4604               mov eax, dword ptr [esi + 4]
// 004e865e  d903                 fld dword ptr [ebx]
// 004e8660  83e802               sub eax, 2
// 004e8663  8d1440               lea edx, [eax + eax*2]
// 004e8666  8b06                 mov eax, dword ptr [esi]
// 004e8668  d91c90               fstp dword ptr [eax + edx*4]
// 004e866b  d94304               fld dword ptr [ebx + 4]
// 004e866e  8d0490               lea eax, [eax + edx*4]
// 004e8671  d95804               fstp dword ptr [eax + 4]
// 004e8674  d94308               fld dword ptr [ebx + 8]
// 004e8677  d95808               fstp dword ptr [eax + 8]
// 004e867a  8b4604               mov eax, dword ptr [esi + 4]
// 004e867d  8b16                 mov edx, dword ptr [esi]
// 004e867f  d94500               fld dword ptr [ebp]
// 004e8682  8d0c40               lea ecx, [eax + eax*2]
// 004e8685  8d448af4             lea eax, [edx + ecx*4 - 0xc]
// 004e8689  d918                 fstp dword ptr [eax]
// 004e868b  5e                   pop esi
// 004e868c  d94504               fld dword ptr [ebp + 4]
// 004e868f  d95804               fstp dword ptr [eax + 4]
// 004e8692  d94508               fld dword ptr [ebp + 8]
// 004e8695  5d                   pop ebp
// 004e8696  d95808               fstp dword ptr [eax + 8]
// 004e8699  5b                   pop ebx
// 004e869a  83c424               add esp, 0x24
// 004e869d  c20c00               ret 0xc
// 004e86a0  d907                 fld dword ptr [edi]
// 004e86a2  8d442410             lea eax, [esp + 0x10]
// 004e86a6  d95c2428             fstp dword ptr [esp + 0x28]
// 004e86aa  50                   push eax
// 004e86ab  d94704               fld dword ptr [edi + 4]
// 004e86ae  8d4c2420             lea ecx, [esp + 0x20]
// 004e86b2  d95c2430             fstp dword ptr [esp + 0x30]
// 004e86b6  51                   push ecx
// 004e86b7  d94708               fld dword ptr [edi + 8]
// 004e86ba  8d542430             lea edx, [esp + 0x30]
// 004e86be  d95c2438             fstp dword ptr [esp + 0x38]
// 004e86c2  52                   push edx
// 004e86c3  d903                 fld dword ptr [ebx]
// 004e86c5  8bce                 mov ecx, esi
// 004e86c7  d95c2428             fstp dword ptr [esp + 0x28]
// 004e86cb  d94304               fld dword ptr [ebx + 4]
// 004e86ce  d95c242c             fstp dword ptr [esp + 0x2c]
// 004e86d2  d94308               fld dword ptr [ebx + 8]
// 004e86d5  d95c2430             fstp dword ptr [esp + 0x30]
// 004e86d9  d94500               fld dword ptr [ebp]
// 004e86dc  d95c241c             fstp dword ptr [esp + 0x1c]
// 004e86e0  d94504               fld dword ptr [ebp + 4]
// 004e86e3  d95c2420             fstp dword ptr [esp + 0x20]
// 004e86e7  d94508               fld dword ptr [ebp + 8]
// 004e86ea  d95c2424             fstp dword ptr [esp + 0x24]
// 004e86ee  e86dfeffff           call 0x4e8560
// 004e86f3  5f                   pop edi
// 004e86f4  5e                   pop esi
// 004e86f5  5d                   pop ebp
// 004e86f6  5b                   pop ebx
// 004e86f7  83c424               add esp, 0x24
// 004e86fa  c20c00               ret 0xc
// library rbxgs-g3d/G3Dcpp\MeshBuilder.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/MeshBuilder.cpp

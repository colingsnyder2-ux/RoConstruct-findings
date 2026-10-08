// roc 2007-03 004e8430  unit: seg_004e0000  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e8430
//
// 004e8430  83ec18               sub esp, 0x18
// 004e8433  53                   push ebx
// 004e8434  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004e8438  56                   push esi
// 004e8439  8bf1                 mov esi, ecx
// 004e843b  8b06                 mov eax, dword ptr [esi]
// 004e843d  57                   push edi
// 004e843e  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004e8442  3bf8                 cmp edi, eax
// 004e8444  7211                 jb 0x4e8457
// 004e8446  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e8449  8d0c49               lea ecx, [ecx + ecx*2]
// 004e844c  8d1488               lea edx, [eax + ecx*4]
// 004e844f  3bfa                 cmp edi, edx
// 004e8451  0f82ba000000         jb 0x4e8511
// 004e8457  3bd8                 cmp ebx, eax
// 004e8459  7211                 jb 0x4e846c
// 004e845b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e845e  8d0c49               lea ecx, [ecx + ecx*2]
// 004e8461  8d1488               lea edx, [eax + ecx*4]
// 004e8464  3bda                 cmp ebx, edx
// 004e8466  0f82a5000000         jb 0x4e8511
// 004e846c  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e846f  8d5101               lea edx, [ecx + 1]
// 004e8472  3b5608               cmp edx, dword ptr [esi + 8]
// 004e8475  7d49                 jge 0x4e84c0
// 004e8477  8d0c49               lea ecx, [ecx + ecx*2]
// 004e847a  8d0488               lea eax, [eax + ecx*4]
// 004e847d  85c0                 test eax, eax
// 004e847f  7410                 je 0x4e8491
// 004e8481  d907                 fld dword ptr [edi]
// 004e8483  d918                 fstp dword ptr [eax]
// 004e8485  d94704               fld dword ptr [edi + 4]
// 004e8488  d95804               fstp dword ptr [eax + 4]
// 004e848b  d94708               fld dword ptr [edi + 8]
// 004e848e  d95808               fstp dword ptr [eax + 8]
// 004e8491  8b4604               mov eax, dword ptr [esi + 4]
// 004e8494  83c001               add eax, 1
// 004e8497  8d1440               lea edx, [eax + eax*2]
// 004e849a  8b06                 mov eax, dword ptr [esi]
// 004e849c  8d0490               lea eax, [eax + edx*4]
// 004e849f  85c0                 test eax, eax
// 004e84a1  7410                 je 0x4e84b3
// 004e84a3  d903                 fld dword ptr [ebx]
// 004e84a5  d918                 fstp dword ptr [eax]
// 004e84a7  d94304               fld dword ptr [ebx + 4]
// 004e84aa  d95804               fstp dword ptr [eax + 4]
// 004e84ad  d94308               fld dword ptr [ebx + 8]
// 004e84b0  d95808               fstp dword ptr [eax + 8]
// 004e84b3  83460402             add dword ptr [esi + 4], 2
// 004e84b7  5f                   pop edi
// 004e84b8  5e                   pop esi
// 004e84b9  5b                   pop ebx
// 004e84ba  83c418               add esp, 0x18
// 004e84bd  c20800               ret 8
// 004e84c0  83c102               add ecx, 2
// 004e84c3  6a00                 push 0
// 004e84c5  51                   push ecx
// 004e84c6  8bce                 mov ecx, esi
// 004e84c8  e8a3f5ffff           call 0x4e7a70
// 004e84cd  d907                 fld dword ptr [edi]
// 004e84cf  8b4604               mov eax, dword ptr [esi + 4]
// 004e84d2  8b16                 mov edx, dword ptr [esi]
// 004e84d4  83e802               sub eax, 2
// 004e84d7  8d0c40               lea ecx, [eax + eax*2]
// 004e84da  d91c8a               fstp dword ptr [edx + ecx*4]
// 004e84dd  8d048a               lea eax, [edx + ecx*4]
// 004e84e0  d94704               fld dword ptr [edi + 4]
// 004e84e3  d95804               fstp dword ptr [eax + 4]
// 004e84e6  d94708               fld dword ptr [edi + 8]
// 004e84e9  5f                   pop edi
// 004e84ea  d95808               fstp dword ptr [eax + 8]
// 004e84ed  8b4604               mov eax, dword ptr [esi + 4]
// 004e84f0  8b0e                 mov ecx, dword ptr [esi]
// 004e84f2  d903                 fld dword ptr [ebx]
// 004e84f4  8d0440               lea eax, [eax + eax*2]
// 004e84f7  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 004e84fb  d918                 fstp dword ptr [eax]
// 004e84fd  5e                   pop esi
// 004e84fe  d94304               fld dword ptr [ebx + 4]
// 004e8501  d95804               fstp dword ptr [eax + 4]
// 004e8504  d94308               fld dword ptr [ebx + 8]
// 004e8507  5b                   pop ebx
// 004e8508  d95808               fstp dword ptr [eax + 8]
// 004e850b  83c418               add esp, 0x18
// 004e850e  c20800               ret 8
// 004e8511  d907                 fld dword ptr [edi]
// 004e8513  8d54240c             lea edx, [esp + 0xc]
// 004e8517  d95c2418             fstp dword ptr [esp + 0x18]
// 004e851b  52                   push edx
// 004e851c  d94704               fld dword ptr [edi + 4]
// 004e851f  8d44241c             lea eax, [esp + 0x1c]
// 004e8523  d95c2420             fstp dword ptr [esp + 0x20]
// 004e8527  50                   push eax
// 004e8528  d94708               fld dword ptr [edi + 8]
// 004e852b  8bce                 mov ecx, esi
// 004e852d  d95c2428             fstp dword ptr [esp + 0x28]
// 004e8531  d903                 fld dword ptr [ebx]
// 004e8533  d95c2414             fstp dword ptr [esp + 0x14]
// 004e8537  d94304               fld dword ptr [ebx + 4]
// 004e853a  d95c2418             fstp dword ptr [esp + 0x18]
// 004e853e  d94308               fld dword ptr [ebx + 8]
// 004e8541  d95c241c             fstp dword ptr [esp + 0x1c]
// 004e8545  e8e6feffff           call 0x4e8430
// 004e854a  5f                   pop edi
// 004e854b  5e                   pop esi
// 004e854c  5b                   pop ebx
// 004e854d  83c418               add esp, 0x18
// 004e8550  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp

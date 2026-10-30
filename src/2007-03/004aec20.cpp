// from server: 100% by auto
// roc 2007-03 004aec20  unit: seg_004a0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004aec20
//
// 004aec20  55                   push ebp
// 004aec21  8bec                 mov ebp, esp
// 004aec23  51                   push ecx
// 004aec24  56                   push esi
// 004aec25  57                   push edi
// 004aec26  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004aec2d  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004aec30  8b7d08               mov edi, dword ptr [ebp + 8]
// 004aec33  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004aec36  8b06                 mov eax, dword ptr [esi]
// 004aec38  33d2                 xor edx, edx
// 004aec3a  2907                 sub dword ptr [edi], eax
// 004aec3c  8b4604               mov eax, dword ptr [esi + 4]
// 004aec3f  194704               sbb dword ptr [edi + 4], eax
// 004aec42  8b4608               mov eax, dword ptr [esi + 8]
// 004aec45  194708               sbb dword ptr [edi + 8], eax
// 004aec48  8b460c               mov eax, dword ptr [esi + 0xc]
// 004aec4b  19470c               sbb dword ptr [edi + 0xc], eax
// 004aec4e  e322                 jecxz 0x4aec72
// 004aec50  42                   inc edx
// 004aec51  42                   inc edx
// 004aec52  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004aec55  1904d7               sbb dword ptr [edi + edx*8], eax
// 004aec58  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004aec5c  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004aec60  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004aec64  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004aec68  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004aec6c  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004aec70  e2de                 loop 0x4aec50
// 004aec72  5f                   pop edi
// 004aec73  5e                   pop esi
// 004aec74  8be5                 mov esp, ebp
// 004aec76  5d                   pop ebp
// 004aec77  c3                   ret 

// from server: 43% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
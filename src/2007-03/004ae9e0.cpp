// from server: 100% by auto
// roc 2007-03 004ae9e0  unit: seg_004a0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ae9e0
//
// 004ae9e0  55                   push ebp
// 004ae9e1  8bec                 mov ebp, esp
// 004ae9e3  51                   push ecx
// 004ae9e4  56                   push esi
// 004ae9e5  57                   push edi
// 004ae9e6  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ae9ed  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004ae9f0  8b7d08               mov edi, dword ptr [ebp + 8]
// 004ae9f3  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004ae9f6  8b06                 mov eax, dword ptr [esi]
// 004ae9f8  33d2                 xor edx, edx
// 004ae9fa  2907                 sub dword ptr [edi], eax
// 004ae9fc  8b4604               mov eax, dword ptr [esi + 4]
// 004ae9ff  194704               sbb dword ptr [edi + 4], eax
// 004aea02  8b4608               mov eax, dword ptr [esi + 8]
// 004aea05  194708               sbb dword ptr [edi + 8], eax
// 004aea08  8b460c               mov eax, dword ptr [esi + 0xc]
// 004aea0b  19470c               sbb dword ptr [edi + 0xc], eax
// 004aea0e  e322                 jecxz 0x4aea32
// 004aea10  42                   inc edx
// 004aea11  42                   inc edx
// 004aea12  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004aea15  1904d7               sbb dword ptr [edi + edx*8], eax
// 004aea18  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004aea1c  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004aea20  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004aea24  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004aea28  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004aea2c  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004aea30  e2de                 loop 0x4aea10
// 004aea32  5f                   pop edi
// 004aea33  5e                   pop esi
// 004aea34  8be5                 mov esp, ebp
// 004aea36  5d                   pop ebp
// 004aea37  c3                   ret 

// from server: 44% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
// from server: 100% by auto
// roc 2007-03 004aeaa0  unit: seg_004a0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004aeaa0
//
// 004aeaa0  55                   push ebp
// 004aeaa1  8bec                 mov ebp, esp
// 004aeaa3  51                   push ecx
// 004aeaa4  56                   push esi
// 004aeaa5  57                   push edi
// 004aeaa6  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004aeaad  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004aeab0  8b7d08               mov edi, dword ptr [ebp + 8]
// 004aeab3  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004aeab6  8b06                 mov eax, dword ptr [esi]
// 004aeab8  33d2                 xor edx, edx
// 004aeaba  0107                 add dword ptr [edi], eax
// 004aeabc  8b4604               mov eax, dword ptr [esi + 4]
// 004aeabf  114704               adc dword ptr [edi + 4], eax
// 004aeac2  8b4608               mov eax, dword ptr [esi + 8]
// 004aeac5  114708               adc dword ptr [edi + 8], eax
// 004aeac8  8b460c               mov eax, dword ptr [esi + 0xc]
// 004aeacb  11470c               adc dword ptr [edi + 0xc], eax
// 004aeace  e322                 jecxz 0x4aeaf2
// 004aead0  42                   inc edx
// 004aead1  42                   inc edx
// 004aead2  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004aead5  1104d7               adc dword ptr [edi + edx*8], eax
// 004aead8  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004aeadc  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004aeae0  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004aeae4  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004aeae8  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004aeaec  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004aeaf0  e2de                 loop 0x4aead0
// 004aeaf2  5f                   pop edi
// 004aeaf3  5e                   pop esi
// 004aeaf4  8be5                 mov esp, ebp
// 004aeaf6  5d                   pop ebp
// 004aeaf7  c3                   ret 

// from server: 43% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
// from server: 100% by auto
// roc 2007-03 004aea40  unit: seg_004a0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004aea40
//
// 004aea40  55                   push ebp
// 004aea41  8bec                 mov ebp, esp
// 004aea43  51                   push ecx
// 004aea44  56                   push esi
// 004aea45  57                   push edi
// 004aea46  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004aea4d  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004aea50  8b7d08               mov edi, dword ptr [ebp + 8]
// 004aea53  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004aea56  8b06                 mov eax, dword ptr [esi]
// 004aea58  33d2                 xor edx, edx
// 004aea5a  0107                 add dword ptr [edi], eax
// 004aea5c  8b4604               mov eax, dword ptr [esi + 4]
// 004aea5f  114704               adc dword ptr [edi + 4], eax
// 004aea62  8b4608               mov eax, dword ptr [esi + 8]
// 004aea65  114708               adc dword ptr [edi + 8], eax
// 004aea68  8b460c               mov eax, dword ptr [esi + 0xc]
// 004aea6b  11470c               adc dword ptr [edi + 0xc], eax
// 004aea6e  e322                 jecxz 0x4aea92
// 004aea70  42                   inc edx
// 004aea71  42                   inc edx
// 004aea72  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004aea75  1104d7               adc dword ptr [edi + edx*8], eax
// 004aea78  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004aea7c  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004aea80  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004aea84  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004aea88  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004aea8c  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004aea90  e2de                 loop 0x4aea70
// 004aea92  5f                   pop edi
// 004aea93  5e                   pop esi
// 004aea94  8be5                 mov esp, ebp
// 004aea96  5d                   pop ebp
// 004aea97  c3                   ret 

// from server: 44% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
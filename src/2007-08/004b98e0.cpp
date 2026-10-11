// from server: 100% by auto
// roc 2007-08 004b98e0  unit: RakPeer  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b98e0
//
// 004b98e0  55                   push ebp
// 004b98e1  8bec                 mov ebp, esp
// 004b98e3  51                   push ecx
// 004b98e4  56                   push esi
// 004b98e5  57                   push edi
// 004b98e6  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b98ed  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004b98f0  8b7d08               mov edi, dword ptr [ebp + 8]
// 004b98f3  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004b98f6  8b06                 mov eax, dword ptr [esi]
// 004b98f8  33d2                 xor edx, edx
// 004b98fa  0107                 add dword ptr [edi], eax
// 004b98fc  8b4604               mov eax, dword ptr [esi + 4]
// 004b98ff  114704               adc dword ptr [edi + 4], eax
// 004b9902  8b4608               mov eax, dword ptr [esi + 8]
// 004b9905  114708               adc dword ptr [edi + 8], eax
// 004b9908  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b990b  11470c               adc dword ptr [edi + 0xc], eax
// 004b990e  e322                 jecxz 0x4b9932
// 004b9910  42                   inc edx
// 004b9911  42                   inc edx
// 004b9912  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004b9915  1104d7               adc dword ptr [edi + edx*8], eax
// 004b9918  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004b991c  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004b9920  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004b9924  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004b9928  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004b992c  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004b9930  e2de                 loop 0x4b9910
// 004b9932  5f                   pop edi
// 004b9933  5e                   pop esi
// 004b9934  8be5                 mov esp, ebp
// 004b9936  5d                   pop ebp
// 004b9937  c3                   ret 

// from server: 51% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctltrack.cpp
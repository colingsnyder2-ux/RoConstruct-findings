// from server: 100% by auto
// roc 2007-08 004b9880  unit: RakPeer  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9880
//
// 004b9880  55                   push ebp
// 004b9881  8bec                 mov ebp, esp
// 004b9883  51                   push ecx
// 004b9884  56                   push esi
// 004b9885  57                   push edi
// 004b9886  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b988d  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004b9890  8b7d08               mov edi, dword ptr [ebp + 8]
// 004b9893  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004b9896  8b06                 mov eax, dword ptr [esi]
// 004b9898  33d2                 xor edx, edx
// 004b989a  2907                 sub dword ptr [edi], eax
// 004b989c  8b4604               mov eax, dword ptr [esi + 4]
// 004b989f  194704               sbb dword ptr [edi + 4], eax
// 004b98a2  8b4608               mov eax, dword ptr [esi + 8]
// 004b98a5  194708               sbb dword ptr [edi + 8], eax
// 004b98a8  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b98ab  19470c               sbb dword ptr [edi + 0xc], eax
// 004b98ae  e322                 jecxz 0x4b98d2
// 004b98b0  42                   inc edx
// 004b98b1  42                   inc edx
// 004b98b2  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004b98b5  1904d7               sbb dword ptr [edi + edx*8], eax
// 004b98b8  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004b98bc  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004b98c0  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004b98c4  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004b98c8  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004b98cc  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004b98d0  e2de                 loop 0x4b98b0
// 004b98d2  5f                   pop edi
// 004b98d3  5e                   pop esi
// 004b98d4  8be5                 mov esp, ebp
// 004b98d6  5d                   pop ebp
// 004b98d7  c3                   ret 

// from server: 50% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctltrack.cpp
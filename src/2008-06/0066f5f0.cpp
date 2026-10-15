// roc 2008-06 0066f5f0  unit: RBX::AssemblyStage  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066f5f0
//
// 0066f5f0  83ec0c               sub esp, 0xc
// 0066f5f3  53                   push ebx
// 0066f5f4  55                   push ebp
// 0066f5f5  56                   push esi
// 0066f5f6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0066f5fa  57                   push edi
// 0066f5fb  8bf9                 mov edi, ecx
// 0066f5fd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0066f600  e85b7ff7ff           call 0x5e7560
// 0066f605  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0066f608  8be8                 mov ebp, eax
// 0066f60a  e8517ff7ff           call 0x5e7560
// 0066f60f  bb01000000           mov ebx, 1
// 0066f614  885d14               mov byte ptr [ebp + 0x14], bl
// 0066f617  57                   push edi
// 0066f618  8bce                 mov ecx, esi
// 0066f61a  885814               mov byte ptr [eax + 0x14], bl
// 0066f61d  e80e62fdff           call 0x645830
// 0066f622  8b06                 mov eax, dword ptr [esi]
// 0066f624  8b500c               mov edx, dword ptr [eax + 0xc]
// 0066f627  8bce                 mov ecx, esi
// 0066f629  ffd2                 call edx
// 0066f62b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0066f62e  3bc3                 cmp eax, ebx
// 0066f630  8b4610               mov eax, dword ptr [esi + 0x10]
// 0066f633  50                   push eax
// 0066f634  51                   push ecx
// 0066f635  753c                 jne 0x66f673
// 0066f637  e8a486f7ff           call 0x5e7ce0
// 0066f63c  83c408               add esp, 8
// 0066f63f  85c0                 test eax, eax
// 0066f641  741b                 je 0x66f65e
// 0066f643  8b4004               mov eax, dword ptr [eax + 4]
// 0066f646  8b10                 mov edx, dword ptr [eax]
// 0066f648  8bc8                 mov ecx, eax
// 0066f64a  8b4204               mov eax, dword ptr [edx + 4]
// 0066f64d  ffd0                 call eax
// 0066f64f  8b17                 mov edx, dword ptr [edi]
// 0066f651  8bd8                 mov ebx, eax
// 0066f653  8b4204               mov eax, dword ptr [edx + 4]
// 0066f656  8bcf                 mov ecx, edi
// 0066f658  ffd0                 call eax
// 0066f65a  3bd8                 cmp ebx, eax
// 0066f65c  7f75                 jg 0x66f6d3
// 0066f65e  8b4f08               mov ecx, dword ptr [edi + 8]
// 0066f661  8b11                 mov edx, dword ptr [ecx]
// 0066f663  8b4210               mov eax, dword ptr [edx + 0x10]
// 0066f666  56                   push esi
// 0066f667  ffd0                 call eax
// 0066f669  5f                   pop edi
// 0066f66a  5e                   pop esi
// 0066f66b  5d                   pop ebp
// 0066f66c  5b                   pop ebx
// 0066f66d  83c40c               add esp, 0xc
// 0066f670  c20400               ret 4
// 0066f673  e8b886f7ff           call 0x5e7d30
// 0066f678  8bd8                 mov ebx, eax
// 0066f67a  83c408               add esp, 8
// 0066f67d  85db                 test ebx, ebx
// 0066f67f  7424                 je 0x66f6a5
// 0066f681  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0066f684  8b11                 mov edx, dword ptr [ecx]
// 0066f686  8b4204               mov eax, dword ptr [edx + 4]
// 0066f689  ffd0                 call eax
// 0066f68b  8b17                 mov edx, dword ptr [edi]
// 0066f68d  8be8                 mov ebp, eax
// 0066f68f  8b4204               mov eax, dword ptr [edx + 4]
// 0066f692  8bcf                 mov ecx, edi
// 0066f694  ffd0                 call eax
// 0066f696  3be8                 cmp ebp, eax
// 0066f698  7e0b                 jle 0x66f6a5
// 0066f69a  8b4f08               mov ecx, dword ptr [edi + 8]
// 0066f69d  8b11                 mov edx, dword ptr [ecx]
// 0066f69f  8b4214               mov eax, dword ptr [edx + 0x14]
// 0066f6a2  53                   push ebx
// 0066f6a3  ffd0                 call eax
// 0066f6a5  8b4f08               mov ecx, dword ptr [edi + 8]
// 0066f6a8  8b11                 mov edx, dword ptr [ecx]
// 0066f6aa  8b4210               mov eax, dword ptr [edx + 0x10]
// 0066f6ad  56                   push esi
// 0066f6ae  ffd0                 call eax
// 0066f6b0  8b16                 mov edx, dword ptr [esi]
// 0066f6b2  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0066f6b5  8bce                 mov ecx, esi
// 0066f6b7  89742420             mov dword ptr [esp + 0x20], esi
// 0066f6bb  ffd0                 call eax
// 0066f6bd  84c0                 test al, al
// 0066f6bf  7412                 je 0x66f6d3
// 0066f6c1  8d4c2420             lea ecx, [esp + 0x20]
// 0066f6c5  51                   push ecx
// 0066f6c6  8d542414             lea edx, [esp + 0x14]
// 0066f6ca  52                   push edx
// 0066f6cb  8d4f30               lea ecx, [edi + 0x30]
// 0066f6ce  e86d95f7ff           call 0x5e8c40
// 0066f6d3  5f                   pop edi
// 0066f6d4  5e                   pop esi
// 0066f6d5  5d                   pop ebp
// 0066f6d6  5b                   pop ebx
// 0066f6d7  83c40c               add esp, 0xc
// 0066f6da  c20400               ret 4
// library rbxgs/roc_unit_66ac0c2604711628.cpp (function ?onEdgeAdded@AssemblyStage@RBX@@UAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_66ac0c2604711628.cpp

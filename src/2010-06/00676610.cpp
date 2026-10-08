// roc 2010-06 00676610  unit: RBX::Assembly  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00676610
//
// 00676610  53                   push ebx
// 00676611  55                   push ebp
// 00676612  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00676616  56                   push esi
// 00676617  8b742414             mov esi, dword ptr [esp + 0x14]
// 0067661b  8b0e                 mov ecx, dword ptr [esi]
// 0067661d  57                   push edi
// 0067661e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00676622  8b07                 mov eax, dword ptr [edi]
// 00676624  50                   push eax
// 00676625  51                   push ecx
// 00676626  ffd5                 call ebp
// 00676628  83c408               add esp, 8
// 0067662b  84c0                 test al, al
// 0067662d  740c                 je 0x67663b
// 0067662f  3bf7                 cmp esi, edi
// 00676631  7408                 je 0x67663b
// 00676633  8b17                 mov edx, dword ptr [edi]
// 00676635  8b06                 mov eax, dword ptr [esi]
// 00676637  8916                 mov dword ptr [esi], edx
// 00676639  8907                 mov dword ptr [edi], eax
// 0067663b  8b06                 mov eax, dword ptr [esi]
// 0067663d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00676641  8b0b                 mov ecx, dword ptr [ebx]
// 00676643  50                   push eax
// 00676644  51                   push ecx
// 00676645  ffd5                 call ebp
// 00676647  83c408               add esp, 8
// 0067664a  84c0                 test al, al
// 0067664c  740c                 je 0x67665a
// 0067664e  3bde                 cmp ebx, esi
// 00676650  7408                 je 0x67665a
// 00676652  8b16                 mov edx, dword ptr [esi]
// 00676654  8b03                 mov eax, dword ptr [ebx]
// 00676656  8913                 mov dword ptr [ebx], edx
// 00676658  8906                 mov dword ptr [esi], eax
// 0067665a  8b07                 mov eax, dword ptr [edi]
// 0067665c  8b0e                 mov ecx, dword ptr [esi]
// 0067665e  50                   push eax
// 0067665f  51                   push ecx
// 00676660  ffd5                 call ebp
// 00676662  83c408               add esp, 8
// 00676665  84c0                 test al, al
// 00676667  740c                 je 0x676675
// 00676669  3bf7                 cmp esi, edi
// 0067666b  7408                 je 0x676675
// 0067666d  8b17                 mov edx, dword ptr [edi]
// 0067666f  8b06                 mov eax, dword ptr [esi]
// 00676671  8916                 mov dword ptr [esi], edx
// 00676673  8907                 mov dword ptr [edi], eax
// 00676675  5f                   pop edi
// 00676676  5e                   pop esi
// 00676677  5d                   pop ebp
// 00676678  5b                   pop ebx
// 00676679  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Med3@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@00P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp

// roc 2009-12 008cf970  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cf970
//
// 008cf970  53                   push ebx
// 008cf971  55                   push ebp
// 008cf972  8b2d5cca9800         mov ebp, dword ptr [0x98ca5c]
// 008cf978  56                   push esi
// 008cf979  57                   push edi
// 008cf97a  8bf9                 mov edi, ecx
// 008cf97c  33f6                 xor esi, esi
// 008cf97e  397770               cmp dword ptr [edi + 0x70], esi
// 008cf981  7e31                 jle 0x8cf9b4
// 008cf983  85f6                 test esi, esi
// 008cf985  0f8ca0000000         jl 0x8cfa2b
// 008cf98b  3b7770               cmp esi, dword ptr [edi + 0x70]
// 008cf98e  0f8d97000000         jge 0x8cfa2b
// 008cf994  8b476c               mov eax, dword ptr [edi + 0x6c]
// 008cf997  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008cf99b  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 008cf99e  8b542414             mov edx, dword ptr [esp + 0x14]
// 008cf9a2  51                   push ecx
// 008cf9a3  52                   push edx
// 008cf9a4  8d4310               lea eax, [ebx + 0x10]
// 008cf9a7  50                   push eax
// 008cf9a8  ffd5                 call ebp
// 008cf9aa  85c0                 test eax, eax
// 008cf9ac  7564                 jne 0x8cfa12
// 008cf9ae  46                   inc esi
// 008cf9af  3b7770               cmp esi, dword ptr [edi + 0x70]
// 008cf9b2  7ccf                 jl 0x8cf983
// 008cf9b4  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008cf9b9  754e                 jne 0x8cfa09
// 008cf9bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008cf9bf  8b542414             mov edx, dword ptr [esp + 0x14]
// 008cf9c3  51                   push ecx
// 008cf9c4  52                   push edx
// 008cf9c5  8bcf                 mov ecx, edi
// 008cf9c7  e8c4fcffff           call 0x8cf690
// 008cf9cc  8bf8                 mov edi, eax
// 008cf9ce  85ff                 test edi, edi
// 008cf9d0  7437                 je 0x8cfa09
// 008cf9d2  33f6                 xor esi, esi
// 008cf9d4  397774               cmp dword ptr [edi + 0x74], esi
// 008cf9d7  7e30                 jle 0x8cfa09
// 008cf9d9  8da42400000000       lea esp, [esp]
// 008cf9e0  85f6                 test esi, esi
// 008cf9e2  7c47                 jl 0x8cfa2b
// 008cf9e4  3b7774               cmp esi, dword ptr [edi + 0x74]
// 008cf9e7  7d42                 jge 0x8cfa2b
// 008cf9e9  8b4770               mov eax, dword ptr [edi + 0x70]
// 008cf9ec  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008cf9f0  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 008cf9f3  8b542414             mov edx, dword ptr [esp + 0x14]
// 008cf9f7  51                   push ecx
// 008cf9f8  52                   push edx
// 008cf9f9  8d4310               lea eax, [ebx + 0x10]
// 008cf9fc  50                   push eax
// 008cf9fd  ffd5                 call ebp
// 008cf9ff  85c0                 test eax, eax
// 008cfa01  750f                 jne 0x8cfa12
// 008cfa03  46                   inc esi
// 008cfa04  3b7774               cmp esi, dword ptr [edi + 0x74]
// 008cfa07  7cd7                 jl 0x8cf9e0
// 008cfa09  5f                   pop edi
// 008cfa0a  5e                   pop esi
// 008cfa0b  5d                   pop ebp
// 008cfa0c  33c0                 xor eax, eax
// 008cfa0e  5b                   pop ebx
// 008cfa0f  c21000               ret 0x10
// 008cfa12  837b2000             cmp dword ptr [ebx + 0x20], 0
// 008cfa16  74f1                 je 0x8cfa09
// 008cfa18  8b442420             mov eax, dword ptr [esp + 0x20]
// 008cfa1c  85c0                 test eax, eax
// 008cfa1e  7402                 je 0x8cfa22
// 008cfa20  8930                 mov dword ptr [eax], esi
// 008cfa22  5f                   pop edi
// 008cfa23  5e                   pop esi
// 008cfa24  5d                   pop ebp
// 008cfa25  8bc3                 mov eax, ebx
// 008cfa27  5b                   pop ebx
// 008cfa28  c21000               ret 0x10
// 008cfa2b  e8dc40f2ff           call 0x7f3b0c
// copied from an identical function in another client (function ?HitTestNavigateButton@CXTPTabManager@@QBEPAVCXTPTabManagerNavigateButton@@VCPoint@@HPAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
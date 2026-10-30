// roc 2010-06 00874660  unit: CXTPShadowsManager::PAVCShadowWnd::?$CList  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00874660
//
// 00874660  53                   push ebx
// 00874661  8bd9                 mov ebx, ecx
// 00874663  57                   push edi
// 00874664  8b7b08               mov edi, dword ptr [ebx + 8]
// 00874667  85ff                 test edi, edi
// 00874669  743a                 je 0x8746a5
// 0087466b  55                   push ebp
// 0087466c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00874670  56                   push esi
// 00874671  8bc7                 mov eax, edi
// 00874673  8b7008               mov esi, dword ptr [eax + 8]
// 00874676  8b4668               mov eax, dword ptr [esi + 0x68]
// 00874679  8b3f                 mov edi, dword ptr [edi]
// 0087467b  3be8                 cmp ebp, eax
// 0087467d  7520                 jne 0x87469f
// 0087467f  8d4e54               lea ecx, [esi + 0x54]
// 00874682  85c0                 test eax, eax
// 00874684  7403                 je 0x874689
// 00874686  8b4020               mov eax, dword ptr [eax + 0x20]
// 00874689  51                   push ecx
// 0087468a  50                   push eax
// 0087468b  e840c7fcff           call 0x840dd0
// 00874690  8bc8                 mov ecx, eax
// 00874692  e8b9cbfcff           call 0x841250
// 00874697  56                   push esi
// 00874698  8bcb                 mov ecx, ebx
// 0087469a  e8e1feffff           call 0x874580
// 0087469f  85ff                 test edi, edi
// 008746a1  75ce                 jne 0x874671
// 008746a3  5e                   pop esi
// 008746a4  5d                   pop ebp
// 008746a5  5f                   pop edi
// 008746a6  5b                   pop ebx
// 008746a7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?RemoveShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp

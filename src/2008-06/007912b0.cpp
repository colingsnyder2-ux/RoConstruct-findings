// from server: 100% by auto
// roc 2008-06 007912b0  unit: PAVCXTShadowWnd::?$CList  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007912b0
//
// 007912b0  53                   push ebx
// 007912b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007912b5  56                   push esi
// 007912b6  8b742410             mov esi, dword ptr [esp + 0x10]
// 007912ba  8b5604               mov edx, dword ptr [esi + 4]
// 007912bd  57                   push edi
// 007912be  83ec10               sub esp, 0x10
// 007912c1  8bc4                 mov eax, esp
// 007912c3  8bf9                 mov edi, ecx
// 007912c5  8b0e                 mov ecx, dword ptr [esi]
// 007912c7  8908                 mov dword ptr [eax], ecx
// 007912c9  8b4e08               mov ecx, dword ptr [esi + 8]
// 007912cc  895004               mov dword ptr [eax + 4], edx
// 007912cf  8b560c               mov edx, dword ptr [esi + 0xc]
// 007912d2  894808               mov dword ptr [eax + 8], ecx
// 007912d5  53                   push ebx
// 007912d6  6a01                 push 1
// 007912d8  8bcf                 mov ecx, edi
// 007912da  89500c               mov dword ptr [eax + 0xc], edx
// 007912dd  e83effffff           call 0x791220
// 007912e2  8b0e                 mov ecx, dword ptr [esi]
// 007912e4  8b5604               mov edx, dword ptr [esi + 4]
// 007912e7  83ec10               sub esp, 0x10
// 007912ea  8bc4                 mov eax, esp
// 007912ec  8908                 mov dword ptr [eax], ecx
// 007912ee  8b4e08               mov ecx, dword ptr [esi + 8]
// 007912f1  895004               mov dword ptr [eax + 4], edx
// 007912f4  8b560c               mov edx, dword ptr [esi + 0xc]
// 007912f7  894808               mov dword ptr [eax + 8], ecx
// 007912fa  53                   push ebx
// 007912fb  6a00                 push 0
// 007912fd  8bcf                 mov ecx, edi
// 007912ff  89500c               mov dword ptr [eax + 0xc], edx
// 00791302  e819ffffff           call 0x791220
// 00791307  5f                   pop edi
// 00791308  5e                   pop esi
// 00791309  5b                   pop ebx
// 0079130a  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?SetShadow@CXTShadowsManager@@QAEXPAUHWND__@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp

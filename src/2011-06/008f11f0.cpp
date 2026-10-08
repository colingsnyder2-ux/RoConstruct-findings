// roc 2011-06 008f11f0  unit: PAVCXTShadowWnd::?$CList  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f11f0
//
// 008f11f0  83ec10               sub esp, 0x10
// 008f11f3  56                   push esi
// 008f11f4  57                   push edi
// 008f11f5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008f11f9  8bf1                 mov esi, ecx
// 008f11fb  57                   push edi
// 008f11fc  8d4c240c             lea ecx, [esp + 0xc]
// 008f1200  e8fbbaf6ff           call 0x85cd00
// 008f1205  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008f1209  8b542428             mov edx, dword ptr [esp + 0x28]
// 008f120d  57                   push edi
// 008f120e  83ec10               sub esp, 0x10
// 008f1211  8bc4                 mov eax, esp
// 008f1213  8908                 mov dword ptr [eax], ecx
// 008f1215  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008f1219  895004               mov dword ptr [eax + 4], edx
// 008f121c  8b542444             mov edx, dword ptr [esp + 0x44]
// 008f1220  894808               mov dword ptr [eax + 8], ecx
// 008f1223  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008f1227  89500c               mov dword ptr [eax + 0xc], edx
// 008f122a  8b542420             mov edx, dword ptr [esp + 0x20]
// 008f122e  83ec10               sub esp, 0x10
// 008f1231  8bc4                 mov eax, esp
// 008f1233  8908                 mov dword ptr [eax], ecx
// 008f1235  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008f1239  895004               mov dword ptr [eax + 4], edx
// 008f123c  8b542438             mov edx, dword ptr [esp + 0x38]
// 008f1240  894808               mov dword ptr [eax + 8], ecx
// 008f1243  89500c               mov dword ptr [eax + 0xc], edx
// 008f1246  8b442440             mov eax, dword ptr [esp + 0x40]
// 008f124a  50                   push eax
// 008f124b  8bce                 mov ecx, esi
// 008f124d  e89efdffff           call 0x8f0ff0
// 008f1252  5f                   pop edi
// 008f1253  c7405801000000       mov dword ptr [eax + 0x58], 1
// 008f125a  5e                   pop esi
// 008f125b  83c410               add esp, 0x10
// 008f125e  c21800               ret 0x18
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?CreateShadow@CXTShadowsManager@@AAEPAVCXTShadowWnd@@HPAUHWND__@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp

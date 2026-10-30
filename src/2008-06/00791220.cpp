// from server: 100% by auto
// roc 2008-06 00791220  unit: PAVCXTShadowWnd::?$CList  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791220
//
// 00791220  83ec10               sub esp, 0x10
// 00791223  56                   push esi
// 00791224  57                   push edi
// 00791225  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00791229  8bf1                 mov esi, ecx
// 0079122b  57                   push edi
// 0079122c  8d4c240c             lea ecx, [esp + 0xc]
// 00791230  e86b68f6ff           call 0x6f7aa0
// 00791235  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00791239  8b542428             mov edx, dword ptr [esp + 0x28]
// 0079123d  57                   push edi
// 0079123e  83ec10               sub esp, 0x10
// 00791241  8bc4                 mov eax, esp
// 00791243  8908                 mov dword ptr [eax], ecx
// 00791245  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00791249  895004               mov dword ptr [eax + 4], edx
// 0079124c  8b542444             mov edx, dword ptr [esp + 0x44]
// 00791250  894808               mov dword ptr [eax + 8], ecx
// 00791253  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00791257  89500c               mov dword ptr [eax + 0xc], edx
// 0079125a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0079125e  83ec10               sub esp, 0x10
// 00791261  8bc4                 mov eax, esp
// 00791263  8908                 mov dword ptr [eax], ecx
// 00791265  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00791269  895004               mov dword ptr [eax + 4], edx
// 0079126c  8b542438             mov edx, dword ptr [esp + 0x38]
// 00791270  894808               mov dword ptr [eax + 8], ecx
// 00791273  89500c               mov dword ptr [eax + 0xc], edx
// 00791276  8b442440             mov eax, dword ptr [esp + 0x40]
// 0079127a  50                   push eax
// 0079127b  8bce                 mov ecx, esi
// 0079127d  e89efdffff           call 0x791020
// 00791282  5f                   pop edi
// 00791283  c7405801000000       mov dword ptr [eax + 0x58], 1
// 0079128a  5e                   pop esi
// 0079128b  83c410               add esp, 0x10
// 0079128e  c21800               ret 0x18
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?CreateShadow@CXTShadowsManager@@AAEPAVCXTShadowWnd@@HPAUHWND__@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp

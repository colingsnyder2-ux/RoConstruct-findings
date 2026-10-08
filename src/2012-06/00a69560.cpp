// roc 2012-06 00a69560  unit: PAVCXTShadowWnd::?$CList  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a69560
//
// 00a69560  83ec10               sub esp, 0x10
// 00a69563  56                   push esi
// 00a69564  57                   push edi
// 00a69565  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a69569  8bf1                 mov esi, ecx
// 00a6956b  57                   push edi
// 00a6956c  8d4c240c             lea ecx, [esp + 0xc]
// 00a69570  e89bbbf6ff           call 0x9d5110
// 00a69575  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a69579  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a6957d  57                   push edi
// 00a6957e  83ec10               sub esp, 0x10
// 00a69581  8bc4                 mov eax, esp
// 00a69583  8908                 mov dword ptr [eax], ecx
// 00a69585  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a69589  895004               mov dword ptr [eax + 4], edx
// 00a6958c  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a69590  894808               mov dword ptr [eax + 8], ecx
// 00a69593  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a69597  89500c               mov dword ptr [eax + 0xc], edx
// 00a6959a  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a6959e  83ec10               sub esp, 0x10
// 00a695a1  8bc4                 mov eax, esp
// 00a695a3  8908                 mov dword ptr [eax], ecx
// 00a695a5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a695a9  895004               mov dword ptr [eax + 4], edx
// 00a695ac  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a695b0  894808               mov dword ptr [eax + 8], ecx
// 00a695b3  89500c               mov dword ptr [eax + 0xc], edx
// 00a695b6  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a695ba  50                   push eax
// 00a695bb  8bce                 mov ecx, esi
// 00a695bd  e89efdffff           call 0xa69360
// 00a695c2  5f                   pop edi
// 00a695c3  c7405801000000       mov dword ptr [eax + 0x58], 1
// 00a695ca  5e                   pop esi
// 00a695cb  83c410               add esp, 0x10
// 00a695ce  c21800               ret 0x18
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?CreateShadow@CXTShadowsManager@@AAEPAVCXTShadowWnd@@HPAUHWND__@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp

// roc 2007-08 00713980  unit: PAVCXTShadowWnd::?$CList  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713980
//
// 00713980  83ec10               sub esp, 0x10
// 00713983  56                   push esi
// 00713984  57                   push edi
// 00713985  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00713989  8bf1                 mov esi, ecx
// 0071398b  57                   push edi
// 0071398c  8d4c240c             lea ecx, [esp + 0xc]
// 00713990  e8dbc5f6ff           call 0x67ff70
// 00713995  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00713999  8b542428             mov edx, dword ptr [esp + 0x28]
// 0071399d  57                   push edi
// 0071399e  83ec10               sub esp, 0x10
// 007139a1  8bc4                 mov eax, esp
// 007139a3  8908                 mov dword ptr [eax], ecx
// 007139a5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007139a9  895004               mov dword ptr [eax + 4], edx
// 007139ac  8b542444             mov edx, dword ptr [esp + 0x44]
// 007139b0  894808               mov dword ptr [eax + 8], ecx
// 007139b3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007139b7  89500c               mov dword ptr [eax + 0xc], edx
// 007139ba  8b542420             mov edx, dword ptr [esp + 0x20]
// 007139be  83ec10               sub esp, 0x10
// 007139c1  8bc4                 mov eax, esp
// 007139c3  8908                 mov dword ptr [eax], ecx
// 007139c5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007139c9  895004               mov dword ptr [eax + 4], edx
// 007139cc  8b542438             mov edx, dword ptr [esp + 0x38]
// 007139d0  894808               mov dword ptr [eax + 8], ecx
// 007139d3  89500c               mov dword ptr [eax + 0xc], edx
// 007139d6  8b442440             mov eax, dword ptr [esp + 0x40]
// 007139da  50                   push eax
// 007139db  8bce                 mov ecx, esi
// 007139dd  e89efdffff           call 0x713780
// 007139e2  5f                   pop edi
// 007139e3  c7405801000000       mov dword ptr [eax + 0x58], 1
// 007139ea  5e                   pop esi
// 007139eb  83c410               add esp, 0x10
// 007139ee  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\Controls\XTWndShadow.cpp (function ?CreateShadow@CXTShadowsManager@@AAEPAVCXTShadowWnd@@HPAUHWND__@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndShadow.cpp

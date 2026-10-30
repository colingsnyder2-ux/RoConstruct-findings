// roc 2010-06 00898690  unit: CXTShadowHook  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00898690
//
// 00898690  83ec10               sub esp, 0x10
// 00898693  56                   push esi
// 00898694  57                   push edi
// 00898695  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00898699  8bf1                 mov esi, ecx
// 0089869b  57                   push edi
// 0089869c  8d4c240c             lea ecx, [esp + 0xc]
// 008986a0  e8db6bf6ff           call 0x7ff280
// 008986a5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008986a9  8b542428             mov edx, dword ptr [esp + 0x28]
// 008986ad  57                   push edi
// 008986ae  83ec10               sub esp, 0x10
// 008986b1  8bc4                 mov eax, esp
// 008986b3  8908                 mov dword ptr [eax], ecx
// 008986b5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008986b9  895004               mov dword ptr [eax + 4], edx
// 008986bc  8b542444             mov edx, dword ptr [esp + 0x44]
// 008986c0  894808               mov dword ptr [eax + 8], ecx
// 008986c3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008986c7  89500c               mov dword ptr [eax + 0xc], edx
// 008986ca  8b542420             mov edx, dword ptr [esp + 0x20]
// 008986ce  83ec10               sub esp, 0x10
// 008986d1  8bc4                 mov eax, esp
// 008986d3  8908                 mov dword ptr [eax], ecx
// 008986d5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008986d9  895004               mov dword ptr [eax + 4], edx
// 008986dc  8b542438             mov edx, dword ptr [esp + 0x38]
// 008986e0  894808               mov dword ptr [eax + 8], ecx
// 008986e3  89500c               mov dword ptr [eax + 0xc], edx
// 008986e6  8b442440             mov eax, dword ptr [esp + 0x40]
// 008986ea  50                   push eax
// 008986eb  8bce                 mov ecx, esi
// 008986ed  e89efdffff           call 0x898490
// 008986f2  5f                   pop edi
// 008986f3  c7405801000000       mov dword ptr [eax + 0x58], 1
// 008986fa  5e                   pop esi
// 008986fb  83c410               add esp, 0x10
// 008986fe  c21800               ret 0x18
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?CreateShadow@CXTShadowsManager@@AAEPAVCXTShadowWnd@@HPAUHWND__@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp

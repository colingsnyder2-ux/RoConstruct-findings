// roc 2009-12 008e4380  unit: PAVCXTShadowWnd::?$CList  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e4380
//
// 008e4380  83ec10               sub esp, 0x10
// 008e4383  56                   push esi
// 008e4384  57                   push edi
// 008e4385  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008e4389  8bf1                 mov esi, ecx
// 008e438b  57                   push edi
// 008e438c  8d4c240c             lea ecx, [esp + 0xc]
// 008e4390  e8ab6ef6ff           call 0x84b240
// 008e4395  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e4399  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e439d  57                   push edi
// 008e439e  83ec10               sub esp, 0x10
// 008e43a1  8bc4                 mov eax, esp
// 008e43a3  8908                 mov dword ptr [eax], ecx
// 008e43a5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008e43a9  895004               mov dword ptr [eax + 4], edx
// 008e43ac  8b542444             mov edx, dword ptr [esp + 0x44]
// 008e43b0  894808               mov dword ptr [eax + 8], ecx
// 008e43b3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e43b7  89500c               mov dword ptr [eax + 0xc], edx
// 008e43ba  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e43be  83ec10               sub esp, 0x10
// 008e43c1  8bc4                 mov eax, esp
// 008e43c3  8908                 mov dword ptr [eax], ecx
// 008e43c5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e43c9  895004               mov dword ptr [eax + 4], edx
// 008e43cc  8b542438             mov edx, dword ptr [esp + 0x38]
// 008e43d0  894808               mov dword ptr [eax + 8], ecx
// 008e43d3  89500c               mov dword ptr [eax + 0xc], edx
// 008e43d6  8b442440             mov eax, dword ptr [esp + 0x40]
// 008e43da  50                   push eax
// 008e43db  8bce                 mov ecx, esi
// 008e43dd  e89efdffff           call 0x8e4180
// 008e43e2  5f                   pop edi
// 008e43e3  c7405801000000       mov dword ptr [eax + 0x58], 1
// 008e43ea  5e                   pop esi
// 008e43eb  83c410               add esp, 0x10
// 008e43ee  c21800               ret 0x18
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?CreateShadow@CXTShadowsManager@@AAEPAVCXTShadowWnd@@HPAUHWND__@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp

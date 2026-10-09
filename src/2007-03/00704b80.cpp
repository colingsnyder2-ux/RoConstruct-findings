// roc 2007-03 00704b80  unit: seg_00700000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00704b80
//
// 00704b80  83ec10               sub esp, 0x10
// 00704b83  56                   push esi
// 00704b84  57                   push edi
// 00704b85  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00704b89  8bf1                 mov esi, ecx
// 00704b8b  57                   push edi
// 00704b8c  8d4c240c             lea ecx, [esp + 0xc]
// 00704b90  e80b6cf6ff           call 0x66b7a0
// 00704b95  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00704b99  8b542428             mov edx, dword ptr [esp + 0x28]
// 00704b9d  57                   push edi
// 00704b9e  83ec10               sub esp, 0x10
// 00704ba1  8bc4                 mov eax, esp
// 00704ba3  8908                 mov dword ptr [eax], ecx
// 00704ba5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00704ba9  895004               mov dword ptr [eax + 4], edx
// 00704bac  8b542444             mov edx, dword ptr [esp + 0x44]
// 00704bb0  894808               mov dword ptr [eax + 8], ecx
// 00704bb3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00704bb7  89500c               mov dword ptr [eax + 0xc], edx
// 00704bba  8b542420             mov edx, dword ptr [esp + 0x20]
// 00704bbe  83ec10               sub esp, 0x10
// 00704bc1  8bc4                 mov eax, esp
// 00704bc3  8908                 mov dword ptr [eax], ecx
// 00704bc5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00704bc9  895004               mov dword ptr [eax + 4], edx
// 00704bcc  8b542438             mov edx, dword ptr [esp + 0x38]
// 00704bd0  894808               mov dword ptr [eax + 8], ecx
// 00704bd3  89500c               mov dword ptr [eax + 0xc], edx
// 00704bd6  8b442440             mov eax, dword ptr [esp + 0x40]
// 00704bda  50                   push eax
// 00704bdb  8bce                 mov ecx, esi
// 00704bdd  e89efdffff           call 0x704980
// 00704be2  5f                   pop edi
// 00704be3  c7405801000000       mov dword ptr [eax + 0x58], 1
// 00704bea  5e                   pop esi
// 00704beb  83c410               add esp, 0x10
// 00704bee  c21800               ret 0x18
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?CreateShadow@CXTShadowsManager@@AAEPAVCXTShadowWnd@@HPAUHWND__@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp

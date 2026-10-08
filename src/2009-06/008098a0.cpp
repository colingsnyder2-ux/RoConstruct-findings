// roc 2009-06 008098a0  unit: CXTShadowHook  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008098a0
//
// 008098a0  83ec10               sub esp, 0x10
// 008098a3  56                   push esi
// 008098a4  57                   push edi
// 008098a5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008098a9  8bf1                 mov esi, ecx
// 008098ab  57                   push edi
// 008098ac  8d4c240c             lea ecx, [esp + 0xc]
// 008098b0  e88b6bf6ff           call 0x770440
// 008098b5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008098b9  8b542428             mov edx, dword ptr [esp + 0x28]
// 008098bd  57                   push edi
// 008098be  83ec10               sub esp, 0x10
// 008098c1  8bc4                 mov eax, esp
// 008098c3  8908                 mov dword ptr [eax], ecx
// 008098c5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008098c9  895004               mov dword ptr [eax + 4], edx
// 008098cc  8b542444             mov edx, dword ptr [esp + 0x44]
// 008098d0  894808               mov dword ptr [eax + 8], ecx
// 008098d3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008098d7  89500c               mov dword ptr [eax + 0xc], edx
// 008098da  8b542420             mov edx, dword ptr [esp + 0x20]
// 008098de  83ec10               sub esp, 0x10
// 008098e1  8bc4                 mov eax, esp
// 008098e3  8908                 mov dword ptr [eax], ecx
// 008098e5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008098e9  895004               mov dword ptr [eax + 4], edx
// 008098ec  8b542438             mov edx, dword ptr [esp + 0x38]
// 008098f0  894808               mov dword ptr [eax + 8], ecx
// 008098f3  89500c               mov dword ptr [eax + 0xc], edx
// 008098f6  8b442440             mov eax, dword ptr [esp + 0x40]
// 008098fa  50                   push eax
// 008098fb  8bce                 mov ecx, esi
// 008098fd  e89efdffff           call 0x8096a0
// 00809902  5f                   pop edi
// 00809903  c7405801000000       mov dword ptr [eax + 0x58], 1
// 0080990a  5e                   pop esi
// 0080990b  83c410               add esp, 0x10
// 0080990e  c21800               ret 0x18
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?CreateShadow@CXTShadowsManager@@AAEPAVCXTShadowWnd@@HPAUHWND__@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp

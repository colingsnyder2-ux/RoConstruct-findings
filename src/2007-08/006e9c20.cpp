// from server: 100% by auto
// roc 2007-08 006e9c20  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetWhidbey  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e9c20
//
// 006e9c20  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e9c24  85c0                 test eax, eax
// 006e9c26  56                   push esi
// 006e9c27  57                   push edi
// 006e9c28  8bf9                 mov edi, ecx
// 006e9c2a  7409                 je 0x6e9c35
// 006e9c2c  0558ffffff           add eax, 0xffffff58
// 006e9c31  8bf0                 mov esi, eax
// 006e9c33  eb04                 jmp 0x6e9c39
// 006e9c35  33c0                 xor eax, eax
// 006e9c37  33f6                 xor esi, esi
// 006e9c39  8d4854               lea ecx, [eax + 0x54]
// 006e9c3c  8b01                 mov eax, dword ptr [ecx]
// 006e9c3e  8b5018               mov edx, dword ptr [eax + 0x18]
// 006e9c41  ffd2                 call edx
// 006e9c43  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e9c47  8b542414             mov edx, dword ptr [esp + 0x14]
// 006e9c4b  6a01                 push 1
// 006e9c4d  83c704               add edi, 4
// 006e9c50  57                   push edi
// 006e9c51  50                   push eax
// 006e9c52  56                   push esi
// 006e9c53  83ec10               sub esp, 0x10
// 006e9c56  8bc4                 mov eax, esp
// 006e9c58  8908                 mov dword ptr [eax], ecx
// 006e9c5a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006e9c5e  895004               mov dword ptr [eax + 4], edx
// 006e9c61  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006e9c65  894808               mov dword ptr [eax + 8], ecx
// 006e9c68  89500c               mov dword ptr [eax + 0xc], edx
// 006e9c6b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006e9c6f  50                   push eax
// 006e9c70  e88bbaffff           call 0x6e5700
// 006e9c75  83c424               add esp, 0x24
// 006e9c78  5f                   pop edi
// 006e9c79  5e                   pop esi
// 006e9c7a  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?FillHeader@CColorSetWhidbey@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp

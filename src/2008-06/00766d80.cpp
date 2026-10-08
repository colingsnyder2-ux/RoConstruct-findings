// from server: 100% by auto
// roc 2008-06 00766d80  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetWhidbey  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00766d80
//
// 00766d80  8b442418             mov eax, dword ptr [esp + 0x18]
// 00766d84  56                   push esi
// 00766d85  57                   push edi
// 00766d86  8bf9                 mov edi, ecx
// 00766d88  85c0                 test eax, eax
// 00766d8a  7409                 je 0x766d95
// 00766d8c  0558ffffff           add eax, 0xffffff58
// 00766d91  8bf0                 mov esi, eax
// 00766d93  eb04                 jmp 0x766d99
// 00766d95  33c0                 xor eax, eax
// 00766d97  33f6                 xor esi, esi
// 00766d99  8d4854               lea ecx, [eax + 0x54]
// 00766d9c  8b01                 mov eax, dword ptr [ecx]
// 00766d9e  8b5018               mov edx, dword ptr [eax + 0x18]
// 00766da1  ffd2                 call edx
// 00766da3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00766da7  8b542414             mov edx, dword ptr [esp + 0x14]
// 00766dab  6a01                 push 1
// 00766dad  83c704               add edi, 4
// 00766db0  57                   push edi
// 00766db1  50                   push eax
// 00766db2  56                   push esi
// 00766db3  83ec10               sub esp, 0x10
// 00766db6  8bc4                 mov eax, esp
// 00766db8  8908                 mov dword ptr [eax], ecx
// 00766dba  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00766dbe  895004               mov dword ptr [eax + 4], edx
// 00766dc1  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00766dc5  894808               mov dword ptr [eax + 8], ecx
// 00766dc8  89500c               mov dword ptr [eax + 0xc], edx
// 00766dcb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00766dcf  50                   push eax
// 00766dd0  e84bbaffff           call 0x762820
// 00766dd5  83c424               add esp, 0x24
// 00766dd8  5f                   pop edi
// 00766dd9  5e                   pop esi
// 00766dda  c21800               ret 0x18
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?FillHeader@CColorSetWhidbey@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp

// from server: 100% by auto
// roc 2012-06 00a439e0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetWhidbey  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a439e0
//
// 00a439e0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a439e4  56                   push esi
// 00a439e5  57                   push edi
// 00a439e6  8bf9                 mov edi, ecx
// 00a439e8  85c0                 test eax, eax
// 00a439ea  7409                 je 0xa439f5
// 00a439ec  0558ffffff           add eax, 0xffffff58
// 00a439f1  8bf0                 mov esi, eax
// 00a439f3  eb04                 jmp 0xa439f9
// 00a439f5  33c0                 xor eax, eax
// 00a439f7  33f6                 xor esi, esi
// 00a439f9  8d4854               lea ecx, [eax + 0x54]
// 00a439fc  8b01                 mov eax, dword ptr [ecx]
// 00a439fe  8b5018               mov edx, dword ptr [eax + 0x18]
// 00a43a01  ffd2                 call edx
// 00a43a03  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a43a07  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a43a0b  6a01                 push 1
// 00a43a0d  83c704               add edi, 4
// 00a43a10  57                   push edi
// 00a43a11  50                   push eax
// 00a43a12  56                   push esi
// 00a43a13  83ec10               sub esp, 0x10
// 00a43a16  8bc4                 mov eax, esp
// 00a43a18  8908                 mov dword ptr [eax], ecx
// 00a43a1a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a43a1e  895004               mov dword ptr [eax + 4], edx
// 00a43a21  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a43a25  894808               mov dword ptr [eax + 8], ecx
// 00a43a28  89500c               mov dword ptr [eax + 0xc], edx
// 00a43a2b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a43a2f  50                   push eax
// 00a43a30  e87bbaffff           call 0xa3f4b0
// 00a43a35  83c424               add esp, 0x24
// 00a43a38  5f                   pop edi
// 00a43a39  5e                   pop esi
// 00a43a3a  c21800               ret 0x18
// library xtp-15.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?FillHeader@CColorSetVisualStudio2005@CXTPDockingPaneVisualStudio2005Beta1Theme@XTPDockingPanePaintThemes@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp

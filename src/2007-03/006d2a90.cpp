// roc 2007-03 006d2a90  unit: seg_006d0000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d2a90
//
// 006d2a90  8b442418             mov eax, dword ptr [esp + 0x18]
// 006d2a94  85c0                 test eax, eax
// 006d2a96  56                   push esi
// 006d2a97  57                   push edi
// 006d2a98  8bf9                 mov edi, ecx
// 006d2a9a  7409                 je 0x6d2aa5
// 006d2a9c  0558ffffff           add eax, 0xffffff58
// 006d2aa1  8bf0                 mov esi, eax
// 006d2aa3  eb04                 jmp 0x6d2aa9
// 006d2aa5  33c0                 xor eax, eax
// 006d2aa7  33f6                 xor esi, esi
// 006d2aa9  8d4854               lea ecx, [eax + 0x54]
// 006d2aac  8b01                 mov eax, dword ptr [ecx]
// 006d2aae  8b5018               mov edx, dword ptr [eax + 0x18]
// 006d2ab1  ffd2                 call edx
// 006d2ab3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d2ab7  8b542414             mov edx, dword ptr [esp + 0x14]
// 006d2abb  6a01                 push 1
// 006d2abd  83c704               add edi, 4
// 006d2ac0  57                   push edi
// 006d2ac1  50                   push eax
// 006d2ac2  56                   push esi
// 006d2ac3  83ec10               sub esp, 0x10
// 006d2ac6  8bc4                 mov eax, esp
// 006d2ac8  8908                 mov dword ptr [eax], ecx
// 006d2aca  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006d2ace  895004               mov dword ptr [eax + 4], edx
// 006d2ad1  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006d2ad5  894808               mov dword ptr [eax + 8], ecx
// 006d2ad8  89500c               mov dword ptr [eax + 0xc], edx
// 006d2adb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006d2adf  50                   push eax
// 006d2ae0  e8bbbaffff           call 0x6ce5a0
// 006d2ae5  83c424               add esp, 0x24
// 006d2ae8  5f                   pop edi
// 006d2ae9  5e                   pop esi
// 006d2aea  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?FillHeader@CColorSetWhidbey@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp

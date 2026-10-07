// roc 2011-06 008cb630  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetWhidbey  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008cb630
//
// 008cb630  8b442418             mov eax, dword ptr [esp + 0x18]
// 008cb634  56                   push esi
// 008cb635  57                   push edi
// 008cb636  8bf9                 mov edi, ecx
// 008cb638  85c0                 test eax, eax
// 008cb63a  7409                 je 0x8cb645
// 008cb63c  0558ffffff           add eax, 0xffffff58
// 008cb641  8bf0                 mov esi, eax
// 008cb643  eb04                 jmp 0x8cb649
// 008cb645  33c0                 xor eax, eax
// 008cb647  33f6                 xor esi, esi
// 008cb649  8d4854               lea ecx, [eax + 0x54]
// 008cb64c  8b01                 mov eax, dword ptr [ecx]
// 008cb64e  8b5018               mov edx, dword ptr [eax + 0x18]
// 008cb651  ffd2                 call edx
// 008cb653  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008cb657  8b542414             mov edx, dword ptr [esp + 0x14]
// 008cb65b  6a01                 push 1
// 008cb65d  83c704               add edi, 4
// 008cb660  57                   push edi
// 008cb661  50                   push eax
// 008cb662  56                   push esi
// 008cb663  83ec10               sub esp, 0x10
// 008cb666  8bc4                 mov eax, esp
// 008cb668  8908                 mov dword ptr [eax], ecx
// 008cb66a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008cb66e  895004               mov dword ptr [eax + 4], edx
// 008cb671  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008cb675  894808               mov dword ptr [eax + 8], ecx
// 008cb678  89500c               mov dword ptr [eax + 0xc], edx
// 008cb67b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008cb67f  50                   push eax
// 008cb680  e85bbaffff           call 0x8c70e0
// 008cb685  83c424               add esp, 0x24
// 008cb688  5f                   pop edi
// 008cb689  5e                   pop esi
// 008cb68a  c21800               ret 0x18
// library xtp-15.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?FillHeader@CColorSetVisualStudio2005@CXTPDockingPaneVisualStudio2005Beta1Theme@XTPDockingPanePaintThemes@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp

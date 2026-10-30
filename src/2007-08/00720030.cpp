// from server: 100% by auto
// roc 2007-08 00720030  unit: CXTColorSelectorCtrlThemeOfficeXP  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720030
//
// 00720030  56                   push esi
// 00720031  8bf1                 mov esi, ecx
// 00720033  e868ffffff           call 0x71ffa0
// 00720038  e8338ff4ff           call 0x668f70
// 0072003d  6a20                 push 0x20
// 0072003f  8bc8                 mov ecx, eax
// 00720041  e82a87f4ff           call 0x668770
// 00720046  894614               mov dword ptr [esi + 0x14], eax
// 00720049  e8228ff4ff           call 0x668f70
// 0072004e  6a20                 push 0x20
// 00720050  8bc8                 mov ecx, eax
// 00720052  e81987f4ff           call 0x668770
// 00720057  894618               mov dword ptr [esi + 0x18], eax
// 0072005a  e8118ff4ff           call 0x668f70
// 0072005f  6a29                 push 0x29
// 00720061  8bc8                 mov ecx, eax
// 00720063  e80887f4ff           call 0x668770
// 00720068  89461c               mov dword ptr [esi + 0x1c], eax
// 0072006b  e8008ff4ff           call 0x668f70
// 00720070  6a21                 push 0x21
// 00720072  8bc8                 mov ecx, eax
// 00720074  e8f786f4ff           call 0x668770
// 00720079  894620               mov dword ptr [esi + 0x20], eax
// 0072007c  e8ef8ef4ff           call 0x668f70
// 00720081  6a1f                 push 0x1f
// 00720083  8bc8                 mov ecx, eax
// 00720085  e8e686f4ff           call 0x668770
// 0072008a  894624               mov dword ptr [esi + 0x24], eax
// 0072008d  e8de8ef4ff           call 0x668f70
// 00720092  6a24                 push 0x24
// 00720094  8bc8                 mov ecx, eax
// 00720096  e8d586f4ff           call 0x668770
// 0072009b  894628               mov dword ptr [esi + 0x28], eax
// 0072009e  5e                   pop esi
// 0072009f  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?RefreshMetrics@CXTColorSelectorCtrlThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorSelectorCtrlTheme.cpp

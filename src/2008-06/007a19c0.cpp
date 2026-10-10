// roc 2008-06 007a19c0  unit: CXTCaptionButtonTheme  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a19c0
//
// 007a19c0  56                   push esi
// 007a19c1  8bf1                 mov esi, ecx
// 007a19c3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007a19c7  85c9                 test ecx, ecx
// 007a19c9  7442                 je 0x7a1a0d
// 007a19cb  8b01                 mov eax, dword ptr [ecx]
// 007a19cd  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 007a19d3  ffd2                 call edx
// 007a19d5  a900100000           test eax, 0x1000
// 007a19da  7431                 je 0x7a1a0d
// 007a19dc  83c674               add esi, 0x74
// 007a19df  8bce                 mov ecx, esi
// 007a19e1  e82a6cf7ff           call 0x718610
// 007a19e6  85c0                 test eax, eax
// 007a19e8  750d                 jne 0x7a19f7
// 007a19ea  6864198500           push 0x851964
// 007a19ef  50                   push eax
// 007a19f0  8bce                 mov ecx, esi
// 007a19f2  e8796bf7ff           call 0x718570
// 007a19f7  8bce                 mov ecx, esi
// 007a19f9  e8226cf7ff           call 0x718620
// 007a19fe  85c0                 test eax, eax
// 007a1a00  740b                 je 0x7a1a0d
// 007a1a02  8bce                 mov ecx, esi
// 007a1a04  e8076cf7ff           call 0x718610
// 007a1a09  5e                   pop esi
// 007a1a0a  c20400               ret 4
// 007a1a0d  33c0                 xor eax, eax
// 007a1a0f  5e                   pop esi
// 007a1a10  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Controls\XTButtonTheme.cpp (function ?UseWinXPThemes@CXTButtonTheme@@UAEHPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTButtonTheme.cpp

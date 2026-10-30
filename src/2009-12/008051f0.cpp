// roc 2009-12 008051f0  unit: CXTPCommandBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008051f0
//
// 008051f0  56                   push esi
// 008051f1  8b742408             mov esi, dword ptr [esp + 8]
// 008051f5  8b4660               mov eax, dword ptr [esi + 0x60]
// 008051f8  50                   push eax
// 008051f9  e8a20cffff           call 0x7f5ea0
// 008051fe  50                   push eax
// 008051ff  e83aeafeff           call 0x7f3c3e
// 00805204  83c408               add esp, 8
// 00805207  85c0                 test eax, eax
// 00805209  7410                 je 0x80521b
// 0080520b  8b10                 mov edx, dword ptr [eax]
// 0080520d  8bc8                 mov ecx, eax
// 0080520f  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 00805215  ffd0                 call eax
// 00805217  5e                   pop esi
// 00805218  c20400               ret 4
// 0080521b  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0080521e  51                   push ecx
// 0080521f  e81cbf0000           call 0x811140
// 00805224  50                   push eax
// 00805225  e814eafeff           call 0x7f3c3e
// 0080522a  83c408               add esp, 8
// 0080522d  85c0                 test eax, eax
// 0080522f  7411                 je 0x805242
// 00805231  6a00                 push 0
// 00805233  50                   push eax
// 00805234  8bc8                 mov ecx, eax
// 00805236  e895f2ffff           call 0x8044d0
// 0080523b  8bc8                 mov ecx, eax
// 0080523d  e8ce190100           call 0x816c10
// 00805242  5e                   pop esi
// 00805243  c20400               ret 4
// copied from an identical function in another client (function ?OnKeyboardTip@CXTPCommandBar@@UAEXPAVCXTPCommandBarKeyboardTip@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp
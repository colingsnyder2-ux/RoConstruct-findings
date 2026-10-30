// roc 2009-12 0085ba80  unit: CXTPStatusBarPane  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085ba80
//
// 0085ba80  83ec10               sub esp, 0x10
// 0085ba83  56                   push esi
// 0085ba84  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0085ba88  85f6                 test esi, esi
// 0085ba8a  743e                 je 0x85baca
// 0085ba8c  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085ba90  50                   push eax
// 0085ba91  e86af8ffff           call 0x85b300
// 0085ba96  85c0                 test eax, eax
// 0085ba98  750e                 jne 0x85baa8
// 0085ba9a  56                   push esi
// 0085ba9b  ff159cca9800         call dword ptr [0x98ca9c]
// 0085baa1  5e                   pop esi
// 0085baa2  83c410               add esp, 0x10
// 0085baa5  c20800               ret 8
// 0085baa8  8d4c2404             lea ecx, [esp + 4]
// 0085baac  51                   push ecx
// 0085baad  8bc8                 mov ecx, eax
// 0085baaf  e88cfdffff           call 0x85b840
// 0085bab4  8b10                 mov edx, dword ptr [eax]
// 0085bab6  8916                 mov dword ptr [esi], edx
// 0085bab8  8b4804               mov ecx, dword ptr [eax + 4]
// 0085babb  894e04               mov dword ptr [esi + 4], ecx
// 0085babe  8b5008               mov edx, dword ptr [eax + 8]
// 0085bac1  895608               mov dword ptr [esi + 8], edx
// 0085bac4  8b400c               mov eax, dword ptr [eax + 0xc]
// 0085bac7  89460c               mov dword ptr [esi + 0xc], eax
// 0085baca  5e                   pop esi
// 0085bacb  83c410               add esp, 0x10
// 0085bace  c20800               ret 8
// copied from an identical function in another client (function ?GetItemRect@CXTPStatusBar@@QBEXHPAUtagRECT@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp
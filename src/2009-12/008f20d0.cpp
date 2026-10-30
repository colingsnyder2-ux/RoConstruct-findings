// roc 2009-12 008f20d0  unit: CXTPRibbonSystemPopupBar  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f20d0
//
// 008f20d0  83ec10               sub esp, 0x10
// 008f20d3  56                   push esi
// 008f20d4  8bf1                 mov esi, ecx
// 008f20d6  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008f20dc  50                   push eax
// 008f20dd  e83ef8ffff           call 0x8f1920
// 008f20e2  50                   push eax
// 008f20e3  e8561bf0ff           call 0x7f3c3e
// 008f20e8  83c408               add esp, 8
// 008f20eb  85c0                 test eax, eax
// 008f20ed  7518                 jne 0x8f2107
// 008f20ef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008f20f3  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f20f7  51                   push ecx
// 008f20f8  52                   push edx
// 008f20f9  8bce                 mov ecx, esi
// 008f20fb  e82064f1ff           call 0x808520
// 008f2100  5e                   pop esi
// 008f2101  83c410               add esp, 0x10
// 008f2104  c20800               ret 8
// 008f2107  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008f210d  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 008f2113  894c2404             mov dword ptr [esp + 4], ecx
// 008f2117  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 008f211d  89542408             mov dword ptr [esp + 8], edx
// 008f2121  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 008f2127  894c240c             mov dword ptr [esp + 0xc], ecx
// 008f212b  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 008f2131  8d4c2404             lea ecx, [esp + 4]
// 008f2135  89542410             mov dword ptr [esp + 0x10], edx
// 008f2139  51                   push ecx
// 008f213a  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 008f2140  e8b51cf0ff           call 0x7f3dfa
// 008f2145  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008f2149  8b442418             mov eax, dword ptr [esp + 0x18]
// 008f214d  52                   push edx
// 008f214e  50                   push eax
// 008f214f  8d4c240c             lea ecx, [esp + 0xc]
// 008f2153  51                   push ecx
// 008f2154  ff155cca9800         call dword ptr [0x98ca5c]
// 008f215a  85c0                 test eax, eax
// 008f215c  740a                 je 0x8f2168
// 008f215e  83c8ff               or eax, 0xffffffff
// 008f2161  5e                   pop esi
// 008f2162  83c410               add esp, 0x10
// 008f2165  c20800               ret 8
// 008f2168  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008f216c  8b442418             mov eax, dword ptr [esp + 0x18]
// 008f2170  52                   push edx
// 008f2171  50                   push eax
// 008f2172  8bce                 mov ecx, esi
// 008f2174  e8a763f1ff           call 0x808520
// 008f2179  5e                   pop esi
// 008f217a  83c410               add esp, 0x10
// 008f217d  c20800               ret 8
// copied from an identical function in another client (function ?OnNcHitTest@CXTPRibbonSystemPopupBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp
// roc 2009-12 008901f0  unit: CXTPToolBar::CControlButtonHide  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008901f0
//
// 008901f0  56                   push esi
// 008901f1  8bf1                 mov esi, ecx
// 008901f3  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008901f9  83f8ff               cmp eax, -1
// 008901fc  750f                 jne 0x89020d
// 008901fe  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00890204  85c9                 test ecx, ecx
// 00890206  7405                 je 0x89020d
// 00890208  e8a363f6ff           call 0x7f65b0
// 0089020d  85c0                 test eax, eax
// 0089020f  7424                 je 0x890235
// 00890211  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00890217  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0089021e  7409                 je 0x890229
// 00890220  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 00890227  750c                 jne 0x890235
// 00890229  8b06                 mov eax, dword ptr [esi]
// 0089022b  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 00890231  8bce                 mov ecx, esi
// 00890233  ffd2                 call edx
// 00890235  5e                   pop esi
// 00890236  c20800               ret 8
// copied from an identical function in another client (function ?OnLButtonUp@CXTPControlButton@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlButton.cpp
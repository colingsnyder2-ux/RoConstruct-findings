// roc 2009-12 008444f0  unit: CXTPPopupToolBar  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008444f0
//
// 008444f0  56                   push esi
// 008444f1  8bf1                 mov esi, ecx
// 008444f3  83bea801000000       cmp dword ptr [esi + 0x1a8], 0
// 008444fa  0f8587000000         jne 0x844587
// 00844500  57                   push edi
// 00844501  bf01000000           mov edi, 1
// 00844506  39bea4010000         cmp dword ptr [esi + 0x1a4], edi
// 0084450c  7578                 jne 0x844586
// 0084450e  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00844514  85c9                 test ecx, ecx
// 00844516  7405                 je 0x84451d
// 00844518  e843d80100           call 0x861d60
// 0084451d  6a00                 push 0
// 0084451f  6aff                 push -1
// 00844521  8bce                 mov ecx, esi
// 00844523  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 00844529  89bea8010000         mov dword ptr [esi + 0x1a8], edi
// 0084452f  e86c20fcff           call 0x8065a0
// 00844534  8b06                 mov eax, dword ptr [esi]
// 00844536  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0084453c  6a00                 push 0
// 0084453e  6aff                 push -1
// 00844540  8bce                 mov ecx, esi
// 00844542  ffd2                 call edx
// 00844544  8b06                 mov eax, dword ptr [esi]
// 00844546  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0084454c  8bce                 mov ecx, esi
// 0084454e  ffd2                 call edx
// 00844550  68b0647f00           push 0x7f64b0
// 00844555  b9d0bab900           mov ecx, 0xb9bad0
// 0084455a  e8dd1e0e00           call 0x92643c
// 0084455f  85c0                 test eax, eax
// 00844561  7505                 jne 0x844568
// 00844563  e8a4f5faff           call 0x7f3b0c
// 00844568  68b0647f00           push 0x7f64b0
// 0084456d  b9d0bab900           mov ecx, 0xb9bad0
// 00844572  897828               mov dword ptr [eax + 0x28], edi
// 00844575  e8c21e0e00           call 0x92643c
// 0084457a  85c0                 test eax, eax
// 0084457c  7505                 jne 0x844583
// 0084457e  e889f5faff           call 0x7f3b0c
// 00844583  897840               mov dword ptr [eax + 0x40], edi
// 00844586  5f                   pop edi
// 00844587  5e                   pop esi
// 00844588  c3                   ret 
// copied from an identical function in another client (function ?ExpandBar@CXTPPopupBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
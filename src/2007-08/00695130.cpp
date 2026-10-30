// from server: 100% by auto
// roc 2007-08 00695130  unit: CXTPToolTipContextToolTip::PAUTOOLITEM::?$CArray  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00695130
//
// 00695130  8b442404             mov eax, dword ptr [esp + 4]
// 00695134  85c0                 test eax, eax
// 00695136  56                   push esi
// 00695137  8bf1                 mov esi, ecx
// 00695139  894668               mov dword ptr [esi + 0x68], eax
// 0069513c  7549                 jne 0x695187
// 0069513e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00695141  85c9                 test ecx, ecx
// 00695143  7427                 je 0x69516c
// 00695145  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0069514b  85c0                 test eax, eax
// 0069514d  741d                 je 0x69516c
// 0069514f  50                   push eax
// 00695150  51                   push ecx
// 00695151  ff15e0ec7700         call dword ptr [0x77ece0]
// 00695157  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0069515d  c7861801000000000000 mov dword ptr [esi + 0x118], 0
// 00695167  e804f0ffff           call 0x694170
// 0069516c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0069516f  85c0                 test eax, eax
// 00695171  7414                 je 0x695187
// 00695173  50                   push eax
// 00695174  ff15a0ed7700         call dword ptr [0x77eda0]
// 0069517a  85c0                 test eax, eax
// 0069517c  7409                 je 0x695187
// 0069517e  6a00                 push 0
// 00695180  8bce                 mov ecx, esi
// 00695182  e8d9f1ffff           call 0x694360
// 00695187  5e                   pop esi
// 00695188  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?Activate@CXTPToolTipContextToolTip@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp

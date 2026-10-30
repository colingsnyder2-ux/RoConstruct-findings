// from server: 100% by auto
// roc 2011-06 00873870  unit: CXTPPropertyGridToolTip  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00873870
//
// 00873870  8b442404             mov eax, dword ptr [esp + 4]
// 00873874  56                   push esi
// 00873875  8bf1                 mov esi, ecx
// 00873877  894668               mov dword ptr [esi + 0x68], eax
// 0087387a  85c0                 test eax, eax
// 0087387c  7549                 jne 0x8738c7
// 0087387e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00873881  85c9                 test ecx, ecx
// 00873883  7427                 je 0x8738ac
// 00873885  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0087388b  85c0                 test eax, eax
// 0087388d  741d                 je 0x8738ac
// 0087388f  50                   push eax
// 00873890  51                   push ecx
// 00873891  ff15d019a400         call dword ptr [0xa419d0]
// 00873897  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0087389d  c7861801000000000000 mov dword ptr [esi + 0x118], 0
// 008738a7  e824e2ffff           call 0x871ad0
// 008738ac  8b4620               mov eax, dword ptr [esi + 0x20]
// 008738af  85c0                 test eax, eax
// 008738b1  7414                 je 0x8738c7
// 008738b3  50                   push eax
// 008738b4  ff15201ca400         call dword ptr [0xa41c20]
// 008738ba  85c0                 test eax, eax
// 008738bc  7409                 je 0x8738c7
// 008738be  6a00                 push 0
// 008738c0  8bce                 mov ecx, esi
// 008738c2  e8e9e6ffff           call 0x871fb0
// 008738c7  5e                   pop esi
// 008738c8  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?Activate@CXTPToolTipContextToolTip@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp

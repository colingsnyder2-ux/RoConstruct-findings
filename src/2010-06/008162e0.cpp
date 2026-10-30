// roc 2010-06 008162e0  unit: CXTPToolTipContextToolTip::PAUTOOLITEM::?$CArray  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008162e0
//
// 008162e0  56                   push esi
// 008162e1  8bf1                 mov esi, ecx
// 008162e3  837e6800             cmp dword ptr [esi + 0x68], 0
// 008162e7  0f840a010000         je 0x8163f7
// 008162ed  53                   push ebx
// 008162ee  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008162f2  8b4304               mov eax, dword ptr [ebx + 4]
// 008162f5  3d00020000           cmp eax, 0x200
// 008162fa  7207                 jb 0x816303
// 008162fc  3d0a020000           cmp eax, 0x20a
// 00816301  7616                 jbe 0x816319
// 00816303  3da0000000           cmp eax, 0xa0
// 00816308  0f82e8000000         jb 0x8163f6
// 0081630e  3da9000000           cmp eax, 0xa9
// 00816313  0f87dd000000         ja 0x8163f6
// 00816319  57                   push edi
// 0081631a  e8a1feffff           call 0x8161c0
// 0081631f  817b0401020000       cmp dword ptr [ebx + 4], 0x201
// 00816326  8bf8                 mov edi, eax
// 00816328  7512                 jne 0x81633c
// 0081632a  85ff                 test edi, edi
// 0081632c  7424                 je 0x816352
// 0081632e  57                   push edi
// 0081632f  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00816335  e886d8ffff           call 0x813bc0
// 0081633a  eb14                 jmp 0x816350
// 0081633c  85ff                 test edi, edi
// 0081633e  7412                 je 0x816352
// 00816340  57                   push edi
// 00816341  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00816347  e844d8ffff           call 0x813b90
// 0081634c  85c0                 test eax, eax
// 0081634e  7402                 je 0x816352
// 00816350  33ff                 xor edi, edi
// 00816352  55                   push ebp
// 00816353  8bae18010000         mov ebp, dword ptr [esi + 0x118]
// 00816359  85ed                 test ebp, ebp
// 0081635b  742e                 je 0x81638b
// 0081635d  8d9ee0000000         lea ebx, [esi + 0xe0]
// 00816363  57                   push edi
// 00816364  8bcb                 mov ecx, ebx
// 00816366  e825d8ffff           call 0x813b90
// 0081636b  85c0                 test eax, eax
// 0081636d  751c                 jne 0x81638b
// 0081636f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00816372  55                   push ebp
// 00816373  50                   push eax
// 00816374  ff1560ba9e00         call dword ptr [0x9eba60]
// 0081637a  8bcb                 mov ecx, ebx
// 0081637c  c7861801000000000000 mov dword ptr [esi + 0x118], 0
// 00816386  e805dfffff           call 0x814290
// 0081638b  5d                   pop ebp
// 0081638c  85ff                 test edi, edi
// 0081638e  745c                 je 0x8163ec
// 00816390  57                   push edi
// 00816391  8d4e70               lea ecx, [esi + 0x70]
// 00816394  e8f7d7ffff           call 0x813b90
// 00816399  85c0                 test eax, eax
// 0081639b  7558                 jne 0x8163f5
// 0081639d  ff1524a39e00         call dword ptr [0x9ea324]
// 008163a3  2b861c010000         sub eax, dword ptr [esi + 0x11c]
// 008163a9  57                   push edi
// 008163aa  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 008163b0  723c                 jb 0x8163ee
// 008163b2  8d9ee0000000         lea ebx, [esi + 0xe0]
// 008163b8  8bcb                 mov ecx, ebx
// 008163ba  e8d1d7ffff           call 0x813b90
// 008163bf  85c0                 test eax, eax
// 008163c1  7532                 jne 0x8163f5
// 008163c3  57                   push edi
// 008163c4  8bcb                 mov ecx, ebx
// 008163c6  e8f5d7ffff           call 0x813bc0
// 008163cb  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008163d1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008163d4  6a00                 push 0
// 008163d6  50                   push eax
// 008163d7  6a01                 push 1
// 008163d9  51                   push ecx
// 008163da  ff1554bc9e00         call dword ptr [0x9ebc54]
// 008163e0  5f                   pop edi
// 008163e1  5b                   pop ebx
// 008163e2  898618010000         mov dword ptr [esi + 0x118], eax
// 008163e8  5e                   pop esi
// 008163e9  c20400               ret 4
// 008163ec  6a00                 push 0
// 008163ee  8bce                 mov ecx, esi
// 008163f0  e87be3ffff           call 0x814770
// 008163f5  5f                   pop edi
// 008163f6  5b                   pop ebx
// 008163f7  5e                   pop esi
// 008163f8  c20400               ret 4
// copied from an identical function in another client (function ?RelayEvent@CXTPToolTipContextToolTip@@QAEXPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp
// roc 2010-06 008418a0  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008418a0
//
// 008418a0  6aff                 push -1
// 008418a2  68886d9b00           push 0x9b6d88
// 008418a7  64a100000000         mov eax, dword ptr fs:[0]
// 008418ad  50                   push eax
// 008418ae  83ec18               sub esp, 0x18
// 008418b1  53                   push ebx
// 008418b2  55                   push ebp
// 008418b3  56                   push esi
// 008418b4  57                   push edi
// 008418b5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008418ba  33c4                 xor eax, esp
// 008418bc  50                   push eax
// 008418bd  8d44242c             lea eax, [esp + 0x2c]
// 008418c1  64a300000000         mov dword ptr fs:[0], eax
// 008418c7  8bd9                 mov ebx, ecx
// 008418c9  895c2414             mov dword ptr [esp + 0x14], ebx
// 008418cd  8b03                 mov eax, dword ptr [ebx]
// 008418cf  50                   push eax
// 008418d0  8d4c241c             lea ecx, [esp + 0x1c]
// 008418d4  e85b6ff6ff           call 0x7a8834
// 008418d9  33ed                 xor ebp, ebp
// 008418db  396b24               cmp dword ptr [ebx + 0x24], ebp
// 008418de  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008418e6  0f8e98000000         jle 0x841984
// 008418ec  8d642400             lea esp, [esp]
// 008418f0  85ed                 test ebp, ebp
// 008418f2  0f8cd5000000         jl 0x8419cd
// 008418f8  3b6b24               cmp ebp, dword ptr [ebx + 0x24]
// 008418fb  0f8dcc000000         jge 0x8419cd
// 00841901  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00841904  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 00841907  8d04a9               lea eax, [ecx + ebp*4]
// 0084190a  33ff                 xor edi, edi
// 0084190c  397e2c               cmp dword ptr [esi + 0x2c], edi
// 0084190f  7e2f                 jle 0x841940
// 00841911  33db                 xor ebx, ebx
// 00841913  85db                 test ebx, ebx
// 00841915  0f8cb2000000         jl 0x8419cd
// 0084191b  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 0084191e  0f8da9000000         jge 0x8419cd
// 00841924  8b4628               mov eax, dword ptr [esi + 0x28]
// 00841927  03c3                 add eax, ebx
// 00841929  50                   push eax
// 0084192a  8d4c241c             lea ecx, [esp + 0x1c]
// 0084192e  e8c3ba1300           call 0x97d3f6
// 00841933  47                   inc edi
// 00841934  83c310               add ebx, 0x10
// 00841937  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 0084193a  7cd7                 jl 0x841913
// 0084193c  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00841940  56                   push esi
// 00841941  8d54241c             lea edx, [esp + 0x1c]
// 00841945  52                   push edx
// 00841946  8bcb                 mov ecx, ebx
// 00841948  e863fcffff           call 0x8415b0
// 0084194d  6a00                 push 0
// 0084194f  8d4c241c             lea ecx, [esp + 0x1c]
// 00841953  e848b61300           call 0x97cfa0
// 00841958  837e2006             cmp dword ptr [esi + 0x20], 6
// 0084195c  7e1c                 jle 0x84197a
// 0084195e  6a01                 push 1
// 00841960  55                   push ebp
// 00841961  8d4b1c               lea ecx, [ebx + 0x1c]
// 00841964  e8d770f7ff           call 0x7b8a40
// 00841969  8bce                 mov ecx, esi
// 0084196b  e8d0feffff           call 0x841840
// 00841970  56                   push esi
// 00841971  e82460f6ff           call 0x7a799a
// 00841976  83c404               add esp, 4
// 00841979  4d                   dec ebp
// 0084197a  45                   inc ebp
// 0084197b  3b6b24               cmp ebp, dword ptr [ebx + 0x24]
// 0084197e  0f8c6cffffff         jl 0x8418f0
// 00841984  837b2400             cmp dword ptr [ebx + 0x24], 0
// 00841988  751e                 jne 0x8419a8
// 0084198a  837b1000             cmp dword ptr [ebx + 0x10], 0
// 0084198e  7418                 je 0x8419a8
// 00841990  8b03                 mov eax, dword ptr [ebx]
// 00841992  8b4020               mov eax, dword ptr [eax + 0x20]
// 00841995  6843cd0a00           push 0xacd43
// 0084199a  50                   push eax
// 0084199b  ff1560ba9e00         call dword ptr [0x9eba60]
// 008419a1  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 008419a8  8d4c2418             lea ecx, [esp + 0x18]
// 008419ac  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 008419b4  e8756ef6ff           call 0x7a882e
// 008419b9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008419bd  64890d00000000       mov dword ptr fs:[0], ecx
// 008419c4  59                   pop ecx
// 008419c5  5f                   pop edi
// 008419c6  5e                   pop esi
// 008419c7  5d                   pop ebp
// 008419c8  5b                   pop ebx
// 008419c9  83c424               add esp, 0x24
// 008419cc  c3                   ret 
// 008419cd  e87a62f6ff           call 0x7a7c4c
// copied from an identical function in another client (function ?OnAnimate@CXTPCommandBarAnimation@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp
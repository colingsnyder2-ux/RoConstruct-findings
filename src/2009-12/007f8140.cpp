// roc 2009-12 007f8140  unit: CXTPControl  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f8140
//
// 007f8140  56                   push esi
// 007f8141  57                   push edi
// 007f8142  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007f8146  8bf1                 mov esi, ecx
// 007f8148  3bbea4000000         cmp edi, dword ptr [esi + 0xa4]
// 007f814e  7507                 jne 0x7f8157
// 007f8150  5f                   pop edi
// 007f8151  33c0                 xor eax, eax
// 007f8153  5e                   pop esi
// 007f8154  c20400               ret 4
// 007f8157  83ff02               cmp edi, 2
// 007f815a  7405                 je 0x7f8161
// 007f815c  83ff03               cmp edi, 3
// 007f815f  751d                 jne 0x7f817e
// 007f8161  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f8167  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 007f816d  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 007f8173  7409                 je 0x7f817e
// 007f8175  6a00                 push 0
// 007f8177  6aff                 push -1
// 007f8179  e822e40000           call 0x8065a0
// 007f817e  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f8184  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 007f818a  8b11                 mov edx, dword ptr [ecx]
// 007f818c  8b8290010000         mov eax, dword ptr [edx + 0x190]
// 007f8192  56                   push esi
// 007f8193  57                   push edi
// 007f8194  ffd0                 call eax
// 007f8196  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007f819c  83f8ff               cmp eax, -1
// 007f819f  750f                 jne 0x7f81b0
// 007f81a1  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007f81a7  85c9                 test ecx, ecx
// 007f81a9  7405                 je 0x7f81b0
// 007f81ab  e800e4ffff           call 0x7f65b0
// 007f81b0  85c0                 test eax, eax
// 007f81b2  750e                 jne 0x7f81c2
// 007f81b4  83ff02               cmp edi, 2
// 007f81b7  7409                 je 0x7f81c2
// 007f81b9  83ff03               cmp edi, 3
// 007f81bc  7404                 je 0x7f81c2
// 007f81be  85ff                 test edi, edi
// 007f81c0  750f                 jne 0x7f81d1
// 007f81c2  33c9                 xor ecx, ecx
// 007f81c4  85ff                 test edi, edi
// 007f81c6  0f94c1               sete cl
// 007f81c9  51                   push ecx
// 007f81ca  8bce                 mov ecx, esi
// 007f81cc  e8efe4ffff           call 0x7f66c0
// 007f81d1  5f                   pop edi
// 007f81d2  b801000000           mov eax, 1
// 007f81d7  5e                   pop esi
// 007f81d8  c20400               ret 4
// copied from an identical function in another client (function ?OnSetSelected@CXTPControl@@MAEHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp
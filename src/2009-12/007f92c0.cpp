// roc 2009-12 007f92c0  unit: CXTPControlComboBox  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f92c0
//
// 007f92c0  56                   push esi
// 007f92c1  8bf1                 mov esi, ecx
// 007f92c3  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007f92c9  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 007f92d0  7514                 jne 0x7f92e6
// 007f92d2  8b16                 mov edx, dword ptr [esi]
// 007f92d4  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 007f92da  6a00                 push 0
// 007f92dc  ffd0                 call eax
// 007f92de  f7d8                 neg eax
// 007f92e0  1bc0                 sbb eax, eax
// 007f92e2  f7d8                 neg eax
// 007f92e4  5e                   pop esi
// 007f92e5  c3                   ret 
// 007f92e6  e8a5c9ffff           call 0x7f5c90
// 007f92eb  83f802               cmp eax, 2
// 007f92ee  740c                 je 0x7f92fc
// 007f92f0  8bce                 mov ecx, esi
// 007f92f2  e899c9ffff           call 0x7f5c90
// 007f92f7  83f803               cmp eax, 3
// 007f92fa  7519                 jne 0x7f9315
// 007f92fc  8b16                 mov edx, dword ptr [esi]
// 007f92fe  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 007f9304  6a00                 push 0
// 007f9306  8bce                 mov ecx, esi
// 007f9308  ffd0                 call eax
// 007f930a  85c0                 test eax, eax
// 007f930c  7407                 je 0x7f9315
// 007f930e  b801000000           mov eax, 1
// 007f9313  5e                   pop esi
// 007f9314  c3                   ret 
// 007f9315  33c0                 xor eax, eax
// 007f9317  5e                   pop esi
// 007f9318  c3                   ret 
// copied from an identical function in another client (function ?IsImageVisible@CXTPControlComboBox@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
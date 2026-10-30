// roc 2009-12 0085b770  unit: CXTPStatusBar  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b770
//
// 0085b770  56                   push esi
// 0085b771  8bf1                 mov esi, ecx
// 0085b773  e8faac0c00           call 0x926472
// 0085b778  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 0085b77e  2500000010           and eax, 0x10000000
// 0085b783  33d2                 xor edx, edx
// 0085b785  f6c101               test cl, 1
// 0085b788  740b                 je 0x85b795
// 0085b78a  85c0                 test eax, eax
// 0085b78c  7407                 je 0x85b795
// 0085b78e  ba80000000           mov edx, 0x80
// 0085b793  eb0e                 jmp 0x85b7a3
// 0085b795  f6c102               test cl, 2
// 0085b798  7409                 je 0x85b7a3
// 0085b79a  85c0                 test eax, eax
// 0085b79c  7505                 jne 0x85b7a3
// 0085b79e  ba40000000           mov edx, 0x40
// 0085b7a3  83e1fc               and ecx, 0xfffffffc
// 0085b7a6  898e80000000         mov dword ptr [esi + 0x80], ecx
// 0085b7ac  85d2                 test edx, edx
// 0085b7ae  7415                 je 0x85b7c5
// 0085b7b0  83ca17               or edx, 0x17
// 0085b7b3  52                   push edx
// 0085b7b4  6a00                 push 0
// 0085b7b6  6a00                 push 0
// 0085b7b8  6a00                 push 0
// 0085b7ba  6a00                 push 0
// 0085b7bc  6a00                 push 0
// 0085b7be  8bce                 mov ecx, esi
// 0085b7c0  e86784f9ff           call 0x7f3c2c
// 0085b7c5  8bce                 mov ecx, esi
// 0085b7c7  e8a6ac0c00           call 0x926472
// 0085b7cc  a900000010           test eax, 0x10000000
// 0085b7d1  745d                 je 0x85b830
// 0085b7d3  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 0085b7d9  85c9                 test ecx, ecx
// 0085b7db  740c                 je 0x85b7e9
// 0085b7dd  e890ac0c00           call 0x926472
// 0085b7e2  a900000010           test eax, 0x10000000
// 0085b7e7  7447                 je 0x85b830
// 0085b7e9  8b4638               mov eax, dword ptr [esi + 0x38]
// 0085b7ec  57                   push edi
// 0085b7ed  8b3dbccb9800         mov edi, dword ptr [0x98cbbc]
// 0085b7f3  85c0                 test eax, eax
// 0085b7f5  7506                 jne 0x85b7fd
// 0085b7f7  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085b7fa  50                   push eax
// 0085b7fb  ffd7                 call edi
// 0085b7fd  50                   push eax
// 0085b7fe  e82783f9ff           call 0x7f3b2a
// 0085b803  85c0                 test eax, eax
// 0085b805  7510                 jne 0x85b817
// 0085b807  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085b80a  51                   push ecx
// 0085b80b  ffd7                 call edi
// 0085b80d  50                   push eax
// 0085b80e  e81783f9ff           call 0x7f3b2a
// 0085b813  85c0                 test eax, eax
// 0085b815  7412                 je 0x85b829
// 0085b817  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085b81b  8b16                 mov edx, dword ptr [esi]
// 0085b81d  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 0085b823  51                   push ecx
// 0085b824  50                   push eax
// 0085b825  8bce                 mov ecx, esi
// 0085b827  ffd2                 call edx
// 0085b829  5f                   pop edi
// 0085b82a  33c0                 xor eax, eax
// 0085b82c  5e                   pop esi
// 0085b82d  c20800               ret 8
// 0085b830  33c0                 xor eax, eax
// 0085b832  5e                   pop esi
// 0085b833  c20800               ret 8
// copied from an identical function in another client (function ?OnIdleUpdateCmdUI@CXTPStatusBar@@QAEJIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp
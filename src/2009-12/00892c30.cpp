// roc 2009-12 00892c30  unit: CXTPMenuBar  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892c30
//
// 00892c30  51                   push ecx
// 00892c31  83b9a801000000       cmp dword ptr [ecx + 0x1a8], 0
// 00892c38  c7042400000000       mov dword ptr [esp], 0
// 00892c3f  7506                 jne 0x892c47
// 00892c41  33c0                 xor eax, eax
// 00892c43  59                   pop ecx
// 00892c44  c20400               ret 4
// 00892c47  e84444f7ff           call 0x807090
// 00892c4c  50                   push eax
// 00892c4d  e8a0390900           call 0x9265f2
// 00892c52  50                   push eax
// 00892c53  e8e60ff6ff           call 0x7f3c3e
// 00892c58  8b80e8000000         mov eax, dword ptr [eax + 0xe8]
// 00892c5e  83c408               add esp, 8
// 00892c61  85c0                 test eax, eax
// 00892c63  74dc                 je 0x892c41
// 00892c65  8d0c24               lea ecx, [esp]
// 00892c68  51                   push ecx
// 00892c69  6a00                 push 0
// 00892c6b  6829020000           push 0x229
// 00892c70  50                   push eax
// 00892c71  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00892c77  85c0                 test eax, eax
// 00892c79  7504                 jne 0x892c7f
// 00892c7b  33d2                 xor edx, edx
// 00892c7d  eb03                 jmp 0x892c82
// 00892c7f  8b1424               mov edx, dword ptr [esp]
// 00892c82  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00892c86  85c9                 test ecx, ecx
// 00892c88  7402                 je 0x892c8c
// 00892c8a  8911                 mov dword ptr [ecx], edx
// 00892c8c  59                   pop ecx
// 00892c8d  c20400               ret 4
// copied from an identical function in another client (function ?GetActiveMdiChildWnd@CXTPMenuBar@@IAEPAUHWND__@@PAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp
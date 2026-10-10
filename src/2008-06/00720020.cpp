// roc 2008-06 00720020  unit: CXTPMenuBar  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720020
//
// 00720020  51                   push ecx
// 00720021  83b9a801000000       cmp dword ptr [ecx + 0x1a8], 0
// 00720028  c7042400000000       mov dword ptr [esp], 0
// 0072002f  7506                 jne 0x720037
// 00720031  33c0                 xor eax, eax
// 00720033  59                   pop ecx
// 00720034  c20400               ret 4
// 00720037  e88479f9ff           call 0x6b79c0
// 0072003c  50                   push eax
// 0072003d  e892bf0900           call 0x7bbfd4
// 00720042  50                   push eax
// 00720043  e8de0bf8ff           call 0x6a0c26
// 00720048  8b80e8000000         mov eax, dword ptr [eax + 0xe8]
// 0072004e  83c408               add esp, 8
// 00720051  85c0                 test eax, eax
// 00720053  74dc                 je 0x720031
// 00720055  8d0c24               lea ecx, [esp]
// 00720058  51                   push ecx
// 00720059  6a00                 push 0
// 0072005b  6829020000           push 0x229
// 00720060  50                   push eax
// 00720061  ff15142e8000         call dword ptr [0x802e14]
// 00720067  85c0                 test eax, eax
// 00720069  7504                 jne 0x72006f
// 0072006b  33d2                 xor edx, edx
// 0072006d  eb03                 jmp 0x720072
// 0072006f  8b1424               mov edx, dword ptr [esp]
// 00720072  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00720076  85c9                 test ecx, ecx
// 00720078  7402                 je 0x72007c
// 0072007a  8911                 mov dword ptr [ecx], edx
// 0072007c  59                   pop ecx
// 0072007d  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPMenuBar.cpp (function ?GetActiveMdiChildWnd@CXTPMenuBar@@IAEPAUHWND__@@PAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp

// roc 2007-08 00636730  unit: CXTPEdit  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636730
//
// 00636730  0fb7442404           movzx eax, word ptr [esp + 4]
// 00636735  3d25e10000           cmp eax, 0xe125
// 0063673a  751b                 jne 0x636757
// 0063673c  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0063673f  6a00                 push 0
// 00636741  6a00                 push 0
// 00636743  6802030000           push 0x302
// 00636748  50                   push eax
// 00636749  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0063674f  b801000000           mov eax, 1
// 00636754  c20800               ret 8
// 00636757  3d22e10000           cmp eax, 0xe122
// 0063675c  751b                 jne 0x636779
// 0063675e  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00636761  6a00                 push 0
// 00636763  6a00                 push 0
// 00636765  6801030000           push 0x301
// 0063676a  51                   push ecx
// 0063676b  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00636771  b801000000           mov eax, 1
// 00636776  c20800               ret 8
// 00636779  3d23e10000           cmp eax, 0xe123
// 0063677e  751b                 jne 0x63679b
// 00636780  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00636783  6a00                 push 0
// 00636785  6a00                 push 0
// 00636787  6800030000           push 0x300
// 0063678c  52                   push edx
// 0063678d  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00636793  b801000000           mov eax, 1
// 00636798  c20800               ret 8
// 0063679b  33c0                 xor eax, eax
// 0063679d  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?OnCommand@CXTPEdit@@UAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp

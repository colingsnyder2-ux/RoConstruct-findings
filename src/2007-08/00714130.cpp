// roc 2007-08 00714130  unit: CXTCaptionButtonTheme  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714130
//
// 00714130  8b442408             mov eax, dword ptr [esp + 8]
// 00714134  56                   push esi
// 00714135  8bb0ac000000         mov esi, dword ptr [eax + 0xac]
// 0071413b  85f6                 test esi, esi
// 0071413d  57                   push edi
// 0071413e  8bf9                 mov edi, ecx
// 00714140  7504                 jne 0x714146
// 00714142  33c0                 xor eax, eax
// 00714144  eb03                 jmp 0x714149
// 00714146  8b4620               mov eax, dword ptr [esi + 0x20]
// 00714149  50                   push eax
// 0071414a  ff15bced7700         call dword ptr [0x77edbc]
// 00714150  85c0                 test eax, eax
// 00714152  7408                 je 0x71415c
// 00714154  8b4678               mov eax, dword ptr [esi + 0x78]
// 00714157  5f                   pop edi
// 00714158  5e                   pop esi
// 00714159  c20800               ret 8
// 0071415c  8b4734               mov eax, dword ptr [edi + 0x34]
// 0071415f  83f8ff               cmp eax, -1
// 00714162  7503                 jne 0x714167
// 00714164  8b4730               mov eax, dword ptr [edi + 0x30]
// 00714167  5f                   pop edi
// 00714168  5e                   pop esi
// 00714169  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionTheme.cpp (function ?GetTextColor@CXTCaptionButtonTheme@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionTheme.cpp

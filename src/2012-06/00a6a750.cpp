// roc 2012-06 00a6a750  unit: CXTCaptionButton  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a750
//
// 00a6a750  6aff                 push -1
// 00a6a752  686886ae00           push 0xae8668
// 00a6a757  64a100000000         mov eax, dword ptr fs:[0]
// 00a6a75d  50                   push eax
// 00a6a75e  56                   push esi
// 00a6a75f  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6a764  33c4                 xor eax, esp
// 00a6a766  50                   push eax
// 00a6a767  8d442408             lea eax, [esp + 8]
// 00a6a76b  64a300000000         mov dword ptr fs:[0], eax
// 00a6a771  8bf1                 mov esi, ecx
// 00a6a773  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a6a777  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a6a77b  50                   push eax
// 00a6a77c  83ec24               sub esp, 0x24
// 00a6a77f  8bcc                 mov ecx, esp
// 00a6a781  89642450             mov dword ptr [esp + 0x50], esp
// 00a6a785  6a01                 push 1
// 00a6a787  52                   push edx
// 00a6a788  e8d30af3ff           call 0x99b260
// 00a6a78d  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a6a791  83ec24               sub esp, 0x24
// 00a6a794  8bcc                 mov ecx, esp
// 00a6a796  89642470             mov dword ptr [esp + 0x70], esp
// 00a6a79a  6a01                 push 1
// 00a6a79c  50                   push eax
// 00a6a79d  c744246400000000     mov dword ptr [esp + 0x64], 0
// 00a6a7a5  e8b60af3ff           call 0x99b260
// 00a6a7aa  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a6a7ae  8b06                 mov eax, dword ptr [esi]
// 00a6a7b0  8b542464             mov edx, dword ptr [esp + 0x64]
// 00a6a7b4  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 00a6a7ba  51                   push ecx
// 00a6a7bb  52                   push edx
// 00a6a7bc  8bce                 mov ecx, esi
// 00a6a7be  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00a6a7c6  ffd0                 call eax
// 00a6a7c8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a6a7cc  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6a7d3  59                   pop ecx
// 00a6a7d4  5e                   pop esi
// 00a6a7d5  83c40c               add esp, 0xc
// 00a6a7d8  c21400               ret 0x14
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@PAUHICON__@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp
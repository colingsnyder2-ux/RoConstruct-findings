// roc 2012-06 00a6af40  unit: CXTCaptionButton  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6af40
//
// 00a6af40  56                   push esi
// 00a6af41  8bf1                 mov esi, ecx
// 00a6af43  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 00a6af4a  7443                 je 0xa6af8f
// 00a6af4c  57                   push edi
// 00a6af4d  e880e60200           call 0xa995d2
// 00a6af52  8bf8                 mov edi, eax
// 00a6af54  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a6af58  6a00                 push 0
// 00a6af5a  83c80b               or eax, 0xb
// 00a6af5d  50                   push eax
// 00a6af5e  6a00                 push 0
// 00a6af60  8bce                 mov ecx, esi
// 00a6af62  e8f178f1ff           call 0x982858
// 00a6af67  8bce                 mov ecx, esi
// 00a6af69  e864e60200           call 0xa995d2
// 00a6af6e  3bf8                 cmp edi, eax
// 00a6af70  5f                   pop edi
// 00a6af71  7416                 je 0xa6af89
// 00a6af73  66837c240c00         cmp word ptr [esp + 0xc], 0
// 00a6af79  740e                 je 0xa6af89
// 00a6af7b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a6af7e  6a01                 push 1
// 00a6af80  6a00                 push 0
// 00a6af82  51                   push ecx
// 00a6af83  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6af89  33c0                 xor eax, eax
// 00a6af8b  5e                   pop esi
// 00a6af8c  c20800               ret 8
// 00a6af8f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a6af93  8b442408             mov eax, dword ptr [esp + 8]
// 00a6af97  52                   push edx
// 00a6af98  50                   push eax
// 00a6af99  e862fdffff           call 0xa6ad00
// 00a6af9e  5e                   pop esi
// 00a6af9f  c20800               ret 8
// copied from an identical function in another client (function ?OnSetStyle@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp
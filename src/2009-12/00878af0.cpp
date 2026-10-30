// roc 2009-12 00878af0  unit: CXTPControlGallery  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878af0
//
// 00878af0  56                   push esi
// 00878af1  8bf1                 mov esi, ecx
// 00878af3  e8c8e8ffff           call 0x8773c0
// 00878af8  85c0                 test eax, eax
// 00878afa  7415                 je 0x878b11
// 00878afc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00878b00  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00878b04  50                   push eax
// 00878b05  51                   push ecx
// 00878b06  8bce                 mov ecx, esi
// 00878b08  e8f320fcff           call 0x83ac00
// 00878b0d  5e                   pop esi
// 00878b0e  c20800               ret 8
// 00878b11  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00878b15  8b442408             mov eax, dword ptr [esp + 8]
// 00878b19  52                   push edx
// 00878b1a  50                   push eax
// 00878b1b  8bce                 mov ecx, esi
// 00878b1d  e80ef8ffff           call 0x878330
// 00878b22  5e                   pop esi
// 00878b23  c20800               ret 8
// copied from an identical function in another client (function ?OnLButtonUp@CXTPControlGallery@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp
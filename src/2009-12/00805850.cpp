// roc 2009-12 00805850  unit: CXTPCommandBar  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805850
//
// 00805850  56                   push esi
// 00805851  57                   push edi
// 00805852  8bf1                 mov esi, ecx
// 00805854  8dbe3c010000         lea edi, [esi + 0x13c]
// 0080585a  57                   push edi
// 0080585b  ff1568cc9800         call dword ptr [0x98cc68]
// 00805861  85c0                 test eax, eax
// 00805863  7517                 jne 0x80587c
// 00805865  57                   push edi
// 00805866  ff159cca9800         call dword ptr [0x98ca9c]
// 0080586c  8b06                 mov eax, dword ptr [esi]
// 0080586e  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 00805874  6a01                 push 1
// 00805876  6a00                 push 0
// 00805878  8bce                 mov ecx, esi
// 0080587a  ffd2                 call edx
// 0080587c  5f                   pop edi
// 0080587d  5e                   pop esi
// 0080587e  c3                   ret 
// copied from an identical function in another client (function ?OnCustomizeDragLeave@CXTPCommandBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp
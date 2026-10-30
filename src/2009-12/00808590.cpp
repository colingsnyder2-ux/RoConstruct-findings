// roc 2009-12 00808590  unit: CXTPCommandBar  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00808590
//
// 00808590  56                   push esi
// 00808591  8bf1                 mov esi, ecx
// 00808593  e8f8faffff           call 0x808090
// 00808598  85c0                 test eax, eax
// 0080859a  7426                 je 0x8085c2
// 0080859c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0080859f  8d44240c             lea eax, [esp + 0xc]
// 008085a3  50                   push eax
// 008085a4  51                   push ecx
// 008085a5  ff1534cc9800         call dword ptr [0x98cc34]
// 008085ab  8b542410             mov edx, dword ptr [esp + 0x10]
// 008085af  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008085b3  52                   push edx
// 008085b4  50                   push eax
// 008085b5  6a00                 push 0
// 008085b7  8bce                 mov ecx, esi
// 008085b9  e802f0ffff           call 0x8075c0
// 008085be  5e                   pop esi
// 008085bf  c20c00               ret 0xc
// 008085c2  8bce                 mov ecx, esi
// 008085c4  e867b8feff           call 0x7f3e30
// 008085c9  5e                   pop esi
// 008085ca  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnNcLButtonDown@CXTPCommandBar@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp
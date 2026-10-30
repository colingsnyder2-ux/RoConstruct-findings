// roc 2009-12 00892eb0  unit: CXTPMenuBar::CControlMDIButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892eb0
//
// 00892eb0  56                   push esi
// 00892eb1  8bf1                 mov esi, ecx
// 00892eb3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00892eb9  6a00                 push 0
// 00892ebb  e870fdffff           call 0x892c30
// 00892ec0  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00892ec6  5e                   pop esi
// 00892ec7  81f9bf230000         cmp ecx, 0x23bf
// 00892ecd  7515                 jne 0x892ee4
// 00892ecf  6a00                 push 0
// 00892ed1  b960f00000           mov ecx, 0xf060
// 00892ed6  51                   push ecx
// 00892ed7  6812010000           push 0x112
// 00892edc  50                   push eax
// 00892edd  ff15b8cb9800         call dword ptr [0x98cbb8]
// 00892ee3  c3                   ret 
// 00892ee4  81e9c0230000         sub ecx, 0x23c0
// 00892eea  f7d9                 neg ecx
// 00892eec  1bc9                 sbb ecx, ecx
// 00892eee  81e100ffffff         and ecx, 0xffffff00
// 00892ef4  6a00                 push 0
// 00892ef6  81c120f10000         add ecx, 0xf120
// 00892efc  51                   push ecx
// 00892efd  6812010000           push 0x112
// 00892f02  50                   push eax
// 00892f03  ff15b8cb9800         call dword ptr [0x98cbb8]
// 00892f09  c3                   ret 
// copied from an identical function in another client (function ?OnExecute@CControlMDIButton@CXTPMenuBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMenuBar.cpp
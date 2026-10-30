// roc 2009-12 008eb970  unit: CXTPScrollBase  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eb970
//
// 008eb970  83ec10               sub esp, 0x10
// 008eb973  56                   push esi
// 008eb974  8bf1                 mov esi, ecx
// 008eb976  e865fdffff           call 0x8eb6e0
// 008eb97b  83b8b005000000       cmp dword ptr [eax + 0x5b0], 0
// 008eb982  7509                 jne 0x8eb98d
// 008eb984  33c0                 xor eax, eax
// 008eb986  5e                   pop esi
// 008eb987  83c410               add esp, 0x10
// 008eb98a  c20400               ret 4
// 008eb98d  8b4608               mov eax, dword ptr [esi + 8]
// 008eb990  6801e80000           push 0xe801
// 008eb995  50                   push eax
// 008eb996  ff15acc99800         call dword ptr [0x98c9ac]
// 008eb99c  50                   push eax
// 008eb99d  e88881f0ff           call 0x7f3b2a
// 008eb9a2  8bf0                 mov esi, eax
// 008eb9a4  85f6                 test esi, esi
// 008eb9a6  74dc                 je 0x8eb984
// 008eb9a8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008eb9ab  6af0                 push -0x10
// 008eb9ad  51                   push ecx
// 008eb9ae  ff15d8c99800         call dword ptr [0x98c9d8]
// 008eb9b4  a900000010           test eax, 0x10000000
// 008eb9b9  74c9                 je 0x8eb984
// 008eb9bb  8b5620               mov edx, dword ptr [esi + 0x20]
// 008eb9be  6a00                 push 0
// 008eb9c0  6a00                 push 0
// 008eb9c2  6854280000           push 0x2854
// 008eb9c7  52                   push edx
// 008eb9c8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008eb9ce  85c0                 test eax, eax
// 008eb9d0  74b2                 je 0x8eb984
// 008eb9d2  57                   push edi
// 008eb9d3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008eb9d7  85ff                 test edi, edi
// 008eb9d9  7412                 je 0x8eb9ed
// 008eb9db  56                   push esi
// 008eb9dc  8d4c240c             lea ecx, [esp + 0xc]
// 008eb9e0  e88bf8f5ff           call 0x84b270
// 008eb9e5  8b480c               mov ecx, dword ptr [eax + 0xc]
// 008eb9e8  2b4804               sub ecx, dword ptr [eax + 4]
// 008eb9eb  890f                 mov dword ptr [edi], ecx
// 008eb9ed  5f                   pop edi
// 008eb9ee  b801000000           mov eax, 1
// 008eb9f3  5e                   pop esi
// 008eb9f4  83c410               add esp, 0x10
// 008eb9f7  c20400               ret 4
// copied from an identical function in another client (function ?IsFrameHasStatusBar@CXTPOffice2007FrameHook@@QBEHPAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2007FrameHook.cpp
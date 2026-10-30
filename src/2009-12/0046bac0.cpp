// roc 2009-12 0046bac0  unit: Scintilla::CScintillaView  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046bac0
//
// 0046bac0  56                   push esi
// 0046bac1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046bac5  8b16                 mov edx, dword ptr [esi]
// 0046bac7  8b5274               mov edx, dword ptr [edx + 0x74]
// 0046baca  0fb7521e             movzx edx, word ptr [edx + 0x1e]
// 0046bace  8b4614               mov eax, dword ptr [esi + 0x14]
// 0046bad1  3bc2                 cmp eax, edx
// 0046bad3  771c                 ja 0x46baf1
// 0046bad5  3b81bc000000         cmp eax, dword ptr [ecx + 0xbc]
// 0046badb  761b                 jbe 0x46baf8
// 0046badd  8b01                 mov eax, dword ptr [ecx]
// 0046badf  8b542408             mov edx, dword ptr [esp + 8]
// 0046bae3  8b8094010000         mov eax, dword ptr [eax + 0x194]
// 0046bae9  56                   push esi
// 0046baea  52                   push edx
// 0046baeb  ffd0                 call eax
// 0046baed  85c0                 test eax, eax
// 0046baef  7507                 jne 0x46baf8
// 0046baf1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0046baf8  5e                   pop esi
// 0046baf9  c20800               ret 8
// copied from an identical function in another client (function ?OnPrepareDC@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp
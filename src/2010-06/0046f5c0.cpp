// roc 2010-06 0046f5c0  unit: Scintilla::CScintillaView  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046f5c0
//
// 0046f5c0  56                   push esi
// 0046f5c1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046f5c5  8b16                 mov edx, dword ptr [esi]
// 0046f5c7  8b5274               mov edx, dword ptr [edx + 0x74]
// 0046f5ca  0fb7521e             movzx edx, word ptr [edx + 0x1e]
// 0046f5ce  8b4614               mov eax, dword ptr [esi + 0x14]
// 0046f5d1  3bc2                 cmp eax, edx
// 0046f5d3  771c                 ja 0x46f5f1
// 0046f5d5  3b81bc000000         cmp eax, dword ptr [ecx + 0xbc]
// 0046f5db  761b                 jbe 0x46f5f8
// 0046f5dd  8b01                 mov eax, dword ptr [ecx]
// 0046f5df  8b542408             mov edx, dword ptr [esp + 8]
// 0046f5e3  8b8094010000         mov eax, dword ptr [eax + 0x194]
// 0046f5e9  56                   push esi
// 0046f5ea  52                   push edx
// 0046f5eb  ffd0                 call eax
// 0046f5ed  85c0                 test eax, eax
// 0046f5ef  7507                 jne 0x46f5f8
// 0046f5f1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0046f5f8  5e                   pop esi
// 0046f5f9  c20800               ret 8
// copied from an identical function in another client (function ?OnPrepareDC@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp
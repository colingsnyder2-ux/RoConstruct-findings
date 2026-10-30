// roc 2011-06 0048bf00  unit: Scintilla::CScintillaView  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048bf00
//
// 0048bf00  56                   push esi
// 0048bf01  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048bf05  8b16                 mov edx, dword ptr [esi]
// 0048bf07  8b5274               mov edx, dword ptr [edx + 0x74]
// 0048bf0a  0fb7521e             movzx edx, word ptr [edx + 0x1e]
// 0048bf0e  8b4614               mov eax, dword ptr [esi + 0x14]
// 0048bf11  3bc2                 cmp eax, edx
// 0048bf13  771c                 ja 0x48bf31
// 0048bf15  3b81bc000000         cmp eax, dword ptr [ecx + 0xbc]
// 0048bf1b  761b                 jbe 0x48bf38
// 0048bf1d  8b01                 mov eax, dword ptr [ecx]
// 0048bf1f  8b542408             mov edx, dword ptr [esp + 8]
// 0048bf23  8b8094010000         mov eax, dword ptr [eax + 0x194]
// 0048bf29  56                   push esi
// 0048bf2a  52                   push edx
// 0048bf2b  ffd0                 call eax
// 0048bf2d  85c0                 test eax, eax
// 0048bf2f  7507                 jne 0x48bf38
// 0048bf31  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0048bf38  5e                   pop esi
// 0048bf39  c20800               ret 8
// copied from an identical function in another client (function ?OnPrepareDC@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp
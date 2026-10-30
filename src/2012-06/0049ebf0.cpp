// roc 2012-06 0049ebf0  unit: Scintilla::CScintillaView  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049ebf0
//
// 0049ebf0  56                   push esi
// 0049ebf1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0049ebf5  8b16                 mov edx, dword ptr [esi]
// 0049ebf7  8b5274               mov edx, dword ptr [edx + 0x74]
// 0049ebfa  0fb7521e             movzx edx, word ptr [edx + 0x1e]
// 0049ebfe  8b4614               mov eax, dword ptr [esi + 0x14]
// 0049ec01  3bc2                 cmp eax, edx
// 0049ec03  771c                 ja 0x49ec21
// 0049ec05  3b81bc000000         cmp eax, dword ptr [ecx + 0xbc]
// 0049ec0b  761b                 jbe 0x49ec28
// 0049ec0d  8b01                 mov eax, dword ptr [ecx]
// 0049ec0f  8b542408             mov edx, dword ptr [esp + 8]
// 0049ec13  8b8094010000         mov eax, dword ptr [eax + 0x194]
// 0049ec19  56                   push esi
// 0049ec1a  52                   push edx
// 0049ec1b  ffd0                 call eax
// 0049ec1d  85c0                 test eax, eax
// 0049ec1f  7507                 jne 0x49ec28
// 0049ec21  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0049ec28  5e                   pop esi
// 0049ec29  c20800               ret 8
// copied from an identical function in another client (function ?OnPrepareDC@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp
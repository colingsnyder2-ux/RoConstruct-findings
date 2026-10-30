// roc 2009-06 00462f10  unit: Scintilla::CScintillaView  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462f10
//
// 00462f10  56                   push esi
// 00462f11  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00462f15  8b16                 mov edx, dword ptr [esi]
// 00462f17  8b5274               mov edx, dword ptr [edx + 0x74]
// 00462f1a  0fb7521e             movzx edx, word ptr [edx + 0x1e]
// 00462f1e  8b4614               mov eax, dword ptr [esi + 0x14]
// 00462f21  3bc2                 cmp eax, edx
// 00462f23  771c                 ja 0x462f41
// 00462f25  3b81bc000000         cmp eax, dword ptr [ecx + 0xbc]
// 00462f2b  761b                 jbe 0x462f48
// 00462f2d  8b01                 mov eax, dword ptr [ecx]
// 00462f2f  8b542408             mov edx, dword ptr [esp + 8]
// 00462f33  8b8094010000         mov eax, dword ptr [eax + 0x194]
// 00462f39  56                   push esi
// 00462f3a  52                   push edx
// 00462f3b  ffd0                 call eax
// 00462f3d  85c0                 test eax, eax
// 00462f3f  7507                 jne 0x462f48
// 00462f41  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00462f48  5e                   pop esi
// 00462f49  c20800               ret 8
// copied from an identical function in another client (function ?OnPrepareDC@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp
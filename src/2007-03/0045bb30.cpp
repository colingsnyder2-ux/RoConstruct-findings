// roc 2007-03 0045bb30  unit: seg_00450000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045bb30
//
// 0045bb30  56                   push esi
// 0045bb31  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045bb35  8b16                 mov edx, dword ptr [esi]
// 0045bb37  8b5274               mov edx, dword ptr [edx + 0x74]
// 0045bb3a  0fb7521e             movzx edx, word ptr [edx + 0x1e]
// 0045bb3e  8b4614               mov eax, dword ptr [esi + 0x14]
// 0045bb41  3bc2                 cmp eax, edx
// 0045bb43  771c                 ja 0x45bb61
// 0045bb45  3b81bc000000         cmp eax, dword ptr [ecx + 0xbc]
// 0045bb4b  761b                 jbe 0x45bb68
// 0045bb4d  8b01                 mov eax, dword ptr [ecx]
// 0045bb4f  8b542408             mov edx, dword ptr [esp + 8]
// 0045bb53  8b808c010000         mov eax, dword ptr [eax + 0x18c]
// 0045bb59  56                   push esi
// 0045bb5a  52                   push edx
// 0045bb5b  ffd0                 call eax
// 0045bb5d  85c0                 test eax, eax
// 0045bb5f  7507                 jne 0x45bb68
// 0045bb61  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0045bb68  5e                   pop esi
// 0045bb69  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnPrepareDC@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp

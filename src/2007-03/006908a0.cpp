// roc 2007-03 006908a0  unit: seg_00690000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006908a0
//
// 006908a0  56                   push esi
// 006908a1  6a38                 push 0x38
// 006908a3  e8f818faff           call 0x6321a0
// 006908a8  8b742408             mov esi, dword ptr [esp + 8]
// 006908ac  50                   push eax
// 006908ad  8d442410             lea eax, [esp + 0x10]
// 006908b1  50                   push eax
// 006908b2  8bce                 mov ecx, esi
// 006908b4  e861e4f8ff           call 0x61ed1a
// 006908b9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006908bd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006908c1  8b542418             mov edx, dword ptr [esp + 0x18]
// 006908c5  68c5c5c500           push 0xc5c5c5
// 006908ca  6a01                 push 1
// 006908cc  2bc8                 sub ecx, eax
// 006908ce  51                   push ecx
// 006908cf  83c2ff               add edx, -1
// 006908d2  52                   push edx
// 006908d3  50                   push eax
// 006908d4  8bce                 mov ecx, esi
// 006908d6  e811a20a00           call 0x73aaec
// 006908db  5e                   pop esi
// 006908dc  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillPopupLabelEntry@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonTheme.cpp

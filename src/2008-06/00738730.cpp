// roc 2008-06 00738730  unit: CXTPOffice2007Theme  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00738730
//
// 00738730  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00738735  7550                 jne 0x738787
// 00738737  56                   push esi
// 00738738  8b742418             mov esi, dword ptr [esp + 0x18]
// 0073873c  2b742410             sub esi, dword ptr [esp + 0x10]
// 00738740  6a27                 push 0x27
// 00738742  e82959f7ff           call 0x6ae070
// 00738747  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073874b  50                   push eax
// 0073874c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00738750  83c6fe               add esi, -2
// 00738753  56                   push esi
// 00738754  8b742410             mov esi, dword ptr [esp + 0x10]
// 00738758  6a01                 push 1
// 0073875a  49                   dec ecx
// 0073875b  50                   push eax
// 0073875c  51                   push ecx
// 0073875d  8bce                 mov ecx, esi
// 0073875f  e8dc380800           call 0x7bc040
// 00738764  8b442410             mov eax, dword ptr [esp + 0x10]
// 00738768  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073876c  68ffffff00           push 0xffffff
// 00738771  2bd0                 sub edx, eax
// 00738773  83ea02               sub edx, 2
// 00738776  52                   push edx
// 00738777  6a01                 push 1
// 00738779  50                   push eax
// 0073877a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0073877e  50                   push eax
// 0073877f  8bce                 mov ecx, esi
// 00738781  e8ba380800           call 0x7bc040
// 00738786  5e                   pop esi
// 00738787  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?DrawStatusBarPaneBorder@CXTPOffice2007Theme@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp

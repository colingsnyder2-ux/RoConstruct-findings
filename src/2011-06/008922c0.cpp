// from server: 100% by auto
// roc 2011-06 008922c0  unit: CXTPOffice2007Theme  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008922c0
//
// 008922c0  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008922c5  7550                 jne 0x892317
// 008922c7  56                   push esi
// 008922c8  8b742418             mov esi, dword ptr [esp + 0x18]
// 008922cc  2b742410             sub esi, dword ptr [esp + 0x10]
// 008922d0  6a27                 push 0x27
// 008922d2  e8d9d2f7ff           call 0x80f5b0
// 008922d7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008922db  50                   push eax
// 008922dc  8b442414             mov eax, dword ptr [esp + 0x14]
// 008922e0  83c6fe               add esi, -2
// 008922e3  56                   push esi
// 008922e4  8b742410             mov esi, dword ptr [esp + 0x10]
// 008922e8  6a01                 push 1
// 008922ea  49                   dec ecx
// 008922eb  50                   push eax
// 008922ec  51                   push ecx
// 008922ed  8bce                 mov ecx, esi
// 008922ef  e8e2a21300           call 0x9cc5d6
// 008922f4  8b442410             mov eax, dword ptr [esp + 0x10]
// 008922f8  8b542418             mov edx, dword ptr [esp + 0x18]
// 008922fc  68ffffff00           push 0xffffff
// 00892301  2bd0                 sub edx, eax
// 00892303  83ea02               sub edx, 2
// 00892306  52                   push edx
// 00892307  6a01                 push 1
// 00892309  50                   push eax
// 0089230a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089230e  50                   push eax
// 0089230f  8bce                 mov ecx, esi
// 00892311  e8c0a21300           call 0x9cc5d6
// 00892316  5e                   pop esi
// 00892317  c21c00               ret 0x1c
// library xtp-15.2.1/Source\CommandBars\XTPResourceTheme.cpp (function ?DrawStatusBarPaneBorder@CXTPResourceTheme@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPResourceTheme.cpp

// from server: 100% by auto
// roc 2012-06 00a0a8a0  unit: CXTPOffice2007Theme  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0a8a0
//
// 00a0a8a0  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00a0a8a5  7550                 jne 0xa0a8f7
// 00a0a8a7  56                   push esi
// 00a0a8a8  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a0a8ac  2b742410             sub esi, dword ptr [esp + 0x10]
// 00a0a8b0  6a27                 push 0x27
// 00a0a8b2  e8d9cff7ff           call 0x987890
// 00a0a8b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a0a8bb  50                   push eax
// 00a0a8bc  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a0a8c0  83c6fe               add esi, -2
// 00a0a8c3  56                   push esi
// 00a0a8c4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a0a8c8  6a01                 push 1
// 00a0a8ca  49                   dec ecx
// 00a0a8cb  50                   push eax
// 00a0a8cc  51                   push ecx
// 00a0a8cd  8bce                 mov ecx, esi
// 00a0a8cf  e8bcec0800           call 0xa99590
// 00a0a8d4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a0a8d8  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a0a8dc  68ffffff00           push 0xffffff
// 00a0a8e1  2bd0                 sub edx, eax
// 00a0a8e3  83ea02               sub edx, 2
// 00a0a8e6  52                   push edx
// 00a0a8e7  6a01                 push 1
// 00a0a8e9  50                   push eax
// 00a0a8ea  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a0a8ee  50                   push eax
// 00a0a8ef  8bce                 mov ecx, esi
// 00a0a8f1  e89aec0800           call 0xa99590
// 00a0a8f6  5e                   pop esi
// 00a0a8f7  c21c00               ret 0x1c
// library xtp-15.2.1/Source\CommandBars\XTPResourceTheme.cpp (function ?DrawStatusBarPaneBorder@CXTPResourceTheme@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPResourceTheme.cpp

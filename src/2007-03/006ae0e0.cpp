// roc 2007-03 006ae0e0  unit: seg_006a0000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ae0e0
//
// 006ae0e0  83ec10               sub esp, 0x10
// 006ae0e3  56                   push esi
// 006ae0e4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006ae0e8  57                   push edi
// 006ae0e9  8bf9                 mov edi, ecx
// 006ae0eb  8bce                 mov ecx, esi
// 006ae0ed  e8fe67feff           call 0x6948f0
// 006ae0f2  85c0                 test eax, eax
// 006ae0f4  56                   push esi
// 006ae0f5  7515                 jne 0x6ae10c
// 006ae0f7  8b442420             mov eax, dword ptr [esp + 0x20]
// 006ae0fb  56                   push esi
// 006ae0fc  50                   push eax
// 006ae0fd  8bcf                 mov ecx, edi
// 006ae0ff  e80cffffff           call 0x6ae010
// 006ae104  5f                   pop edi
// 006ae105  5e                   pop esi
// 006ae106  83c410               add esp, 0x10
// 006ae109  c20800               ret 8
// 006ae10c  8d4c240c             lea ecx, [esp + 0xc]
// 006ae110  e84bd7fbff           call 0x66b860
// 006ae115  6a0f                 push 0xf
// 006ae117  8bcf                 mov ecx, edi
// 006ae119  8bf0                 mov esi, eax
// 006ae11b  e88040f8ff           call 0x6321a0
// 006ae120  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ae124  50                   push eax
// 006ae125  56                   push esi
// 006ae126  e8ef0bf7ff           call 0x61ed1a
// 006ae12b  5f                   pop edi
// 006ae12c  5e                   pop esi
// 006ae12d  83c410               add esp, 0x10
// 006ae130  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPNativeXPTheme.cpp (function ?FillDockBar@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPNativeXPTheme.cpp

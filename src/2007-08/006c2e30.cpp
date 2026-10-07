// roc 2007-08 006c2e30  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c2e30
//
// 006c2e30  83ec10               sub esp, 0x10
// 006c2e33  56                   push esi
// 006c2e34  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006c2e38  57                   push edi
// 006c2e39  8bf9                 mov edi, ecx
// 006c2e3b  8bce                 mov ecx, esi
// 006c2e3d  e8aee1fdff           call 0x6a0ff0
// 006c2e42  85c0                 test eax, eax
// 006c2e44  56                   push esi
// 006c2e45  7515                 jne 0x6c2e5c
// 006c2e47  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c2e4b  56                   push esi
// 006c2e4c  50                   push eax
// 006c2e4d  8bcf                 mov ecx, edi
// 006c2e4f  e80cffffff           call 0x6c2d60
// 006c2e54  5f                   pop edi
// 006c2e55  5e                   pop esi
// 006c2e56  83c410               add esp, 0x10
// 006c2e59  c20800               ret 8
// 006c2e5c  8d4c240c             lea ecx, [esp + 0xc]
// 006c2e60  e89bd1fbff           call 0x680000
// 006c2e65  6a0f                 push 0xf
// 006c2e67  8bcf                 mov ecx, edi
// 006c2e69  8bf0                 mov esi, eax
// 006c2e6b  e8009ff7ff           call 0x63cd70
// 006c2e70  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c2e74  50                   push eax
// 006c2e75  56                   push esi
// 006c2e76  e835daf6ff           call 0x6308b0
// 006c2e7b  5f                   pop edi
// 006c2e7c  5e                   pop esi
// 006c2e7d  83c410               add esp, 0x10
// 006c2e80  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPNativeXPTheme.cpp (function ?FillDockBar@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPNativeXPTheme.cpp

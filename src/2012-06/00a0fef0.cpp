// from server: 100% by auto
// roc 2012-06 00a0fef0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0fef0
//
// 00a0fef0  83ec10               sub esp, 0x10
// 00a0fef3  56                   push esi
// 00a0fef4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00a0fef8  57                   push edi
// 00a0fef9  8bf9                 mov edi, ecx
// 00a0fefb  8bce                 mov ecx, esi
// 00a0fefd  e84ea80000           call 0xa1a750
// 00a0ff02  56                   push esi
// 00a0ff03  85c0                 test eax, eax
// 00a0ff05  7515                 jne 0xa0ff1c
// 00a0ff07  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a0ff0b  56                   push esi
// 00a0ff0c  50                   push eax
// 00a0ff0d  8bcf                 mov ecx, edi
// 00a0ff0f  e80cffffff           call 0xa0fe20
// 00a0ff14  5f                   pop edi
// 00a0ff15  5e                   pop esi
// 00a0ff16  83c410               add esp, 0x10
// 00a0ff19  c20800               ret 8
// 00a0ff1c  8d4c240c             lea ecx, [esp + 0xc]
// 00a0ff20  e87b52fcff           call 0x9d51a0
// 00a0ff25  6a0f                 push 0xf
// 00a0ff27  8bcf                 mov ecx, edi
// 00a0ff29  8bf0                 mov esi, eax
// 00a0ff2b  e86079f7ff           call 0x987890
// 00a0ff30  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a0ff34  50                   push eax
// 00a0ff35  56                   push esi
// 00a0ff36  e8712ff7ff           call 0x982eac
// 00a0ff3b  5f                   pop edi
// 00a0ff3c  5e                   pop esi
// 00a0ff3d  83c410               add esp, 0x10
// 00a0ff40  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPNativeXPTheme.cpp (function ?FillDockBar@CXTPNativeXPTheme@@MAEXPAVCDC@@PAVCXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPNativeXPTheme.cpp

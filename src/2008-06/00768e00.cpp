// from server: 100% by auto
// roc 2008-06 00768e00  unit: XTPDockingPanePaintThemes::CXTPDockingPaneNativeXPTheme  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00768e00
//
// 00768e00  56                   push esi
// 00768e01  8bf1                 mov esi, ecx
// 00768e03  e88880f3ff           call 0x6a0e90
// 00768e08  8b442408             mov eax, dword ptr [esp + 8]
// 00768e0c  89465c               mov dword ptr [esi + 0x5c], eax
// 00768e0f  33c0                 xor eax, eax
// 00768e11  894658               mov dword ptr [esi + 0x58], eax
// 00768e14  894654               mov dword ptr [esi + 0x54], eax
// 00768e17  c706b4708600         mov dword ptr [esi], 0x8670b4
// 00768e1d  8bc6                 mov eax, esi
// 00768e1f  5e                   pop esi
// 00768e20  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ??0CXTPDockingPaneContextStickerWnd@@QAE@PAVCXTPDockingPaneContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp

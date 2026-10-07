// roc 2012-06 00a45a80  unit: XTPDockingPanePaintThemes::CXTPDockingPaneNativeXPTheme  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a45a80
//
// 00a45a80  56                   push esi
// 00a45a81  8bf1                 mov esi, ecx
// 00a45a83  e83ecff3ff           call 0x9829c6
// 00a45a88  8b442408             mov eax, dword ptr [esp + 8]
// 00a45a8c  89465c               mov dword ptr [esi + 0x5c], eax
// 00a45a8f  33c0                 xor eax, eax
// 00a45a91  894658               mov dword ptr [esi + 0x58], eax
// 00a45a94  894654               mov dword ptr [esi + 0x54], eax
// 00a45a97  c706ec28c200         mov dword ptr [esi], 0xc228ec
// 00a45a9d  8bc6                 mov eax, esi
// 00a45a9f  5e                   pop esi
// 00a45aa0  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneContext.cpp (function ??0CXTPDockingPaneContextStickerWnd@@QAE@PAVCXTPDockingPaneContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneContext.cpp

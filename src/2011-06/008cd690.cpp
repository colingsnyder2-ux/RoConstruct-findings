// roc 2011-06 008cd690  unit: XTPDockingPanePaintThemes::CXTPDockingPaneNativeXPTheme  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008cd690
//
// 008cd690  56                   push esi
// 008cd691  8bf1                 mov esi, ecx
// 008cd693  e8aed2f3ff           call 0x80a946
// 008cd698  8b442408             mov eax, dword ptr [esp + 8]
// 008cd69c  89465c               mov dword ptr [esi + 0x5c], eax
// 008cd69f  33c0                 xor eax, eax
// 008cd6a1  894658               mov dword ptr [esi + 0x58], eax
// 008cd6a4  894654               mov dword ptr [esi + 0x54], eax
// 008cd6a7  c7065472ad00         mov dword ptr [esi], 0xad7254
// 008cd6ad  8bc6                 mov eax, esi
// 008cd6af  5e                   pop esi
// 008cd6b0  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneContext.cpp (function ??0CXTPDockingPaneContextStickerWnd@@QAE@PAVCXTPDockingPaneContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneContext.cpp

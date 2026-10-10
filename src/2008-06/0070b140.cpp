// roc 2008-06 0070b140  unit: CXTPToolTipContext::CHTMLToolTip::XOleClientSite  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070b140
//
// 0070b140  83ec10               sub esp, 0x10
// 0070b143  56                   push esi
// 0070b144  8b742418             mov esi, dword ptr [esp + 0x18]
// 0070b148  8b86ecfeffff         mov eax, dword ptr [esi - 0x114]
// 0070b14e  81c6d0feffff         add esi, 0xfffffed0
// 0070b154  50                   push eax
// 0070b155  8d4c2408             lea ecx, [esp + 8]
// 0070b159  e80458f9ff           call 0x6a0962
// 0070b15e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070b162  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0070b166  51                   push ecx
// 0070b167  52                   push edx
// 0070b168  8bce                 mov ecx, esi
// 0070b16a  e843120b00           call 0x7bc3b2
// 0070b16f  8bf0                 mov esi, eax
// 0070b171  8b442408             mov eax, dword ptr [esp + 8]
// 0070b175  85c0                 test eax, eax
// 0070b177  7407                 je 0x70b180
// 0070b179  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0070b17d  894804               mov dword ptr [eax + 4], ecx
// 0070b180  837c241000           cmp dword ptr [esp + 0x10], 0
// 0070b185  740c                 je 0x70b193
// 0070b187  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070b18b  52                   push edx
// 0070b18c  6a00                 push 0
// 0070b18e  e8c957f9ff           call 0x6a095c
// 0070b193  8bc6                 mov eax, esi
// 0070b195  5e                   pop esi
// 0070b196  83c410               add esp, 0x10
// 0070b199  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ?QueryInterface@XOleClientSite@CHTMLToolTip@CXTPToolTipContext@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp

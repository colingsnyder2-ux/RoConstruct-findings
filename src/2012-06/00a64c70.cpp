// roc 2012-06 00a64c70  unit: CXTPRichRender::XTextHost  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64c70
//
// 00a64c70  83ec10               sub esp, 0x10
// 00a64c73  56                   push esi
// 00a64c74  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a64c78  8b46fc               mov eax, dword ptr [esi - 4]
// 00a64c7b  83c6e0               add esi, -0x20
// 00a64c7e  50                   push eax
// 00a64c7f  8d4c2408             lea ecx, [esp + 8]
// 00a64c83  e856d7f1ff           call 0x9823de
// 00a64c88  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a64c8c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a64c90  51                   push ecx
// 00a64c91  52                   push edx
// 00a64c92  8bce                 mov ecx, esi
// 00a64c94  e8ff4f0300           call 0xa99c98
// 00a64c99  8bf0                 mov esi, eax
// 00a64c9b  8b442408             mov eax, dword ptr [esp + 8]
// 00a64c9f  85c0                 test eax, eax
// 00a64ca1  7407                 je 0xa64caa
// 00a64ca3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a64ca7  894804               mov dword ptr [eax + 4], ecx
// 00a64caa  837c241000           cmp dword ptr [esp + 0x10], 0
// 00a64caf  740c                 je 0xa64cbd
// 00a64cb1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a64cb5  52                   push edx
// 00a64cb6  6a00                 push 0
// 00a64cb8  e81bd7f1ff           call 0x9823d8
// 00a64cbd  8bc6                 mov eax, esi
// 00a64cbf  5e                   pop esi
// 00a64cc0  83c410               add esp, 0x10
// 00a64cc3  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\Common\XTPRichRender.cpp (function ?QueryInterface@XTextHost@CXTPRichRender@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPRichRender.cpp

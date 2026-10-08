// roc 2012-06 00a1d320  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1d320
//
// 00a1d320  56                   push esi
// 00a1d321  8bf1                 mov esi, ecx
// 00a1d323  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 00a1d329  c70624e6c100         mov dword ptr [esi], 0xc1e624
// 00a1d32f  c74620c4e5c100       mov dword ptr [esi + 0x20], 0xc1e5c4
// 00a1d336  85c0                 test eax, eax
// 00a1d338  7407                 je 0xa1d341
// 00a1d33a  50                   push eax
// 00a1d33b  ff15983bb200         call dword ptr [0xb23b98]
// 00a1d341  8bce                 mov ecx, esi
// 00a1d343  e888b6faff           call 0x9c89d0
// 00a1d348  f644240801           test byte ptr [esp + 8], 1
// 00a1d34d  7409                 je 0xa1d358
// 00a1d34f  56                   push esi
// 00a1d350  e8bf4df6ff           call 0x982114
// 00a1d355  83c404               add esp, 4
// 00a1d358  8bc6                 mov eax, esi
// 00a1d35a  5e                   pop esi
// 00a1d35b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??_GCControlMDISysMenuPopup@CXTPMenuBar@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp

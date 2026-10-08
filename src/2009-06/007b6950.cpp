// roc 2009-06 007b6950  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b6950
//
// 007b6950  56                   push esi
// 007b6951  8bf1                 mov esi, ecx
// 007b6953  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 007b6959  c706d43b9000         mov dword ptr [esi], 0x903bd4
// 007b695f  c74620743b9000       mov dword ptr [esi + 0x20], 0x903b74
// 007b6966  85c0                 test eax, eax
// 007b6968  7407                 je 0x7b6971
// 007b696a  50                   push eax
// 007b696b  ff1564ed8900         call dword ptr [0x89ed64]
// 007b6971  8bce                 mov ecx, esi
// 007b6973  e81894faff           call 0x75fd90
// 007b6978  f644240801           test byte ptr [esp + 8], 1
// 007b697d  7409                 je 0x7b6988
// 007b697f  56                   push esi
// 007b6980  e8ad20f6ff           call 0x718a32
// 007b6985  83c404               add esp, 4
// 007b6988  8bc6                 mov eax, esi
// 007b698a  5e                   pop esi
// 007b698b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??_GCControlMDISysMenuPopup@CXTPMenuBar@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp

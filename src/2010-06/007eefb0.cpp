// roc 2010-06 007eefb0  unit: CXTPToolBar::CControlButtonExpand  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007eefb0
//
// 007eefb0  56                   push esi
// 007eefb1  8bf1                 mov esi, ecx
// 007eefb3  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 007eefba  7446                 je 0x7ef002
// 007eefbc  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007eefc2  83f8ff               cmp eax, -1
// 007eefc5  750f                 jne 0x7eefd6
// 007eefc7  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007eefcd  85c9                 test ecx, ecx
// 007eefcf  7405                 je 0x7eefd6
// 007eefd1  e8bab6fbff           call 0x7aa690
// 007eefd6  85c0                 test eax, eax
// 007eefd8  7428                 je 0x7ef002
// 007eefda  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007eefe0  83b9e000000002       cmp dword ptr [ecx + 0xe0], 2
// 007eefe7  7409                 je 0x7eeff2
// 007eefe9  83b90001000005       cmp dword ptr [ecx + 0x100], 5
// 007eeff0  7510                 jne 0x7ef002
// 007eeff2  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 007eeff8  6a00                 push 0
// 007eeffa  50                   push eax
// 007eeffb  e810b7fcff           call 0x7ba710
// 007ef000  5e                   pop esi
// 007ef001  c3                   ret 
// 007ef002  8bce                 mov ecx, esi
// 007ef004  5e                   pop esi
// 007ef005  e916aefbff           jmp 0x7a9e20
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnMouseHover@CXTPControlPopup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp

// roc 2009-06 00760090  unit: CXTPToolBar::CControlButtonExpand  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00760090
//
// 00760090  56                   push esi
// 00760091  8bf1                 mov esi, ecx
// 00760093  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 0076009a  7446                 je 0x7600e2
// 0076009c  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007600a2  83f8ff               cmp eax, -1
// 007600a5  750f                 jne 0x7600b6
// 007600a7  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007600ad  85c9                 test ecx, ecx
// 007600af  7405                 je 0x7600b6
// 007600b1  e8eafdfbff           call 0x71fea0
// 007600b6  85c0                 test eax, eax
// 007600b8  7428                 je 0x7600e2
// 007600ba  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007600c0  83b9e000000002       cmp dword ptr [ecx + 0xe0], 2
// 007600c7  7409                 je 0x7600d2
// 007600c9  83b90001000005       cmp dword ptr [ecx + 0x100], 5
// 007600d0  7510                 jne 0x7600e2
// 007600d2  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 007600d8  6a00                 push 0
// 007600da  50                   push eax
// 007600db  e860f3fcff           call 0x72f440
// 007600e0  5e                   pop esi
// 007600e1  c3                   ret 
// 007600e2  8bce                 mov ecx, esi
// 007600e4  5e                   pop esi
// 007600e5  e9d6f5fbff           jmp 0x71f6c0
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnMouseHover@CXTPControlPopup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp

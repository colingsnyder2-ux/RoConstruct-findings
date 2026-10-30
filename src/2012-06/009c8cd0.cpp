// roc 2012-06 009c8cd0  unit: CXTPToolBar::CControlButtonExpand  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c8cd0
//
// 009c8cd0  56                   push esi
// 009c8cd1  8bf1                 mov esi, ecx
// 009c8cd3  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 009c8cda  7446                 je 0x9c8d22
// 009c8cdc  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 009c8ce2  83f8ff               cmp eax, -1
// 009c8ce5  750f                 jne 0x9c8cf6
// 009c8ce7  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 009c8ced  85c9                 test ecx, ecx
// 009c8cef  7405                 je 0x9c8cf6
// 009c8cf1  e82ac2fbff           call 0x984f20
// 009c8cf6  85c0                 test eax, eax
// 009c8cf8  7428                 je 0x9c8d22
// 009c8cfa  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 009c8d00  83b9e000000002       cmp dword ptr [ecx + 0xe0], 2
// 009c8d07  7409                 je 0x9c8d12
// 009c8d09  83b90001000005       cmp dword ptr [ecx + 0x100], 5
// 009c8d10  7510                 jne 0x9c8d22
// 009c8d12  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 009c8d18  6a00                 push 0
// 009c8d1a  50                   push eax
// 009c8d1b  e830c1fcff           call 0x994e50
// 009c8d20  5e                   pop esi
// 009c8d21  c3                   ret 
// 009c8d22  8bce                 mov ecx, esi
// 009c8d24  5e                   pop esi
// 009c8d25  e976bafbff           jmp 0x9847a0
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnMouseHover@CXTPControlPopup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp

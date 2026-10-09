// roc 2009-12 0083ae60  unit: CXTPToolBar::CControlButtonExpand  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ae60
//
// 0083ae60  56                   push esi
// 0083ae61  8bf1                 mov esi, ecx
// 0083ae63  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 0083ae6a  7446                 je 0x83aeb2
// 0083ae6c  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0083ae72  83f8ff               cmp eax, -1
// 0083ae75  750f                 jne 0x83ae86
// 0083ae77  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0083ae7d  85c9                 test ecx, ecx
// 0083ae7f  7405                 je 0x83ae86
// 0083ae81  e82ab7fbff           call 0x7f65b0
// 0083ae86  85c0                 test eax, eax
// 0083ae88  7428                 je 0x83aeb2
// 0083ae8a  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083ae90  83b9e000000002       cmp dword ptr [ecx + 0xe0], 2
// 0083ae97  7409                 je 0x83aea2
// 0083ae99  83b90001000005       cmp dword ptr [ecx + 0x100], 5
// 0083aea0  7510                 jne 0x83aeb2
// 0083aea2  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0083aea8  6a00                 push 0
// 0083aeaa  50                   push eax
// 0083aeab  e8f0b6fcff           call 0x8065a0
// 0083aeb0  5e                   pop esi
// 0083aeb1  c3                   ret 
// 0083aeb2  8bce                 mov ecx, esi
// 0083aeb4  5e                   pop esi
// 0083aeb5  e926aefbff           jmp 0x7f5ce0
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnMouseHover@CXTPControlPopup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp

// roc 2009-06 0079d0e0  unit: CXTPControlGallery  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079d0e0
//
// 0079d0e0  56                   push esi
// 0079d0e1  8bf1                 mov esi, ecx
// 0079d0e3  e858f3ffff           call 0x79c440
// 0079d0e8  85c0                 test eax, eax
// 0079d0ea  7513                 jne 0x79d0ff
// 0079d0ec  8bce                 mov ecx, esi
// 0079d0ee  e8ddf2ffff           call 0x79c3d0
// 0079d0f3  85c0                 test eax, eax
// 0079d0f5  7408                 je 0x79d0ff
// 0079d0f7  8b8648020000         mov eax, dword ptr [esi + 0x248]
// 0079d0fd  5e                   pop esi
// 0079d0fe  c3                   ret 
// 0079d0ff  33c0                 xor eax, eax
// 0079d101  5e                   pop esi
// 0079d102  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?IsResizable@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp

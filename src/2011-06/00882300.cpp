// roc 2011-06 00882300  unit: CXTPControlGallery  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00882300
//
// 00882300  56                   push esi
// 00882301  8bf1                 mov esi, ecx
// 00882303  e858f3ffff           call 0x881660
// 00882308  85c0                 test eax, eax
// 0088230a  7513                 jne 0x88231f
// 0088230c  8bce                 mov ecx, esi
// 0088230e  e8ddf2ffff           call 0x8815f0
// 00882313  85c0                 test eax, eax
// 00882315  7408                 je 0x88231f
// 00882317  8b8648020000         mov eax, dword ptr [esi + 0x248]
// 0088231d  5e                   pop esi
// 0088231e  c3                   ret 
// 0088231f  33c0                 xor eax, eax
// 00882321  5e                   pop esi
// 00882322  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?IsResizable@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp

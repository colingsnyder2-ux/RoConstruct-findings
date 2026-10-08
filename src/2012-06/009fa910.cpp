// roc 2012-06 009fa910  unit: CXTPControlGallery  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fa910
//
// 009fa910  56                   push esi
// 009fa911  8bf1                 mov esi, ecx
// 009fa913  e858f3ffff           call 0x9f9c70
// 009fa918  85c0                 test eax, eax
// 009fa91a  7513                 jne 0x9fa92f
// 009fa91c  8bce                 mov ecx, esi
// 009fa91e  e8ddf2ffff           call 0x9f9c00
// 009fa923  85c0                 test eax, eax
// 009fa925  7408                 je 0x9fa92f
// 009fa927  8b8648020000         mov eax, dword ptr [esi + 0x248]
// 009fa92d  5e                   pop esi
// 009fa92e  c3                   ret 
// 009fa92f  33c0                 xor eax, eax
// 009fa931  5e                   pop esi
// 009fa932  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?IsResizable@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp

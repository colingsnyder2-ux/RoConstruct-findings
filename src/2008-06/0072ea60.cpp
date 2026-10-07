// roc 2008-06 0072ea60  unit: CXTPControlGallery  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072ea60
//
// 0072ea60  56                   push esi
// 0072ea61  8bf1                 mov esi, ecx
// 0072ea63  e848f3ffff           call 0x72ddb0
// 0072ea68  85c0                 test eax, eax
// 0072ea6a  7513                 jne 0x72ea7f
// 0072ea6c  8bce                 mov ecx, esi
// 0072ea6e  e8cdf2ffff           call 0x72dd40
// 0072ea73  85c0                 test eax, eax
// 0072ea75  7408                 je 0x72ea7f
// 0072ea77  8b8648020000         mov eax, dword ptr [esi + 0x248]
// 0072ea7d  5e                   pop esi
// 0072ea7e  c3                   ret 
// 0072ea7f  33c0                 xor eax, eax
// 0072ea81  5e                   pop esi
// 0072ea82  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?IsResizable@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp

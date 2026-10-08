// roc 2012-06 009f9d10  unit: CXTPControlGallery  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9d10
//
// 009f9d10  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 009f9d16  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 009f9d1d  7403                 je 0x9f9d22
// 009f9d1f  33c0                 xor eax, eax
// 009f9d21  c3                   ret 
// 009f9d22  83b93002000000       cmp dword ptr [ecx + 0x230], 0
// 009f9d29  75f4                 jne 0x9f9d1f
// 009f9d2b  56                   push esi
// 009f9d2c  8bb180000000         mov esi, dword ptr [ecx + 0x80]
// 009f9d32  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 009f9d38  6a01                 push 1
// 009f9d3a  6a00                 push 0
// 009f9d3c  6a01                 push 1
// 009f9d3e  6a01                 push 1
// 009f9d40  56                   push esi
// 009f9d41  e83a56fdff           call 0x9cf380
// 009f9d46  33c9                 xor ecx, ecx
// 009f9d48  3bc6                 cmp eax, esi
// 009f9d4a  0f9fc1               setg cl
// 009f9d4d  5e                   pop esi
// 009f9d4e  8bc1                 mov eax, ecx
// 009f9d50  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?HasBottomSeparator@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp

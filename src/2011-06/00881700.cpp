// roc 2011-06 00881700  unit: CXTPControlGallery  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881700
//
// 00881700  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00881706  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0088170d  7403                 je 0x881712
// 0088170f  33c0                 xor eax, eax
// 00881711  c3                   ret 
// 00881712  83b93002000000       cmp dword ptr [ecx + 0x230], 0
// 00881719  75f4                 jne 0x88170f
// 0088171b  56                   push esi
// 0088171c  8bb180000000         mov esi, dword ptr [ecx + 0x80]
// 00881722  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 00881728  6a01                 push 1
// 0088172a  6a00                 push 0
// 0088172c  6a01                 push 1
// 0088172e  6a01                 push 1
// 00881730  56                   push esi
// 00881731  e87a57fdff           call 0x856eb0
// 00881736  33c9                 xor ecx, ecx
// 00881738  3bc6                 cmp eax, esi
// 0088173a  0f9fc1               setg cl
// 0088173d  5e                   pop esi
// 0088173e  8bc1                 mov eax, ecx
// 00881740  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?HasBottomSeparator@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp

// from server: 100% by auto
// roc 2008-06 0072de50  unit: CXTPControlGallery  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072de50
//
// 0072de50  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0072de56  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0072de5d  7403                 je 0x72de62
// 0072de5f  33c0                 xor eax, eax
// 0072de61  c3                   ret 
// 0072de62  83b93002000000       cmp dword ptr [ecx + 0x230], 0
// 0072de69  75f4                 jne 0x72de5f
// 0072de6b  56                   push esi
// 0072de6c  8bb180000000         mov esi, dword ptr [ecx + 0x80]
// 0072de72  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 0072de78  6a01                 push 1
// 0072de7a  6a00                 push 0
// 0072de7c  6a01                 push 1
// 0072de7e  6a01                 push 1
// 0072de80  56                   push esi
// 0072de81  e82a3ffcff           call 0x6f1db0
// 0072de86  33c9                 xor ecx, ecx
// 0072de88  3bc6                 cmp eax, esi
// 0072de8a  0f9fc1               setg cl
// 0072de8d  5e                   pop esi
// 0072de8e  8bc1                 mov eax, ecx
// 0072de90  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?HasBottomSeparator@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp

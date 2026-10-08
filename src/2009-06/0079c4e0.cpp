// roc 2009-06 0079c4e0  unit: CXTPControlGallery  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c4e0
//
// 0079c4e0  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0079c4e6  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0079c4ed  7403                 je 0x79c4f2
// 0079c4ef  33c0                 xor eax, eax
// 0079c4f1  c3                   ret 
// 0079c4f2  83b93002000000       cmp dword ptr [ecx + 0x230], 0
// 0079c4f9  75f4                 jne 0x79c4ef
// 0079c4fb  56                   push esi
// 0079c4fc  8bb180000000         mov esi, dword ptr [ecx + 0x80]
// 0079c502  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 0079c508  6a01                 push 1
// 0079c50a  6a00                 push 0
// 0079c50c  6a01                 push 1
// 0079c50e  6a01                 push 1
// 0079c510  56                   push esi
// 0079c511  e8dae1fcff           call 0x76a6f0
// 0079c516  33c9                 xor ecx, ecx
// 0079c518  3bc6                 cmp eax, esi
// 0079c51a  0f9fc1               setg cl
// 0079c51d  5e                   pop esi
// 0079c51e  8bc1                 mov eax, ecx
// 0079c520  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?HasBottomSeparator@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp

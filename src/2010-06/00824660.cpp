// roc 2010-06 00824660  unit: CXTPControlGallery  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00824660
//
// 00824660  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00824666  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0082466d  7403                 je 0x824672
// 0082466f  33c0                 xor eax, eax
// 00824671  c3                   ret 
// 00824672  83b93002000000       cmp dword ptr [ecx + 0x230], 0
// 00824679  75f4                 jne 0x82466f
// 0082467b  56                   push esi
// 0082467c  8bb180000000         mov esi, dword ptr [ecx + 0x80]
// 00824682  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 00824688  6a01                 push 1
// 0082468a  6a00                 push 0
// 0082468c  6a01                 push 1
// 0082468e  6a01                 push 1
// 00824690  56                   push esi
// 00824691  e8da4efdff           call 0x7f9570
// 00824696  33c9                 xor ecx, ecx
// 00824698  3bc6                 cmp eax, esi
// 0082469a  0f9fc1               setg cl
// 0082469d  5e                   pop esi
// 0082469e  8bc1                 mov eax, ecx
// 008246a0  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?HasBottomSeparator@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp

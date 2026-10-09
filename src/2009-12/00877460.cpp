// roc 2009-12 00877460  unit: CXTPControlGallery  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877460
//
// 00877460  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00877466  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0087746d  7403                 je 0x877472
// 0087746f  33c0                 xor eax, eax
// 00877471  c3                   ret 
// 00877472  83b93002000000       cmp dword ptr [ecx + 0x230], 0
// 00877479  75f4                 jne 0x87746f
// 0087747b  56                   push esi
// 0087747c  8bb180000000         mov esi, dword ptr [ecx + 0x80]
// 00877482  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 00877488  6a01                 push 1
// 0087748a  6a00                 push 0
// 0087748c  6a01                 push 1
// 0087748e  6a01                 push 1
// 00877490  56                   push esi
// 00877491  e83ae0fcff           call 0x8454d0
// 00877496  33c9                 xor ecx, ecx
// 00877498  3bc6                 cmp eax, esi
// 0087749a  0f9fc1               setg cl
// 0087749d  5e                   pop esi
// 0087749e  8bc1                 mov eax, ecx
// 008774a0  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?HasBottomSeparator@CXTPControlGallery@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp

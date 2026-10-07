// roc 2007-08 007151f0  unit: CXTCaptionButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007151f0
//
// 007151f0  56                   push esi
// 007151f1  8bf1                 mov esi, ecx
// 007151f3  837e2000             cmp dword ptr [esi + 0x20], 0
// 007151f7  7413                 je 0x71520c
// 007151f9  e814320200           call 0x738412
// 007151fe  83e00f               and eax, 0xf
// 00715201  3c0b                 cmp al, 0xb
// 00715203  7507                 jne 0x71520c
// 00715205  b801000000           mov eax, 1
// 0071520a  eb02                 jmp 0x71520e
// 0071520c  33c0                 xor eax, eax
// 0071520e  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00715214  8b7620               mov esi, dword ptr [esi + 0x20]
// 00715217  85f6                 test esi, esi
// 00715219  740b                 je 0x715226
// 0071521b  6a00                 push 0
// 0071521d  6a00                 push 0
// 0071521f  56                   push esi
// 00715220  ff15dcec7700         call dword ptr [0x77ecdc]
// 00715226  b001                 mov al, 1
// 00715228  5e                   pop esi
// 00715229  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?Init@CXTButton@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp

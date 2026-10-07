// roc 2008-06 006b9a10  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b9a10
//
// 006b9a10  83790400             cmp dword ptr [ecx + 4], 0
// 006b9a14  750f                 jne 0x6b9a25
// 006b9a16  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006b9a19  85c0                 test eax, eax
// 006b9a1b  7405                 je 0x6b9a22
// 006b9a1d  833800               cmp dword ptr [eax], 0
// 006b9a20  7503                 jne 0x6b9a25
// 006b9a22  33c0                 xor eax, eax
// 006b9a24  c3                   ret 
// 006b9a25  b801000000           mov eax, 1
// 006b9a2a  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsAlpha@CXTPImageManagerIconHandle@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp

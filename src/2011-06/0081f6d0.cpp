// roc 2011-06 0081f6d0  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081f6d0
//
// 0081f6d0  83790400             cmp dword ptr [ecx + 4], 0
// 0081f6d4  750f                 jne 0x81f6e5
// 0081f6d6  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0081f6d9  85c0                 test eax, eax
// 0081f6db  7405                 je 0x81f6e2
// 0081f6dd  833800               cmp dword ptr [eax], 0
// 0081f6e0  7503                 jne 0x81f6e5
// 0081f6e2  33c0                 xor eax, eax
// 0081f6e4  c3                   ret 
// 0081f6e5  b801000000           mov eax, 1
// 0081f6ea  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?IsAlpha@CXTPImageManagerIconHandle@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp

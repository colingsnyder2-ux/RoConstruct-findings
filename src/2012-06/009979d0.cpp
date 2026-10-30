// from server: 100% by auto
// roc 2012-06 009979d0  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009979d0
//
// 009979d0  83790400             cmp dword ptr [ecx + 4], 0
// 009979d4  750f                 jne 0x9979e5
// 009979d6  8b4114               mov eax, dword ptr [ecx + 0x14]
// 009979d9  85c0                 test eax, eax
// 009979db  7405                 je 0x9979e2
// 009979dd  833800               cmp dword ptr [eax], 0
// 009979e0  7503                 jne 0x9979e5
// 009979e2  33c0                 xor eax, eax
// 009979e4  c3                   ret 
// 009979e5  b801000000           mov eax, 1
// 009979ea  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?IsAlpha@CXTPImageManagerIconHandle@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp

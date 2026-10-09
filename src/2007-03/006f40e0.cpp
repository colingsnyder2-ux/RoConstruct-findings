// roc 2007-03 006f40e0  unit: seg_006f0000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f40e0
//
// 006f40e0  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 006f40e4  7515                 jne 0x6f40fb
// 006f40e6  83792000             cmp dword ptr [ecx + 0x20], 0
// 006f40ea  740f                 je 0x6f40fb
// 006f40ec  8b4158               mov eax, dword ptr [ecx + 0x58]
// 006f40ef  83780c00             cmp dword ptr [eax + 0xc], 0
// 006f40f3  7406                 je 0x6f40fb
// 006f40f5  b801000000           mov eax, 1
// 006f40fa  c3                   ret 
// 006f40fb  33c0                 xor eax, eax
// 006f40fd  c3                   ret 
// library xtp-11.2.2/Source\SkinFramework\XTPSkinObject.cpp (function ?IsSkinEnabled@CXTPSkinObject@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinObject.cpp

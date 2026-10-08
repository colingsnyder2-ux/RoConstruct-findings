// from server: 100% by auto
// roc 2008-06 00797eb0  unit: CXTPRibbonGroupControlPopup  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797eb0
//
// 00797eb0  83797000             cmp dword ptr [ecx + 0x70], 0
// 00797eb4  750c                 jne 0x797ec2
// 00797eb6  83797400             cmp dword ptr [ecx + 0x74], 0
// 00797eba  7406                 je 0x797ec2
// 00797ebc  b801000000           mov eax, 1
// 00797ec1  c3                   ret 
// 00797ec2  33c0                 xor eax, eax
// 00797ec4  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?IsOptionButtonVisible@CXTPRibbonGroup@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp

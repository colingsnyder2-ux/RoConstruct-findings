// roc 2012-06 009bf720  unit: CXTTreeBase  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf720
//
// 009bf720  8b5110               mov edx, dword ptr [ecx + 0x10]
// 009bf723  8b442404             mov eax, dword ptr [esp + 4]
// 009bf727  895048               mov dword ptr [eax + 0x48], edx
// 009bf72a  83410cff             add dword ptr [ecx + 0xc], -1
// 009bf72e  894110               mov dword ptr [ecx + 0x10], eax
// 009bf731  7505                 jne 0x9bf738
// 009bf733  e898ffffff           call 0x9bf6d0
// 009bf738  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?FreeAssoc@?$CMap@PAXPAXUCLRFONT@CXTPTreeBase@@AAU12@@@IAEXPAVCAssoc@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp

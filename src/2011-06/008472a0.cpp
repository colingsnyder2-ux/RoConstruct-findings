// from server: 100% by auto
// roc 2011-06 008472a0  unit: CXTTreeBase  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008472a0
//
// 008472a0  8b5110               mov edx, dword ptr [ecx + 0x10]
// 008472a3  8b442404             mov eax, dword ptr [esp + 4]
// 008472a7  895048               mov dword ptr [eax + 0x48], edx
// 008472aa  83410cff             add dword ptr [ecx + 0xc], -1
// 008472ae  894110               mov dword ptr [ecx + 0x10], eax
// 008472b1  7505                 jne 0x8472b8
// 008472b3  e898ffffff           call 0x847250
// 008472b8  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?FreeAssoc@?$CMap@PAXPAXUCLRFONT@CXTPTreeBase@@AAU12@@@IAEXPAVCAssoc@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp

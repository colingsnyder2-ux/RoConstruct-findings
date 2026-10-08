// from server: 100% by auto
// roc 2011-06 008fd340  unit: CXTPRibbonControlTab  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fd340
//
// 008fd340  8b897cffffff         mov ecx, dword ptr [ecx - 0x84]
// 008fd346  e845d7f1ff           call 0x81aa90
// 008fd34b  8bc8                 mov ecx, eax
// 008fd34d  e89ee3f2ff           call 0x82b6f0
// 008fd352  33c9                 xor ecx, ecx
// 008fd354  394804               cmp dword ptr [eax + 4], ecx
// 008fd357  0f9fc1               setg cl
// 008fd35a  8bc1                 mov eax, ecx
// 008fd35c  c3                   ret 
// library xtp-15.2.1/Source\Ribbon\XTPRibbonControlTab.cpp (function ?IsMouseLocked@CXTPRibbonControlTab@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonControlTab.cpp

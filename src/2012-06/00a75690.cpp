// from server: 100% by auto
// roc 2012-06 00a75690  unit: CXTPRibbonControlTab  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a75690
//
// 00a75690  8b897cffffff         mov ecx, dword ptr [ecx - 0x84]
// 00a75696  e855d6f1ff           call 0x992cf0
// 00a7569b  8bc8                 mov ecx, eax
// 00a7569d  e81ee6f2ff           call 0x9a3cc0
// 00a756a2  33c9                 xor ecx, ecx
// 00a756a4  394804               cmp dword ptr [eax + 4], ecx
// 00a756a7  0f9fc1               setg cl
// 00a756aa  8bc1                 mov eax, ecx
// 00a756ac  c3                   ret 
// library xtp-15.2.1/Source\Ribbon\XTPRibbonControlTab.cpp (function ?IsMouseLocked@CXTPRibbonControlTab@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonControlTab.cpp

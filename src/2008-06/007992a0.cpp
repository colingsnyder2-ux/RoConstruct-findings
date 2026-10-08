// from server: 100% by auto
// roc 2008-06 007992a0  unit: CXTPRibbonControlTab  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007992a0
//
// 007992a0  8b897cffffff         mov ecx, dword ptr [ecx - 0x84]
// 007992a6  e865bbf1ff           call 0x6b4e10
// 007992ab  8bc8                 mov ecx, eax
// 007992ad  e82eb3f0ff           call 0x6a45e0
// 007992b2  33c9                 xor ecx, ecx
// 007992b4  394804               cmp dword ptr [eax + 4], ecx
// 007992b7  0f9fc1               setg cl
// 007992ba  8bc1                 mov eax, ecx
// 007992bc  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?IsMouseLocked@CXTPRibbonControlTab@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp

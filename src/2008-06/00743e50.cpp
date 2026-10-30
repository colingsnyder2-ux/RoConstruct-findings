// from server: 100% by auto
// roc 2008-06 00743e50  unit: CXTPControlEditCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00743e50
//
// 00743e50  83791400             cmp dword ptr [ecx + 0x14], 0
// 00743e54  7513                 jne 0x743e69
// 00743e56  8b09                 mov ecx, dword ptr [ecx]
// 00743e58  e87310f7ff           call 0x6b4ed0
// 00743e5d  83b88800000000       cmp dword ptr [eax + 0x88], 0
// 00743e64  7503                 jne 0x743e69
// 00743e66  33c0                 xor eax, eax
// 00743e68  c3                   ret 
// 00743e69  b801000000           mov eax, 1
// 00743e6e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?IsAnimationEnabled@CXTPCommandBarAnimation@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBarAnimation.cpp

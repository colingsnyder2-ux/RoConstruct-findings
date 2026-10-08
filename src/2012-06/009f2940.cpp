// from server: 100% by auto
// roc 2012-06 009f2940  unit: CPropertyGridItemBrickColor  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f2940
//
// 009f2940  56                   push esi
// 009f2941  8d44240c             lea eax, [esp + 0xc]
// 009f2945  50                   push eax
// 009f2946  8bf1                 mov esi, ecx
// 009f2948  e8a36efdff           call 0x9c97f0
// 009f294d  85c0                 test eax, eax
// 009f294f  7409                 je 0x9f295a
// 009f2951  b857000780           mov eax, 0x80070057
// 009f2956  5e                   pop esi
// 009f2957  c21400               ret 0x14
// 009f295a  8d4ee0               lea ecx, [esi - 0x20]
// 009f295d  e83ef4ffff           call 0x9f1da0
// 009f2962  33c0                 xor eax, eax
// 009f2964  5e                   pop esi
// 009f2965  c21400               ret 0x14
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?AccessibleSelect@CXTPPropertyGridItem@@MAEJJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp

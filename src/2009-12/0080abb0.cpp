// roc 2009-12 0080abb0  unit: CXTPImageManagerResource::CBitmapDC  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080abb0
//
// 0080abb0  8bd1                 mov edx, ecx
// 0080abb2  8d8a08010000         lea ecx, [edx + 0x108]
// 0080abb8  e8e3fcffff           call 0x80a8a0
// 0080abbd  85c0                 test eax, eax
// 0080abbf  7506                 jne 0x80abc7
// 0080abc1  b801000000           mov eax, 1
// 0080abc6  c3                   ret 
// 0080abc7  8d8a2c010000         lea ecx, [edx + 0x12c]
// 0080abcd  e8cefcffff           call 0x80a8a0
// 0080abd2  f7d8                 neg eax
// 0080abd4  1bc0                 sbb eax, eax
// 0080abd6  40                   inc eax
// 0080abd7  c3                   ret 
// copied from an identical function in another client (function ?HasDisabledIcon@CXTPImageManagerIcon@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
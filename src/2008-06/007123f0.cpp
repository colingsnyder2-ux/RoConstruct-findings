// roc 2008-06 007123f0  unit: CPropertyGridItemBrickColor  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007123f0
//
// 007123f0  56                   push esi
// 007123f1  8d44240c             lea eax, [esp + 0xc]
// 007123f5  50                   push eax
// 007123f6  8bf1                 mov esi, ecx
// 007123f8  e8a35efdff           call 0x6e82a0
// 007123fd  85c0                 test eax, eax
// 007123ff  7409                 je 0x71240a
// 00712401  b857000780           mov eax, 0x80070057
// 00712406  5e                   pop esi
// 00712407  c21400               ret 0x14
// 0071240a  8d4ee0               lea ecx, [esi - 0x20]
// 0071240d  e83ef4ffff           call 0x711850
// 00712412  33c0                 xor eax, eax
// 00712414  5e                   pop esi
// 00712415  c21400               ret 0x14
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?AccessibleSelect@CXTPPropertyGridItem@@MAEJJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp

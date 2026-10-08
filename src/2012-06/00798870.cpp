// from server: 100% by auto
// roc 2012-06 00798870  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::?$signal::Vslot::?$callable  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00798870
//
// 00798870  6a01                 push 1
// 00798872  e849ffffff           call 0x7987c0
// 00798877  c3                   ret 
// library xtp-15.2.1/Source\Controls\Button\XTPButton.cpp (function ?OnInvalidate@CXTPButton@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Button/XTPButton.cpp

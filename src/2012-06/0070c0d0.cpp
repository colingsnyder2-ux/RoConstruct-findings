// roc 2012-06 0070c0d0  unit: RBX::VWidget::?$NonFactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070c0d0
//
// 0070c0d0  8b01                 mov eax, dword ptr [ecx]
// 0070c0d2  8b5068               mov edx, dword ptr [eax + 0x68]
// 0070c0d5  ffe2                 jmp edx
// library xtp-15.2.1/Source\Markup\XTPMarkupUIElement.cpp (function ?GetLogicalChildrenCount@CXTPMarkupVisual@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Markup/XTPMarkupUIElement.cpp

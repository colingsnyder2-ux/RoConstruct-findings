// from server: 100% by auto
// roc 2011-06 007afca0  unit: RBX::ManualGlueJoint  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007afca0
//
// 007afca0  56                   push esi
// 007afca1  8bf1                 mov esi, ecx
// 007afca3  e858f9ffff           call 0x7af600
// 007afca8  8b442408             mov eax, dword ptr [esp + 8]
// 007afcac  50                   push eax
// 007afcad  8bce                 mov ecx, esi
// 007afcaf  e87cfeffff           call 0x7afb30
// 007afcb4  5e                   pop esi
// 007afcb5  c20400               ret 4
// library xtp-15.2.1/Source\Markup\XTPMarkupButton.cpp (function ?OnChecked@CXTPMarkupRadioButton@@MAEXPAVCXTPMarkupRoutedEventArgs@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Markup/XTPMarkupButton.cpp

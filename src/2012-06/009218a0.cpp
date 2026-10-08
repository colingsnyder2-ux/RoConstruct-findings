// from server: 100% by auto
// roc 2012-06 009218a0  unit: RBX::ManualGlueJoint  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009218a0
//
// 009218a0  56                   push esi
// 009218a1  8bf1                 mov esi, ecx
// 009218a3  e8e8f8ffff           call 0x921190
// 009218a8  8b442408             mov eax, dword ptr [esp + 8]
// 009218ac  50                   push eax
// 009218ad  8bce                 mov ecx, esi
// 009218af  e87cfeffff           call 0x921730
// 009218b4  5e                   pop esi
// 009218b5  c20400               ret 4
// library xtp-15.2.1/Source\Markup\XTPMarkupButton.cpp (function ?OnChecked@CXTPMarkupRadioButton@@MAEXPAVCXTPMarkupRoutedEventArgs@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Markup/XTPMarkupButton.cpp

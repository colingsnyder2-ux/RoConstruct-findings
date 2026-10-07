// roc 2012-06 00a66ac0  unit: CXTPOffice2007Image  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a66ac0
//
// 00a66ac0  56                   push esi
// 00a66ac1  8bf1                 mov esi, ecx
// 00a66ac3  e80a2b0300           call 0xa995d2
// 00a66ac8  85c0                 test eax, eax
// 00a66aca  7909                 jns 0xa66ad5
// 00a66acc  b803000000           mov eax, 3
// 00a66ad1  5e                   pop esi
// 00a66ad2  c20c00               ret 0xc
// 00a66ad5  8bce                 mov ecx, esi
// 00a66ad7  e802bcf1ff           call 0x9826de
// 00a66adc  5e                   pop esi
// 00a66add  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Popup\XTPColorSelectorCtrl.cpp (function ?OnMouseActivate@CXTPColorSelectorCtrl@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Popup/XTPColorSelectorCtrl.cpp

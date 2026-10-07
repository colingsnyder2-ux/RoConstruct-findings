// roc 2008-06 00787a00  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00787a00
//
// 00787a00  56                   push esi
// 00787a01  8bf1                 mov esi, ecx
// 00787a03  837e6000             cmp dword ptr [esi + 0x60], 0
// 00787a07  7411                 je 0x787a1a
// 00787a09  8b442410             mov eax, dword ptr [esp + 0x10]
// 00787a0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00787a11  50                   push eax
// 00787a12  51                   push ecx
// 00787a13  8bce                 mov ecx, esi
// 00787a15  e806feffff           call 0x787820
// 00787a1a  8bce                 mov ecx, esi
// 00787a1c  e84792f1ff           call 0x6a0c68
// 00787a21  5e                   pop esi
// 00787a22  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?OnMouseMove@CXTColorHex@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp

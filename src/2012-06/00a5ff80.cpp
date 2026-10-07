// roc 2012-06 00a5ff80  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5ff80
//
// 00a5ff80  56                   push esi
// 00a5ff81  8bf1                 mov esi, ecx
// 00a5ff83  837e6000             cmp dword ptr [esi + 0x60], 0
// 00a5ff87  7411                 je 0xa5ff9a
// 00a5ff89  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5ff8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a5ff91  50                   push eax
// 00a5ff92  51                   push ecx
// 00a5ff93  8bce                 mov ecx, esi
// 00a5ff95  e806feffff           call 0xa5fda0
// 00a5ff9a  8bce                 mov ecx, esi
// 00a5ff9c  e83d27f2ff           call 0x9826de
// 00a5ffa1  5e                   pop esi
// 00a5ffa2  c20c00               ret 0xc
// library xtp-13.2.1/Source\Controls\XTColorPageStandard.cpp (function ?OnMouseMove@CXTColorHex@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorPageStandard.cpp

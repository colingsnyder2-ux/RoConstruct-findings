// roc 2012-06 00a5fec0  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5fec0
//
// 00a5fec0  56                   push esi
// 00a5fec1  8bf1                 mov esi, ecx
// 00a5fec3  ff15e83bb200         call dword ptr [0xb23be8]
// 00a5fec9  50                   push eax
// 00a5feca  e89727f2ff           call 0x982666
// 00a5fecf  3bc6                 cmp eax, esi
// 00a5fed1  7407                 je 0xa5feda
// 00a5fed3  8bce                 mov ecx, esi
// 00a5fed5  e8ca25f2ff           call 0x9824a4
// 00a5feda  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5fede  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a5fee2  50                   push eax
// 00a5fee3  51                   push ecx
// 00a5fee4  8bce                 mov ecx, esi
// 00a5fee6  e8b5feffff           call 0xa5fda0
// 00a5feeb  8bce                 mov ecx, esi
// 00a5feed  c7466001000000       mov dword ptr [esi + 0x60], 1
// 00a5fef4  e8e527f2ff           call 0x9826de
// 00a5fef9  5e                   pop esi
// 00a5fefa  c20c00               ret 0xc
// library xtp-13.2.1/Source\Controls\XTColorPageStandard.cpp (function ?OnLButtonDown@CXTColorHex@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorPageStandard.cpp

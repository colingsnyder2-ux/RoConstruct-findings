// from server: 100% by auto
// roc 2008-06 00787940  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00787940
//
// 00787940  56                   push esi
// 00787941  8bf1                 mov esi, ecx
// 00787943  ff15102e8000         call dword ptr [0x802e10]
// 00787949  50                   push eax
// 0078794a  e88f92f1ff           call 0x6a0bde
// 0078794f  3bc6                 cmp eax, esi
// 00787951  7407                 je 0x78795a
// 00787953  8bce                 mov ecx, esi
// 00787955  e8ce90f1ff           call 0x6a0a28
// 0078795a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0078795e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00787962  50                   push eax
// 00787963  51                   push ecx
// 00787964  8bce                 mov ecx, esi
// 00787966  e8b5feffff           call 0x787820
// 0078796b  8bce                 mov ecx, esi
// 0078796d  c7466001000000       mov dword ptr [esi + 0x60], 1
// 00787974  e8ef92f1ff           call 0x6a0c68
// 00787979  5e                   pop esi
// 0078797a  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?OnLButtonDown@CXTColorHex@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp

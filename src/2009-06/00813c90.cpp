// roc 2009-06 00813c90  unit: CXTPRibbonTabPopupToolBar  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00813c90
//
// 00813c90  56                   push esi
// 00813c91  57                   push edi
// 00813c92  8bf1                 mov esi, ecx
// 00813c94  e8f796f1ff           call 0x72d390
// 00813c99  8bc8                 mov ecx, eax
// 00813c9b  e82072f1ff           call 0x72aec0
// 00813ca0  8bf8                 mov edi, eax
// 00813ca2  837f0400             cmp dword ptr [edi + 4], 0
// 00813ca6  7f56                 jg 0x813cfe
// 00813ca8  8b4620               mov eax, dword ptr [esi + 0x20]
// 00813cab  50                   push eax
// 00813cac  e80f00f8ff           call 0x793cc0
// 00813cb1  83c404               add esp, 4
// 00813cb4  85c0                 test eax, eax
// 00813cb6  7446                 je 0x813cfe
// 00813cb8  56                   push esi
// 00813cb9  8bcf                 mov ecx, edi
// 00813cbb  e88001f8ff           call 0x793e40
// 00813cc0  85c0                 test eax, eax
// 00813cc2  753a                 jne 0x813cfe
// 00813cc4  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 00813ccb  7531                 jne 0x813cfe
// 00813ccd  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 00813cd3  e8483dfaff           call 0x7b7a20
// 00813cd8  83b84c06000000       cmp dword ptr [eax + 0x64c], 0
// 00813cdf  741d                 je 0x813cfe
// 00813ce1  8b442414             mov eax, dword ptr [esp + 0x14]
// 00813ce5  8b965c020000         mov edx, dword ptr [esi + 0x25c]
// 00813ceb  8b5208               mov edx, dword ptr [edx + 8]
// 00813cee  8d8e5c020000         lea ecx, [esi + 0x25c]
// 00813cf4  50                   push eax
// 00813cf5  8b442414             mov eax, dword ptr [esp + 0x14]
// 00813cf9  50                   push eax
// 00813cfa  ffd2                 call edx
// 00813cfc  eb02                 jmp 0x813d00
// 00813cfe  33c0                 xor eax, eax
// 00813d00  3b8670020000         cmp eax, dword ptr [esi + 0x270]
// 00813d06  7420                 je 0x813d28
// 00813d08  50                   push eax
// 00813d09  8d8e5c020000         lea ecx, [esi + 0x25c]
// 00813d0f  e8ecfeffff           call 0x813c00
// 00813d14  83be7002000000       cmp dword ptr [esi + 0x270], 0
// 00813d1b  740b                 je 0x813d28
// 00813d1d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00813d20  50                   push eax
// 00813d21  8bcf                 mov ecx, edi
// 00813d23  e8c800f8ff           call 0x793df0
// 00813d28  8b442414             mov eax, dword ptr [esp + 0x14]
// 00813d2c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00813d30  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00813d34  50                   push eax
// 00813d35  51                   push ecx
// 00813d36  52                   push edx
// 00813d37  8bce                 mov ecx, esi
// 00813d39  e8f253f5ff           call 0x769130
// 00813d3e  5f                   pop edi
// 00813d3f  5e                   pop esi
// 00813d40  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseMove@CXTPRibbonTabPopupToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp

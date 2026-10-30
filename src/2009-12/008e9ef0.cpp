// roc 2009-12 008e9ef0  unit: CXTPRibbonGroup  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9ef0
//
// 008e9ef0  56                   push esi
// 008e9ef1  8bf1                 mov esi, ecx
// 008e9ef3  e828f9ffff           call 0x8e9820
// 008e9ef8  8b4658               mov eax, dword ptr [esi + 0x58]
// 008e9efb  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 008e9efe  7536                 jne 0x8e9f36
// 008e9f00  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008e9f03  c7815801000000000000 mov dword ptr [ecx + 0x158], 0
// 008e9f0d  8b5658               mov edx, dword ptr [esi + 0x58]
// 008e9f10  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 008e9f16  8b01                 mov eax, dword ptr [ecx]
// 008e9f18  8b566c               mov edx, dword ptr [esi + 0x6c]
// 008e9f1b  8b4058               mov eax, dword ptr [eax + 0x58]
// 008e9f1e  52                   push edx
// 008e9f1f  ffd0                 call eax
// 008e9f21  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008e9f24  39b0d8010000         cmp dword ptr [eax + 0x1d8], esi
// 008e9f2a  750a                 jne 0x8e9f36
// 008e9f2c  c780d801000000000000 mov dword ptr [eax + 0x1d8], 0
// 008e9f36  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 008e9f39  c7815801000000000000 mov dword ptr [ecx + 0x158], 0
// 008e9f43  8b5658               mov edx, dword ptr [esi + 0x58]
// 008e9f46  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 008e9f4c  8b01                 mov eax, dword ptr [ecx]
// 008e9f4e  8b5668               mov edx, dword ptr [esi + 0x68]
// 008e9f51  8b4058               mov eax, dword ptr [eax + 0x58]
// 008e9f54  52                   push edx
// 008e9f55  ffd0                 call eax
// 008e9f57  5e                   pop esi
// 008e9f58  c3                   ret 
// copied from an identical function in another client (function ?OnGroupRemoved@CXTPRibbonGroup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp
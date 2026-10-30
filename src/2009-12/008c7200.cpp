// roc 2009-12 008c7200  unit: CXTPPropertyGridInplaceEdit  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7200
//
// 008c7200  56                   push esi
// 008c7201  8bf1                 mov esi, ecx
// 008c7203  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 008c720a  7438                 je 0x8c7244
// 008c720c  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008c7212  85c9                 test ecx, ecx
// 008c7214  742e                 je 0x8c7244
// 008c7216  8b01                 mov eax, dword ptr [ecx]
// 008c7218  8b5058               mov edx, dword ptr [eax + 0x58]
// 008c721b  ffd2                 call edx
// 008c721d  85c0                 test eax, eax
// 008c721f  7523                 jne 0x8c7244
// 008c7221  8b06                 mov eax, dword ptr [esi]
// 008c7223  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 008c7229  6a01                 push 1
// 008c722b  6a01                 push 1
// 008c722d  8bce                 mov ecx, esi
// 008c722f  ffd2                 call edx
// 008c7231  85c0                 test eax, eax
// 008c7233  740f                 je 0x8c7244
// 008c7235  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008c723b  e8c2c9f2ff           call 0x7f3c02
// 008c7240  5e                   pop esi
// 008c7241  c20c00               ret 0xc
// 008c7244  8bce                 mov ecx, esi
// 008c7246  e8e5cbf2ff           call 0x7f3e30
// 008c724b  5e                   pop esi
// 008c724c  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDblClk@CXTPPropertyGridInplaceEdit@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\PropertyGrid\XTPPropertyGridInplaceEdit.cpp
// roc 2012-06 009f1cd0  unit: CXTPPropertyGridItem  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f1cd0
//
// 009f1cd0  56                   push esi
// 009f1cd1  8bf1                 mov esi, ecx
// 009f1cd3  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 009f1cda  744b                 je 0x9f1d27
// 009f1cdc  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 009f1ce2  83b94801000000       cmp dword ptr [ecx + 0x148], 0
// 009f1ce9  7524                 jne 0x9f1d0f
// 009f1ceb  85c9                 test ecx, ecx
// 009f1ced  7420                 je 0x9f1d0f
// 009f1cef  83792000             cmp dword ptr [ecx + 0x20], 0
// 009f1cf3  741a                 je 0x9f1d0f
// 009f1cf5  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 009f1cfc  7411                 je 0x9f1d0f
// 009f1cfe  56                   push esi
// 009f1cff  e81cd7ffff           call 0x9ef420
// 009f1d04  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 009f1d0a  e831e0ffff           call 0x9efd40
// 009f1d0f  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 009f1d15  56                   push esi
// 009f1d16  6a07                 push 7
// 009f1d18  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 009f1d22  e849c6ffff           call 0x9ee370
// 009f1d27  5e                   pop esi
// 009f1d28  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Collapse@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp

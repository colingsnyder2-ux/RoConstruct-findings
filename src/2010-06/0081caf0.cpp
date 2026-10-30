// roc 2010-06 0081caf0  unit: CXTPPropertyGridView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081caf0
//
// 0081caf0  56                   push esi
// 0081caf1  57                   push edi
// 0081caf2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0081caf6  8bf1                 mov esi, ecx
// 0081caf8  3bbe54010000         cmp edi, dword ptr [esi + 0x154]
// 0081cafe  741d                 je 0x81cb1d
// 0081cb00  85ff                 test edi, edi
// 0081cb02  7405                 je 0x81cb09
// 0081cb04  e839b2f8ff           call 0x7a7d42
// 0081cb09  8b4620               mov eax, dword ptr [esi + 0x20]
// 0081cb0c  6a00                 push 0
// 0081cb0e  6a00                 push 0
// 0081cb10  50                   push eax
// 0081cb11  89be54010000         mov dword ptr [esi + 0x154], edi
// 0081cb17  ff1578ba9e00         call dword ptr [0x9eba78]
// 0081cb1d  5f                   pop edi
// 0081cb1e  5e                   pop esi
// 0081cb1f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?FocusInplaceButton@CXTPPropertyGridView@@QAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp

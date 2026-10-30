// roc 2009-06 0078dad0  unit: CXTPPropertyGridView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078dad0
//
// 0078dad0  56                   push esi
// 0078dad1  57                   push edi
// 0078dad2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0078dad6  8bf1                 mov esi, ecx
// 0078dad8  3bbe54010000         cmp edi, dword ptr [esi + 0x154]
// 0078dade  741d                 je 0x78dafd
// 0078dae0  85ff                 test edi, edi
// 0078dae2  7405                 je 0x78dae9
// 0078dae4  e8f1b2f8ff           call 0x718dda
// 0078dae9  8b4620               mov eax, dword ptr [esi + 0x20]
// 0078daec  6a00                 push 0
// 0078daee  6a00                 push 0
// 0078daf0  50                   push eax
// 0078daf1  89be54010000         mov dword ptr [esi + 0x154], edi
// 0078daf7  ff157cee8900         call dword ptr [0x89ee7c]
// 0078dafd  5f                   pop edi
// 0078dafe  5e                   pop esi
// 0078daff  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?FocusInplaceButton@CXTPPropertyGridView@@QAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp

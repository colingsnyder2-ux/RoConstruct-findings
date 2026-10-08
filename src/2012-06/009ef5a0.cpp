// roc 2012-06 009ef5a0  unit: CXTPPropertyGridView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ef5a0
//
// 009ef5a0  56                   push esi
// 009ef5a1  57                   push edi
// 009ef5a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009ef5a6  8bf1                 mov esi, ecx
// 009ef5a8  3bbe54010000         cmp edi, dword ptr [esi + 0x154]
// 009ef5ae  741d                 je 0x9ef5cd
// 009ef5b0  85ff                 test edi, edi
// 009ef5b2  7405                 je 0x9ef5b9
// 009ef5b4  e8eb2ef9ff           call 0x9824a4
// 009ef5b9  8b4620               mov eax, dword ptr [esi + 0x20]
// 009ef5bc  6a00                 push 0
// 009ef5be  6a00                 push 0
// 009ef5c0  50                   push eax
// 009ef5c1  89be54010000         mov dword ptr [esi + 0x154], edi
// 009ef5c7  ff15ec3bb200         call dword ptr [0xb23bec]
// 009ef5cd  5f                   pop edi
// 009ef5ce  5e                   pop esi
// 009ef5cf  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?FocusInplaceButton@CXTPPropertyGridView@@QAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp

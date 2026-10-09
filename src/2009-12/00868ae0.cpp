// roc 2009-12 00868ae0  unit: CXTPPropertyGridView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868ae0
//
// 00868ae0  56                   push esi
// 00868ae1  57                   push edi
// 00868ae2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00868ae6  8bf1                 mov esi, ecx
// 00868ae8  3bbe54010000         cmp edi, dword ptr [esi + 0x154]
// 00868aee  741d                 je 0x868b0d
// 00868af0  85ff                 test edi, edi
// 00868af2  7405                 je 0x868af9
// 00868af4  e809b1f8ff           call 0x7f3c02
// 00868af9  8b4620               mov eax, dword ptr [esi + 0x20]
// 00868afc  6a00                 push 0
// 00868afe  6a00                 push 0
// 00868b00  50                   push eax
// 00868b01  89be54010000         mov dword ptr [esi + 0x154], edi
// 00868b07  ff15e8cb9800         call dword ptr [0x98cbe8]
// 00868b0d  5f                   pop edi
// 00868b0e  5e                   pop esi
// 00868b0f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?FocusInplaceButton@CXTPPropertyGridView@@QAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp

// roc 2012-06 00415a30  unit: CDeclarationView  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00415a30
//
// 00415a30  8b442414             mov eax, dword ptr [esp + 0x14]
// 00415a34  8b542404             mov edx, dword ptr [esp + 4]
// 00415a38  50                   push eax
// 00415a39  83ec10               sub esp, 0x10
// 00415a3c  8bc4                 mov eax, esp
// 00415a3e  8910                 mov dword ptr [eax], edx
// 00415a40  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00415a44  895004               mov dword ptr [eax + 4], edx
// 00415a47  8b542420             mov edx, dword ptr [esp + 0x20]
// 00415a4b  895008               mov dword ptr [eax + 8], edx
// 00415a4e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00415a52  89500c               mov dword ptr [eax + 0xc], edx
// 00415a55  e812cc5600           call 0x98266c
// 00415a5a  c21400               ret 0x14
// library xtp-15.2.1/Source\Controls\Deprecated\XTHtmlView.cpp (function ?get_accChild@CFormView@@UAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTHtmlView.cpp

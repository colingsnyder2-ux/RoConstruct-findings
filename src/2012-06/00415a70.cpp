// from server: 100% by auto
// roc 2012-06 00415a70  unit: CDeclarationView  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00415a70
//
// 00415a70  8b442414             mov eax, dword ptr [esp + 0x14]
// 00415a74  8b542404             mov edx, dword ptr [esp + 4]
// 00415a78  50                   push eax
// 00415a79  83ec10               sub esp, 0x10
// 00415a7c  8bc4                 mov eax, esp
// 00415a7e  8910                 mov dword ptr [eax], edx
// 00415a80  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00415a84  895004               mov dword ptr [eax + 4], edx
// 00415a87  8b542420             mov edx, dword ptr [esp + 0x20]
// 00415a8b  895008               mov dword ptr [eax + 8], edx
// 00415a8e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00415a92  89500c               mov dword ptr [eax + 0xc], edx
// 00415a95  e8decb5600           call 0x982678
// 00415a9a  c21400               ret 0x14
// library xtp-15.2.1/Source\Controls\Deprecated\XTHtmlView.cpp (function ?get_accChild@CFormView@@UAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTHtmlView.cpp

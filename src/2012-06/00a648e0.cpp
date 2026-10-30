// roc 2012-06 00a648e0  unit: CXTColorPageCustom  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a648e0
//
// 00a648e0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a648e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a648e8  8b01                 mov eax, dword ptr [ecx]
// 00a648ea  8b403c               mov eax, dword ptr [eax + 0x3c]
// 00a648ed  52                   push edx
// 00a648ee  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a648f2  52                   push edx
// 00a648f3  ffd0                 call eax
// 00a648f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a648f9  8901                 mov dword ptr [ecx], eax
// 00a648fb  33c0                 xor eax, eax
// 00a648fd  c21000               ret 0x10
// library xtp-15.2.1-shared-mfc/Source\Common\XTPRichRender.cpp (function ?RichTextCtrlCallbackIn@CXTPRichRender@@KGKKPAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPRichRender.cpp

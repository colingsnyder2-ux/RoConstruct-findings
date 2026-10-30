// from server: 100% by tester
// roc 2008-06 0078c500  unit: CXTSplitterWndThemeFactory  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c500
//
// 0078c500  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0078c504  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0078c508  8b01                 mov eax, dword ptr [ecx]
// 0078c50a  8b403c               mov eax, dword ptr [eax + 0x3c]
// 0078c50d  52                   push edx
// 0078c50e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0078c512  52                   push edx
// 0078c513  ffd0                 call eax
// 0078c515  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078c519  8901                 mov dword ptr [ecx], eax
// 0078c51b  33c0                 xor eax, eax
// 0078c51d  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\Common\XTPRichRender.cpp (function ?RichTextCtrlCallbackIn@CXTPRichRender@@KGKKPAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPRichRender.cpp

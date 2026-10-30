// from server: 100% by auto
// roc 2012-06 00415aa0  unit: CDeclarationView  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00415aa0
//
// 00415aa0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00415aa4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00415aa8  50                   push eax
// 00415aa9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00415aad  52                   push edx
// 00415aae  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00415ab2  50                   push eax
// 00415ab3  52                   push edx
// 00415ab4  8b542424             mov edx, dword ptr [esp + 0x24]
// 00415ab8  83ec10               sub esp, 0x10
// 00415abb  8bc4                 mov eax, esp
// 00415abd  8910                 mov dword ptr [eax], edx
// 00415abf  8b542438             mov edx, dword ptr [esp + 0x38]
// 00415ac3  895004               mov dword ptr [eax + 4], edx
// 00415ac6  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00415aca  895008               mov dword ptr [eax + 8], edx
// 00415acd  8b542440             mov edx, dword ptr [esp + 0x40]
// 00415ad1  89500c               mov dword ptr [eax + 0xc], edx
// 00415ad4  e8a5cb5600           call 0x98267e
// 00415ad9  c22000               ret 0x20
// library xtp-15.2.1/Source\Controls\Deprecated\XTHtmlView.cpp (function ?accLocation@CFormView@@UAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTHtmlView.cpp

// from server: 100% by auto
// roc 2012-06 00a07870  unit: CXTPRibbonTheme  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a07870
//
// 00a07870  8b442404             mov eax, dword ptr [esp + 4]
// 00a07874  50                   push eax
// 00a07875  e8e6ffffff           call 0xa07860
// 00a0787a  8bc8                 mov ecx, eax
// 00a0787c  e8cff00500           call 0xa66950
// 00a07881  c20400               ret 4
// library xtp-15.2.1/Source\SkinFramework\XTPSkinObjectMenu.cpp (function ?PlayEventSound@CXTPSkinPopupMenuState@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SkinFramework/XTPSkinObjectMenu.cpp

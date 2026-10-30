// from server: 100% by auto
// roc 2008-06 0076dfc0  unit: CXTPShadowsManager::CShadowWnd  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076dfc0
//
// 0076dfc0  8b4164               mov eax, dword ptr [ecx + 0x64]
// 0076dfc3  85c0                 test eax, eax
// 0076dfc5  7501                 jne 0x76dfc8
// 0076dfc7  c3                   ret 
// 0076dfc8  8b80580a0000         mov eax, dword ptr [eax + 0xa58]
// 0076dfce  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?GetSelectedTool@CXTPImageEditorPicture@@QAE?AW4XTPImageEditorTools@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp

// roc 2009-12 00741b10  unit: RBX::DebrisService  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00741b10
//
// 00741b10  8b81ac000000         mov eax, dword ptr [ecx + 0xac]
// 00741b16  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\ctlppg.cpp (function ?GetPageSite@COlePropertyPage@@QAEPAUIPropertyPageSite@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlppg.cpp

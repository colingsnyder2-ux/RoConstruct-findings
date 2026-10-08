// roc 2009-12 00528a80  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00528a80
//
// 00528a80  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 00528a86  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\dlgdhtml.cpp (function ?GetDHtmlEventMap@CMultiPageDHtmlDialog@@MAEPBUDHtmlEventMapEntry@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dlgdhtml.cpp

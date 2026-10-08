// roc 2009-12 005652c0  unit: CXTPRichRender::XTextHost  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005652c0
//
// 005652c0  56                   push esi
// 005652c1  8bf1                 mov esi, ecx
// 005652c3  e8c8fdffff           call 0x565090
// 005652c8  8bce                 mov ecx, esi
// 005652ca  5e                   pop esi
// 005652cb  e9c0fdffff           jmp 0x565090
// library mfc-8.0/atlmfc\src\mfc\ctlmodul.cpp (function ?ExitInstance@COleControlModule@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlmodul.cpp

// roc 2009-12 00433de0  unit: CPropGrid::UpdateItemsJob  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00433de0
//
// 00433de0  56                   push esi
// 00433de1  8bf1                 mov esi, ecx
// 00433de3  e868ffffff           call 0x433d50
// 00433de8  8bce                 mov ecx, esi
// 00433dea  5e                   pop esi
// 00433deb  e92c053c00           jmp 0x7f431c
// library mfc-8.0/atlmfc\src\mfc\ctlmodul.cpp (function ?ExitInstance@COleControlModule@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlmodul.cpp

// roc 2009-12 005ce5f0  unit: RBX::PartChunk  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ce5f0
//
// 005ce5f0  56                   push esi
// 005ce5f1  8bf1                 mov esi, ecx
// 005ce5f3  e888f6ffff           call 0x5cdc80
// 005ce5f8  8bce                 mov ecx, esi
// 005ce5fa  5e                   pop esi
// 005ce5fb  e920f5ffff           jmp 0x5cdb20
// library mfc-8.0/atlmfc\src\mfc\ctlmodul.cpp (function ?ExitInstance@COleControlModule@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlmodul.cpp

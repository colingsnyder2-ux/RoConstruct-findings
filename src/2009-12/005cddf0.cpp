// roc 2009-12 005cddf0  unit: RBX::PartChunk  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cddf0
//
// 005cddf0  56                   push esi
// 005cddf1  8bf1                 mov esi, ecx
// 005cddf3  e828fdffff           call 0x5cdb20
// 005cddf8  8bce                 mov ecx, esi
// 005cddfa  5e                   pop esi
// 005cddfb  e980feffff           jmp 0x5cdc80
// library mfc-8.0/atlmfc\src\mfc\ctlmodul.cpp (function ?ExitInstance@COleControlModule@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlmodul.cpp

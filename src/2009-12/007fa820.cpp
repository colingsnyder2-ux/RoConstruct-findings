// roc 2009-12 007fa820  unit: CPatchedControlComboBox  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fa820
//
// 007fa820  56                   push esi
// 007fa821  8bf1                 mov esi, ecx
// 007fa823  e888ffffff           call 0x7fa7b0
// 007fa828  8bce                 mov ecx, esi
// 007fa82a  5e                   pop esi
// 007fa82b  e950b4ffff           jmp 0x7f5c80
// library mfc-8.0/atlmfc\src\mfc\ctlmodul.cpp (function ?ExitInstance@COleControlModule@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlmodul.cpp

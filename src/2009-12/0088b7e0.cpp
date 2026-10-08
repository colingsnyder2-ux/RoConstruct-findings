// roc 2009-12 0088b7e0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b7e0
//
// 0088b7e0  56                   push esi
// 0088b7e1  8bf1                 mov esi, ecx
// 0088b7e3  e888ffffff           call 0x88b770
// 0088b7e8  8bce                 mov ecx, esi
// 0088b7ea  5e                   pop esi
// 0088b7eb  e990a4f6ff           jmp 0x7f5c80
// library mfc-8.0/atlmfc\src\mfc\ctlmodul.cpp (function ?ExitInstance@COleControlModule@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlmodul.cpp

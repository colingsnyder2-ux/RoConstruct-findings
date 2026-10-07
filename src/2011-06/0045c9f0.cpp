// roc 2011-06 0045c9f0  unit: CRobloxModule  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045c9f0
//
// 0045c9f0  56                   push esi
// 0045c9f1  8b31                 mov esi, dword ptr [ecx]
// 0045c9f3  85f6                 test esi, esi
// 0045c9f5  7410                 je 0x45ca07
// 0045c9f7  8bce                 mov ecx, esi
// 0045c9f9  e822db3900           call 0x7fa520
// 0045c9fe  56                   push esi
// 0045c9ff  e854d63a00           call 0x80a058
// 0045ca04  83c404               add esp, 4
// 0045ca07  5e                   pop esi
// 0045ca08  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp

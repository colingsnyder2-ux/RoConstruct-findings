// roc 2009-12 00806290  unit: CXTPControlComboBoxPopupBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00806290
//
// 00806290  c7018c2d9f00         mov dword ptr [ecx], 0x9f2d8c
// 00806296  8b4904               mov ecx, dword ptr [ecx + 4]
// 00806299  85c9                 test ecx, ecx
// 0080629b  7407                 je 0x8062a4
// 0080629d  51                   push ecx
// 0080629e  e863d8feff           call 0x7f3b06
// 008062a3  59                   pop ecx
// 008062a4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp

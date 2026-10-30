// roc 2009-12 008edbf0  unit: CXTPRibbonGroup  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008edbf0
//
// 008edbf0  c70154daa000         mov dword ptr [ecx], 0xa0da54
// 008edbf6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008edbf9  85c9                 test ecx, ecx
// 008edbfb  7407                 je 0x8edc04
// 008edbfd  51                   push ecx
// 008edbfe  e8035ff0ff           call 0x7f3b06
// 008edc03  59                   pop ecx
// 008edc04  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp

// roc 2007-03 0068b340  unit: seg_00680000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068b340
//
// 0068b340  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 0068b346  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\dlgfnt.cpp (function ?GetColor@CFontDialog@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dlgfnt.cpp

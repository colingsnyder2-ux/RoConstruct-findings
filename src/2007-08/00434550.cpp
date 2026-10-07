// roc 2007-08 00434550  unit: CClassTreeView  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00434550
//
// 00434550  8b442404             mov eax, dword ptr [esp + 4]
// 00434554  56                   push esi
// 00434555  50                   push eax
// 00434556  8bf1                 mov esi, ecx
// 00434558  e8e3c01f00           call 0x630640
// 0043455d  85c0                 test eax, eax
// 0043455f  7504                 jne 0x434565
// 00434561  5e                   pop esi
// 00434562  c20400               ret 4
// 00434565  c6869c00000000       mov byte ptr [esi + 0x9c], 0
// 0043456c  b801000000           mov eax, 1
// 00434571  5e                   pop esi
// 00434572  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeCtrlView.cpp (function ?PreCreateWindow@CXTTreeViewBase@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeCtrlView.cpp

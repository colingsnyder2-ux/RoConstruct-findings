// roc 2007-03 0075a5b0  unit: seg_00750000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0075a5b0
//
// 0075a5b0  b8b41c8600           mov eax, 0x861cb4
// 0075a5b5  e9e648ecff           jmp 0x61eea0
// library rbxgs/gui\GUI.cpp (function __ehhandler$?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IAEXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp

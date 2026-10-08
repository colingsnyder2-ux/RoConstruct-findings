// roc 2007-03 0052e770  unit: seg_00520000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052e770
//
// 0052e770  8d442404             lea eax, [esp + 4]
// 0052e774  50                   push eax
// 0052e775  81c114010000         add ecx, 0x114
// 0052e77b  e8c06a0500           call 0x585240
// 0052e780  c20400               ret 4
// library rbxgs/v8datamodel\Selection.cpp (function ?addFilteredSelection@Selection@RBX@@QAEXPAVISelectionBase@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp

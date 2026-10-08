// roc 2007-03 0076eb20  unit: seg_00760000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076eb20
//
// 0076eb20  6850807700           push 0x778050
// 0076eb25  e88906ebff           call 0x61f1b3
// 0076eb2a  59                   pop ecx
// 0076eb2b  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__EhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp

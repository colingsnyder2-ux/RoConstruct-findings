// roc 2009-06 005c82c0  unit: seg_005c0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c82c0
//
// 005c82c0  55                   push ebp
// 005c82c1  8bec                 mov ebp, esp
// 005c82c3  b001                 mov al, 1
// 005c82c5  5d                   pop ebp
// 005c82c6  c3                   ret 
// copied from an identical function in another client (function ??$flush@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@@?$flush_device_impl@Uany_tag@iostreams@boost@@@detail@iostreams@boost@@SA_NAAV?$basic_null_device@DUinput@iostreams@boost@@@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_boost_finish_239abb6d60853838.cpp
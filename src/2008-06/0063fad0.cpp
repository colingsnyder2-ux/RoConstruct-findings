// roc 2008-06 0063fad0  unit: RBX::MergeBinder  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063fad0
//
// 0063fad0  8b01                 mov eax, dword ptr [ecx]
// 0063fad2  8b400c               mov eax, dword ptr [eax + 0xc]
// 0063fad5  ffe0                 jmp eax
// library boost-1.34.1/libs\regex\src\cpp_regex_traits.cpp (function ?close@?$messages@D@std@@QBEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cpp_regex_traits.cpp

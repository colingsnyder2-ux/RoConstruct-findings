// from server: 100% by auto
// roc 2011-06 007e1160  unit: RBX::GrabTool  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007e1160
//
// 007e1160  8b01                 mov eax, dword ptr [ecx]
// 007e1162  8b400c               mov eax, dword ptr [eax + 0xc]
// 007e1165  ffe0                 jmp eax
// library boost-1.34.1/libs\regex\src\cpp_regex_traits.cpp (function ?close@?$messages@D@std@@QBEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cpp_regex_traits.cpp

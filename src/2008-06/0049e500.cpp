// roc 2008-06 0049e500  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049e500
//
// 0049e500  6890e44900           push 0x49e490
// 0049e505  ff1544228000         call dword ptr [0x802244]
// 0049e50b  e990ffffff           jmp 0x49e4a0
// library rbxgs-net/CrashReporter.cpp (function ?Start@CrashReporter@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net CrashReporter.cpp

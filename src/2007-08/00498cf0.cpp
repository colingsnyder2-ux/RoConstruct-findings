// roc 2007-08 00498cf0  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00498cf0
//
// 00498cf0  68608c4900           push 0x498c60
// 00498cf5  ff152cd27700         call dword ptr [0x77d22c]
// 00498cfb  e970ffffff           jmp 0x498c70
// library rbxgs-net/CrashReporter.cpp (function ?Start@CrashReporter@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net CrashReporter.cpp

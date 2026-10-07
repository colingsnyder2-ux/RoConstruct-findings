// roc 2007-08 00417130  unit: boost::X::U?$last_value::?$holder  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00417130
//
// 00417130  6a08                 push 8
// 00417132  e8bf8d2100           call 0x62fef6
// 00417137  83c404               add esp, 4
// 0041713a  85c0                 test eax, eax
// 0041713c  7407                 je 0x417145
// 0041713e  c700cc737800         mov dword ptr [eax], 0x7873cc
// 00417144  c3                   ret 
// 00417145  33c0                 xor eax, eax
// 00417147  c3                   ret 
// library templates-boost-1_34_1/signal_b.cpp (function ?clone@?$holder@U?$last_value@X@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 signal_b.cpp

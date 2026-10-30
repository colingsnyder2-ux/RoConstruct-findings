// from server: 100% by auto
// roc 2008-06 0041a600  unit: boost::X::U?$last_value::?$holder  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a600
//
// 0041a600  6a08                 push 8
// 0041a602  e819632800           call 0x6a0920
// 0041a607  83c404               add esp, 4
// 0041a60a  85c0                 test eax, eax
// 0041a60c  7407                 je 0x41a615
// 0041a60e  c70010ed8000         mov dword ptr [eax], 0x80ed10
// 0041a614  c3                   ret 
// 0041a615  33c0                 xor eax, eax
// 0041a617  c3                   ret 
// library templates-boost-1_34_1/signal_b.cpp (function ?clone@?$holder@U?$last_value@X@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 signal_b.cpp

// from server: 100% by auto
// roc 2007-08 006b2f80  unit: CXTPResourceManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2f80
//
// 006b2f80  6a10                 push 0x10
// 006b2f82  e8a7530800           call 0x73832e
// 006b2f87  85c0                 test eax, eax
// 006b2f89  7407                 je 0x6b2f92
// 006b2f8b  8bc8                 mov ecx, eax
// 006b2f8d  e95effffff           jmp 0x6b2ef0
// 006b2f92  33c0                 xor eax, eax
// 006b2f94  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPResourceManager.cpp (function ?CreateObject@?$CProcessLocal@VCXTPResourceManager@@@@SGPAVCNoTrackObject@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPResourceManager.cpp

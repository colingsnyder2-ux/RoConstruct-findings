// roc 2012-06 009f8460  unit: CXTPResourceManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f8460
//
// 009f8460  6a10                 push 0x10
// 009f8462  e805110a00           call 0xa9956c
// 009f8467  85c0                 test eax, eax
// 009f8469  7407                 je 0x9f8472
// 009f846b  8bc8                 mov ecx, eax
// 009f846d  e93efeffff           jmp 0x9f82b0
// 009f8472  33c0                 xor eax, eax
// 009f8474  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?CreateObject@?$CProcessLocal@VCXTPResourceManager@@@@SGPAVCNoTrackObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp

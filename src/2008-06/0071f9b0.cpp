// roc 2008-06 0071f9b0  unit: CXTPResourceManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f9b0
//
// 0071f9b0  6a10                 push 0x10
// 0071f9b2  e8edc50900           call 0x7bbfa4
// 0071f9b7  85c0                 test eax, eax
// 0071f9b9  7407                 je 0x71f9c2
// 0071f9bb  8bc8                 mov ecx, eax
// 0071f9bd  e93efeffff           jmp 0x71f800
// 0071f9c2  33c0                 xor eax, eax
// 0071f9c4  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?CreateObject@?$CProcessLocal@VCXTPResourceManager@@@@SGPAVCNoTrackObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp

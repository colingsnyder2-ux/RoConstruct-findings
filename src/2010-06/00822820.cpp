// roc 2010-06 00822820  unit: CXTPResourceManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00822820
//
// 00822820  6a10                 push 0x10
// 00822822  e83fa51500           call 0x97cd66
// 00822827  85c0                 test eax, eax
// 00822829  7407                 je 0x822832
// 0082282b  8bc8                 mov ecx, eax
// 0082282d  e93efeffff           jmp 0x822670
// 00822832  33c0                 xor eax, eax
// 00822834  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?CreateObject@?$CProcessLocal@VCXTPResourceManager@@@@SGPAVCNoTrackObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp

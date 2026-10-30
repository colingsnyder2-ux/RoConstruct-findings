// roc 2007-03 0069f1e0  unit: seg_00690000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069f1e0
//
// 0069f1e0  6a10                 push 0x10
// 0069f1e2  e893b80900           call 0x73aa7a
// 0069f1e7  85c0                 test eax, eax
// 0069f1e9  7407                 je 0x69f1f2
// 0069f1eb  8bc8                 mov ecx, eax
// 0069f1ed  e96effffff           jmp 0x69f160
// 0069f1f2  33c0                 xor eax, eax
// 0069f1f4  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?CreateObject@?$CProcessLocal@VCXTPResourceManager@@@@SGPAVCNoTrackObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp

// roc 2011-06 0087feb0  unit: CXTPResourceManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087feb0
//
// 0087feb0  6a10                 push 0x10
// 0087feb2  e8fbc61400           call 0x9cc5b2
// 0087feb7  85c0                 test eax, eax
// 0087feb9  7407                 je 0x87fec2
// 0087febb  8bc8                 mov ecx, eax
// 0087febd  e93efeffff           jmp 0x87fd00
// 0087fec2  33c0                 xor eax, eax
// 0087fec4  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?CreateObject@?$CProcessLocal@VCXTPResourceManager@@@@SGPAVCNoTrackObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp

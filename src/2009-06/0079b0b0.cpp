// roc 2009-06 0079b0b0  unit: CXTPResourceManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079b0b0
//
// 0079b0b0  6a10                 push 0x10
// 0079b0b2  e8130e0b00           call 0x84beca
// 0079b0b7  85c0                 test eax, eax
// 0079b0b9  7407                 je 0x79b0c2
// 0079b0bb  8bc8                 mov ecx, eax
// 0079b0bd  e93efeffff           jmp 0x79af00
// 0079b0c2  33c0                 xor eax, eax
// 0079b0c4  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?CreateObject@?$CProcessLocal@VCXTPResourceManager@@@@SGPAVCNoTrackObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp

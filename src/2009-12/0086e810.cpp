// roc 2009-12 0086e810  unit: CXTPResourceManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e810
//
// 0086e810  6a10                 push 0x10
// 0086e812  e8137c0b00           call 0x92642a
// 0086e817  85c0                 test eax, eax
// 0086e819  7407                 je 0x86e822
// 0086e81b  8bc8                 mov ecx, eax
// 0086e81d  e93efeffff           jmp 0x86e660
// 0086e822  33c0                 xor eax, eax
// 0086e824  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?CreateObject@?$CProcessLocal@VCXTPResourceManager@@@@SGPAVCNoTrackObject@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp

// roc 2007-03 00501bc0  unit: seg_00500000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00501bc0
//
// 00501bc0  0fbe442404           movsx eax, byte ptr [esp + 4]
// 00501bc5  50                   push eax
// 00501bc6  ff15c4e87700         call dword ptr [0x77e8c4]
// 00501bcc  83c404               add esp, 4
// 00501bcf  f7d8                 neg eax
// 00501bd1  1bc0                 sbb eax, eax
// 00501bd3  f7d8                 neg eax
// 00501bd5  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GImage_ppm.cpp (function ?isWhiteSpace@G3D@@YA_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage_ppm.cpp

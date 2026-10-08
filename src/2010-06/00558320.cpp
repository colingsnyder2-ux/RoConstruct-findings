// from server: 100% by auto
// roc 2010-06 00558320  unit: seg_00550000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00558320
//
// 00558320  8b442404             mov eax, dword ptr [esp + 4]
// 00558324  50                   push eax
// 00558325  68bc08a200           push 0xa208bc
// 0055832a  51                   push ecx
// 0055832b  e850ffffff           call 0x558280
// 00558330  83c40c               add esp, 0xc
// 00558333  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeNumber@TextOutput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp

// roc 2009-12 00814a60  unit: PAVCXTPCommandBarKeyboardTip::?$CArray  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814a60
//
// 00814a60  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 00814a66  85c9                 test ecx, ecx
// 00814a68  7406                 je 0x814a70
// 00814a6a  83792000             cmp dword ptr [ecx + 0x20], 0
// 00814a6e  7503                 jne 0x814a73
// 00814a70  33c0                 xor eax, eax
// 00814a72  c3                   ret 
// 00814a73  6804e80000           push 0xe804
// 00814a78  e8b3fcfdff           call 0x7f4730
// 00814a7d  50                   push eax
// 00814a7e  e83ddf0700           call 0x8929c0
// 00814a83  50                   push eax
// 00814a84  e8b5f1fdff           call 0x7f3c3e
// 00814a89  83c408               add esp, 8
// 00814a8c  c3                   ret 
// copied from an identical function in another client (function ?GetFrameReBar@CXTPCommandBars@@QBEPAVCXTPReBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
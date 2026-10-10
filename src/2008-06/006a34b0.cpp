// roc 2008-06 006a34b0  unit: CXTPCommandBarList  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a34b0
//
// 006a34b0  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 006a34b6  85c9                 test ecx, ecx
// 006a34b8  7406                 je 0x6a34c0
// 006a34ba  83792000             cmp dword ptr [ecx + 0x20], 0
// 006a34be  7503                 jne 0x6a34c3
// 006a34c0  33c0                 xor eax, eax
// 006a34c2  c3                   ret 
// 006a34c3  6804e80000           push 0xe804
// 006a34c8  e84bdfffff           call 0x6a1418
// 006a34cd  50                   push eax
// 006a34ce  e8ada30700           call 0x71d880
// 006a34d3  50                   push eax
// 006a34d4  e84dd7ffff           call 0x6a0c26
// 006a34d9  83c408               add esp, 8
// 006a34dc  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?GetFrameReBar@CXTPCommandBars@@QBEPAVCXTPReBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp

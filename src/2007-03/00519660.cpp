// roc 2007-03 00519660  unit: seg_00510000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00519660
//
// 00519660  8b08                 mov ecx, dword ptr [eax]
// 00519662  c7411436000000       mov dword ptr [ecx + 0x14], 0x36
// 00519669  8b10                 mov edx, dword ptr [eax]
// 0051966b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051966f  894a18               mov dword ptr [edx + 0x18], ecx
// 00519672  8b10                 mov edx, dword ptr [eax]
// 00519674  89442404             mov dword ptr [esp + 4], eax
// 00519678  8b02                 mov eax, dword ptr [edx]
// 0051967a  ffe0                 jmp eax
// library jpeg-6b/jmemmgr.c (function _out_of_memory)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

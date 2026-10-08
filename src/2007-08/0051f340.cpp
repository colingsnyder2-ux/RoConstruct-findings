// from server: 100% by auto
// roc 2007-08 0051f340  unit: seg_00510000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f340
//
// 0051f340  8b08                 mov ecx, dword ptr [eax]
// 0051f342  c7411436000000       mov dword ptr [ecx + 0x14], 0x36
// 0051f349  8b10                 mov edx, dword ptr [eax]
// 0051f34b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051f34f  894a18               mov dword ptr [edx + 0x18], ecx
// 0051f352  8b10                 mov edx, dword ptr [eax]
// 0051f354  89442404             mov dword ptr [esp + 4], eax
// 0051f358  8b02                 mov eax, dword ptr [edx]
// 0051f35a  ffe0                 jmp eax
// library jpeg-6b/jmemmgr.c (function _out_of_memory)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c

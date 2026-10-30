// roc 2009-12 0061d2b0  unit: seg_00610000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061d2b0
//
// 0061d2b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0061d2b4  8b8188010000         mov eax, dword ptr [ecx + 0x188]
// 0061d2ba  33d2                 xor edx, edx
// 0061d2bc  83b92401000001       cmp dword ptr [ecx + 0x124], 1
// 0061d2c3  899180000000         mov dword ptr [ecx + 0x80], edx
// 0061d2c9  7e0e                 jle 0x61d2d9
// 0061d2cb  c7401c01000000       mov dword ptr [eax + 0x1c], 1
// 0061d2d2  895014               mov dword ptr [eax + 0x14], edx
// 0061d2d5  895018               mov dword ptr [eax + 0x18], edx
// 0061d2d8  c3                   ret 
// 0061d2d9  57                   push edi
// 0061d2da  8bb91c010000         mov edi, dword ptr [ecx + 0x11c]
// 0061d2e0  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 0061d2e6  83ef01               sub edi, 1
// 0061d2e9  5f                   pop edi
// 0061d2ea  740d                 je 0x61d2f9
// 0061d2ec  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0061d2ef  89481c               mov dword ptr [eax + 0x1c], ecx
// 0061d2f2  895014               mov dword ptr [eax + 0x14], edx
// 0061d2f5  895018               mov dword ptr [eax + 0x18], edx
// 0061d2f8  c3                   ret 
// 0061d2f9  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 0061d2fc  89481c               mov dword ptr [eax + 0x1c], ecx
// 0061d2ff  895014               mov dword ptr [eax + 0x14], edx
// 0061d302  895018               mov dword ptr [eax + 0x18], edx
// 0061d305  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c

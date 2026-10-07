// roc 2009-06 0059b280  unit: seg_00590000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059b280
//
// 0059b280  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059b284  8b8188010000         mov eax, dword ptr [ecx + 0x188]
// 0059b28a  33d2                 xor edx, edx
// 0059b28c  83b92401000001       cmp dword ptr [ecx + 0x124], 1
// 0059b293  899180000000         mov dword ptr [ecx + 0x80], edx
// 0059b299  7e0e                 jle 0x59b2a9
// 0059b29b  c7401c01000000       mov dword ptr [eax + 0x1c], 1
// 0059b2a2  895014               mov dword ptr [eax + 0x14], edx
// 0059b2a5  895018               mov dword ptr [eax + 0x18], edx
// 0059b2a8  c3                   ret 
// 0059b2a9  57                   push edi
// 0059b2aa  8bb91c010000         mov edi, dword ptr [ecx + 0x11c]
// 0059b2b0  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 0059b2b6  83ef01               sub edi, 1
// 0059b2b9  5f                   pop edi
// 0059b2ba  740d                 je 0x59b2c9
// 0059b2bc  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0059b2bf  89481c               mov dword ptr [eax + 0x1c], ecx
// 0059b2c2  895014               mov dword ptr [eax + 0x14], edx
// 0059b2c5  895018               mov dword ptr [eax + 0x18], edx
// 0059b2c8  c3                   ret 
// 0059b2c9  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 0059b2cc  89481c               mov dword ptr [eax + 0x1c], ecx
// 0059b2cf  895014               mov dword ptr [eax + 0x14], edx
// 0059b2d2  895018               mov dword ptr [eax + 0x18], edx
// 0059b2d5  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c

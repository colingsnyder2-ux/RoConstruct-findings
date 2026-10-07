// roc 2008-06 00530fa0  unit: seg_00530000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530fa0
//
// 00530fa0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00530fa4  8b8188010000         mov eax, dword ptr [ecx + 0x188]
// 00530faa  33d2                 xor edx, edx
// 00530fac  83b92401000001       cmp dword ptr [ecx + 0x124], 1
// 00530fb3  899180000000         mov dword ptr [ecx + 0x80], edx
// 00530fb9  7e0e                 jle 0x530fc9
// 00530fbb  c7401c01000000       mov dword ptr [eax + 0x1c], 1
// 00530fc2  895014               mov dword ptr [eax + 0x14], edx
// 00530fc5  895018               mov dword ptr [eax + 0x18], edx
// 00530fc8  c3                   ret 
// 00530fc9  57                   push edi
// 00530fca  8bb91c010000         mov edi, dword ptr [ecx + 0x11c]
// 00530fd0  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 00530fd6  83ef01               sub edi, 1
// 00530fd9  5f                   pop edi
// 00530fda  740d                 je 0x530fe9
// 00530fdc  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00530fdf  89481c               mov dword ptr [eax + 0x1c], ecx
// 00530fe2  895014               mov dword ptr [eax + 0x14], edx
// 00530fe5  895018               mov dword ptr [eax + 0x18], edx
// 00530fe8  c3                   ret 
// 00530fe9  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 00530fec  89481c               mov dword ptr [eax + 0x1c], ecx
// 00530fef  895014               mov dword ptr [eax + 0x14], edx
// 00530ff2  895018               mov dword ptr [eax + 0x18], edx
// 00530ff5  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c

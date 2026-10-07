// roc 2011-06 005750c0  unit: seg_00570000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005750c0
//
// 005750c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005750c4  8b8188010000         mov eax, dword ptr [ecx + 0x188]
// 005750ca  33d2                 xor edx, edx
// 005750cc  83b92401000001       cmp dword ptr [ecx + 0x124], 1
// 005750d3  899180000000         mov dword ptr [ecx + 0x80], edx
// 005750d9  7e0e                 jle 0x5750e9
// 005750db  c7401c01000000       mov dword ptr [eax + 0x1c], 1
// 005750e2  895014               mov dword ptr [eax + 0x14], edx
// 005750e5  895018               mov dword ptr [eax + 0x18], edx
// 005750e8  c3                   ret 
// 005750e9  57                   push edi
// 005750ea  8bb91c010000         mov edi, dword ptr [ecx + 0x11c]
// 005750f0  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 005750f6  83ef01               sub edi, 1
// 005750f9  5f                   pop edi
// 005750fa  740d                 je 0x575109
// 005750fc  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005750ff  89481c               mov dword ptr [eax + 0x1c], ecx
// 00575102  895014               mov dword ptr [eax + 0x14], edx
// 00575105  895018               mov dword ptr [eax + 0x18], edx
// 00575108  c3                   ret 
// 00575109  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 0057510c  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057510f  895014               mov dword ptr [eax + 0x14], edx
// 00575112  895018               mov dword ptr [eax + 0x18], edx
// 00575115  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c

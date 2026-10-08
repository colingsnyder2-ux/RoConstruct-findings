// from server: 100% by auto
// roc 2012-06 006607d0  unit: seg_00660000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006607d0
//
// 006607d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006607d4  8b8188010000         mov eax, dword ptr [ecx + 0x188]
// 006607da  33d2                 xor edx, edx
// 006607dc  83b92401000001       cmp dword ptr [ecx + 0x124], 1
// 006607e3  899180000000         mov dword ptr [ecx + 0x80], edx
// 006607e9  7e0e                 jle 0x6607f9
// 006607eb  c7401c01000000       mov dword ptr [eax + 0x1c], 1
// 006607f2  895014               mov dword ptr [eax + 0x14], edx
// 006607f5  895018               mov dword ptr [eax + 0x18], edx
// 006607f8  c3                   ret 
// 006607f9  57                   push edi
// 006607fa  8bb91c010000         mov edi, dword ptr [ecx + 0x11c]
// 00660800  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 00660806  83ef01               sub edi, 1
// 00660809  5f                   pop edi
// 0066080a  740d                 je 0x660819
// 0066080c  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0066080f  89481c               mov dword ptr [eax + 0x1c], ecx
// 00660812  895014               mov dword ptr [eax + 0x14], edx
// 00660815  895018               mov dword ptr [eax + 0x18], edx
// 00660818  c3                   ret 
// 00660819  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 0066081c  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066081f  895014               mov dword ptr [eax + 0x14], edx
// 00660822  895018               mov dword ptr [eax + 0x18], edx
// 00660825  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c

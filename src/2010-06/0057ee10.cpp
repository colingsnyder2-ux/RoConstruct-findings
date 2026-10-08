// from server: 100% by auto
// roc 2010-06 0057ee10  unit: seg_00570000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057ee10
//
// 0057ee10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057ee14  8b8188010000         mov eax, dword ptr [ecx + 0x188]
// 0057ee1a  33d2                 xor edx, edx
// 0057ee1c  83b92401000001       cmp dword ptr [ecx + 0x124], 1
// 0057ee23  899180000000         mov dword ptr [ecx + 0x80], edx
// 0057ee29  7e0e                 jle 0x57ee39
// 0057ee2b  c7401c01000000       mov dword ptr [eax + 0x1c], 1
// 0057ee32  895014               mov dword ptr [eax + 0x14], edx
// 0057ee35  895018               mov dword ptr [eax + 0x18], edx
// 0057ee38  c3                   ret 
// 0057ee39  57                   push edi
// 0057ee3a  8bb91c010000         mov edi, dword ptr [ecx + 0x11c]
// 0057ee40  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 0057ee46  83ef01               sub edi, 1
// 0057ee49  5f                   pop edi
// 0057ee4a  740d                 je 0x57ee59
// 0057ee4c  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0057ee4f  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057ee52  895014               mov dword ptr [eax + 0x14], edx
// 0057ee55  895018               mov dword ptr [eax + 0x18], edx
// 0057ee58  c3                   ret 
// 0057ee59  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 0057ee5c  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057ee5f  895014               mov dword ptr [eax + 0x14], edx
// 0057ee62  895018               mov dword ptr [eax + 0x18], edx
// 0057ee65  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c

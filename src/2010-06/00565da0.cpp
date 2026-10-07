// roc 2010-06 00565da0  unit: seg_00560000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00565da0
//
// 00565da0  8b442404             mov eax, dword ptr [esp + 4]
// 00565da4  33c9                 xor ecx, ecx
// 00565da6  c700305c5600         mov dword ptr [eax], 0x565c30
// 00565dac  c74004905c5600       mov dword ptr [eax + 4], 0x565c90
// 00565db3  c74008505c5600       mov dword ptr [eax + 8], 0x565c50
// 00565dba  c7400cd05c5600       mov dword ptr [eax + 0xc], 0x565cd0
// 00565dc1  c74010805d5600       mov dword ptr [eax + 0x10], 0x565d80
// 00565dc8  894868               mov dword ptr [eax + 0x68], ecx
// 00565dcb  89486c               mov dword ptr [eax + 0x6c], ecx
// 00565dce  894814               mov dword ptr [eax + 0x14], ecx
// 00565dd1  c74070b828a200       mov dword ptr [eax + 0x70], 0xa228b8
// 00565dd8  c740747b000000       mov dword ptr [eax + 0x74], 0x7b
// 00565ddf  894878               mov dword ptr [eax + 0x78], ecx
// 00565de2  89487c               mov dword ptr [eax + 0x7c], ecx
// 00565de5  898880000000         mov dword ptr [eax + 0x80], ecx
// 00565deb  c3                   ret 
// library jpeg-6b/jerror.c (function _jpeg_std_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c

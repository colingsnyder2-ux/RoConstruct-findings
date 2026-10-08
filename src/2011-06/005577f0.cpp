// from server: 100% by auto
// roc 2011-06 005577f0  unit: seg_00550000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005577f0
//
// 005577f0  8b442404             mov eax, dword ptr [esp + 4]
// 005577f4  33c9                 xor ecx, ecx
// 005577f6  c70080765500         mov dword ptr [eax], 0x557680
// 005577fc  c74004e0765500       mov dword ptr [eax + 4], 0x5576e0
// 00557803  c74008a0765500       mov dword ptr [eax + 8], 0x5576a0
// 0055780a  c7400c20775500       mov dword ptr [eax + 0xc], 0x557720
// 00557811  c74010d0775500       mov dword ptr [eax + 0x10], 0x5577d0
// 00557818  894868               mov dword ptr [eax + 0x68], ecx
// 0055781b  89486c               mov dword ptr [eax + 0x6c], ecx
// 0055781e  894814               mov dword ptr [eax + 0x14], ecx
// 00557821  c740709819a800       mov dword ptr [eax + 0x70], 0xa81998
// 00557828  c740747b000000       mov dword ptr [eax + 0x74], 0x7b
// 0055782f  894878               mov dword ptr [eax + 0x78], ecx
// 00557832  89487c               mov dword ptr [eax + 0x7c], ecx
// 00557835  898880000000         mov dword ptr [eax + 0x80], ecx
// 0055783b  c3                   ret 
// library jpeg-6b/jerror.c (function _jpeg_std_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c

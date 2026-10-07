// roc 2008-06 0051eb40  unit: seg_00510000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051eb40
//
// 0051eb40  8b442404             mov eax, dword ptr [esp + 4]
// 0051eb44  33c9                 xor ecx, ecx
// 0051eb46  c700d0e95100         mov dword ptr [eax], 0x51e9d0
// 0051eb4c  c7400430ea5100       mov dword ptr [eax + 4], 0x51ea30
// 0051eb53  c74008f0e95100       mov dword ptr [eax + 8], 0x51e9f0
// 0051eb5a  c7400c70ea5100       mov dword ptr [eax + 0xc], 0x51ea70
// 0051eb61  c7401020eb5100       mov dword ptr [eax + 0x10], 0x51eb20
// 0051eb68  894868               mov dword ptr [eax + 0x68], ecx
// 0051eb6b  89486c               mov dword ptr [eax + 0x6c], ecx
// 0051eb6e  894814               mov dword ptr [eax + 0x14], ecx
// 0051eb71  c74070a0a88200       mov dword ptr [eax + 0x70], 0x82a8a0
// 0051eb78  c740747b000000       mov dword ptr [eax + 0x74], 0x7b
// 0051eb7f  894878               mov dword ptr [eax + 0x78], ecx
// 0051eb82  89487c               mov dword ptr [eax + 0x7c], ecx
// 0051eb85  898880000000         mov dword ptr [eax + 0x80], ecx
// 0051eb8b  c3                   ret 
// library jpeg-6b/jerror.c (function _jpeg_std_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c

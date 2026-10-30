// roc 2009-12 00604420  unit: seg_00600000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00604420
//
// 00604420  8b442404             mov eax, dword ptr [esp + 4]
// 00604424  33c9                 xor ecx, ecx
// 00604426  c700b0426000         mov dword ptr [eax], 0x6042b0
// 0060442c  c7400410436000       mov dword ptr [eax + 4], 0x604310
// 00604433  c74008d0426000       mov dword ptr [eax + 8], 0x6042d0
// 0060443a  c7400c50436000       mov dword ptr [eax + 0xc], 0x604350
// 00604441  c7401000446000       mov dword ptr [eax + 0x10], 0x604400
// 00604448  894868               mov dword ptr [eax + 0x68], ecx
// 0060444b  89486c               mov dword ptr [eax + 0x6c], ecx
// 0060444e  894814               mov dword ptr [eax + 0x14], ecx
// 00604451  c74070584b9c00       mov dword ptr [eax + 0x70], 0x9c4b58
// 00604458  c740747b000000       mov dword ptr [eax + 0x74], 0x7b
// 0060445f  894878               mov dword ptr [eax + 0x78], ecx
// 00604462  89487c               mov dword ptr [eax + 0x7c], ecx
// 00604465  898880000000         mov dword ptr [eax + 0x80], ecx
// 0060446b  c3                   ret 
// library jpeg-6b/jerror.c (function _jpeg_std_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c

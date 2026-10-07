// roc 2009-06 00582670  unit: seg_00580000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00582670
//
// 00582670  8b442404             mov eax, dword ptr [esp + 4]
// 00582674  33c9                 xor ecx, ecx
// 00582676  c70000255800         mov dword ptr [eax], 0x582500
// 0058267c  c7400460255800       mov dword ptr [eax + 4], 0x582560
// 00582683  c7400820255800       mov dword ptr [eax + 8], 0x582520
// 0058268a  c7400ca0255800       mov dword ptr [eax + 0xc], 0x5825a0
// 00582691  c7401050265800       mov dword ptr [eax + 0x10], 0x582650
// 00582698  894868               mov dword ptr [eax + 0x68], ecx
// 0058269b  89486c               mov dword ptr [eax + 0x6c], ecx
// 0058269e  894814               mov dword ptr [eax + 0x14], ecx
// 005826a1  c74070b8dc8c00       mov dword ptr [eax + 0x70], 0x8cdcb8
// 005826a8  c740747b000000       mov dword ptr [eax + 0x74], 0x7b
// 005826af  894878               mov dword ptr [eax + 0x78], ecx
// 005826b2  89487c               mov dword ptr [eax + 0x7c], ecx
// 005826b5  898880000000         mov dword ptr [eax + 0x80], ecx
// 005826bb  c3                   ret 
// library jpeg-6b/jerror.c (function _jpeg_std_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c

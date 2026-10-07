// roc 2012-06 00644670  unit: seg_00640000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644670
//
// 00644670  8b442404             mov eax, dword ptr [esp + 4]
// 00644674  33c9                 xor ecx, ecx
// 00644676  c70000456400         mov dword ptr [eax], 0x644500
// 0064467c  c7400460456400       mov dword ptr [eax + 4], 0x644560
// 00644683  c7400820456400       mov dword ptr [eax + 8], 0x644520
// 0064468a  c7400ca0456400       mov dword ptr [eax + 0xc], 0x6445a0
// 00644691  c7401050466400       mov dword ptr [eax + 0x10], 0x644650
// 00644698  894868               mov dword ptr [eax + 0x68], ecx
// 0064469b  89486c               mov dword ptr [eax + 0x6c], ecx
// 0064469e  894814               mov dword ptr [eax + 0x14], ecx
// 006446a1  c740704058b800       mov dword ptr [eax + 0x70], 0xb85840
// 006446a8  c740747b000000       mov dword ptr [eax + 0x74], 0x7b
// 006446af  894878               mov dword ptr [eax + 0x78], ecx
// 006446b2  89487c               mov dword ptr [eax + 0x7c], ecx
// 006446b5  898880000000         mov dword ptr [eax + 0x80], ecx
// 006446bb  c3                   ret 
// library jpeg-6b/jerror.c (function _jpeg_std_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c

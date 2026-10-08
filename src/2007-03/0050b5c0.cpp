// roc 2007-03 0050b5c0  unit: seg_00500000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0050b5c0
//
// 0050b5c0  8b442404             mov eax, dword ptr [esp + 4]
// 0050b5c4  33c9                 xor ecx, ecx
// 0050b5c6  c70030b45000         mov dword ptr [eax], 0x50b430
// 0050b5cc  c74004b0b45000       mov dword ptr [eax + 4], 0x50b4b0
// 0050b5d3  c7400850b45000       mov dword ptr [eax + 8], 0x50b450
// 0050b5da  c7400cf0b45000       mov dword ptr [eax + 0xc], 0x50b4f0
// 0050b5e1  c74010a0b55000       mov dword ptr [eax + 0x10], 0x50b5a0
// 0050b5e8  894868               mov dword ptr [eax + 0x68], ecx
// 0050b5eb  89486c               mov dword ptr [eax + 0x6c], ecx
// 0050b5ee  894814               mov dword ptr [eax + 0x14], ecx
// 0050b5f1  c74070f8227a00       mov dword ptr [eax + 0x70], 0x7a22f8
// 0050b5f8  c740747b000000       mov dword ptr [eax + 0x74], 0x7b
// 0050b5ff  894878               mov dword ptr [eax + 0x78], ecx
// 0050b602  89487c               mov dword ptr [eax + 0x7c], ecx
// 0050b605  898880000000         mov dword ptr [eax + 0x80], ecx
// 0050b60b  c3                   ret 
// library jpeg-6b/jerror.c (function _jpeg_std_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c

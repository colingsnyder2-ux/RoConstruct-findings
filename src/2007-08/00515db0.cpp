// roc 2007-08 00515db0  unit: seg_00510000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00515db0
//
// 00515db0  8b442404             mov eax, dword ptr [esp + 4]
// 00515db4  33c9                 xor ecx, ecx
// 00515db6  c700205c5100         mov dword ptr [eax], 0x515c20
// 00515dbc  c74004a05c5100       mov dword ptr [eax + 4], 0x515ca0
// 00515dc3  c74008405c5100       mov dword ptr [eax + 8], 0x515c40
// 00515dca  c7400ce05c5100       mov dword ptr [eax + 0xc], 0x515ce0
// 00515dd1  c74010905d5100       mov dword ptr [eax + 0x10], 0x515d90
// 00515dd8  894868               mov dword ptr [eax + 0x68], ecx
// 00515ddb  89486c               mov dword ptr [eax + 0x6c], ecx
// 00515dde  894814               mov dword ptr [eax + 0x14], ecx
// 00515de1  c74070d8297a00       mov dword ptr [eax + 0x70], 0x7a29d8
// 00515de8  c740747b000000       mov dword ptr [eax + 0x74], 0x7b
// 00515def  894878               mov dword ptr [eax + 0x78], ecx
// 00515df2  89487c               mov dword ptr [eax + 0x7c], ecx
// 00515df5  898880000000         mov dword ptr [eax + 0x80], ecx
// 00515dfb  c3                   ret 
// library jpeg-6b/jerror.c (function _jpeg_std_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c

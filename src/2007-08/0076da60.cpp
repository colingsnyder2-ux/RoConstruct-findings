// from server: 100% by auto
// roc 2007-08 0076da60  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076da60
//
// 0076da60  6a44                 push 0x44
// 0076da62  e88f24ecff           call 0x62fef6
// 0076da67  33c9                 xor ecx, ecx
// 0076da69  83c404               add esp, 4
// 0076da6c  3bc1                 cmp eax, ecx
// 0076da6e  745f                 je 0x76dacf
// 0076da70  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076da76  ba08000000           mov edx, 8
// 0076da7b  884804               mov byte ptr [eax + 4], cl
// 0076da7e  89480c               mov dword ptr [eax + 0xc], ecx
// 0076da81  894810               mov dword ptr [eax + 0x10], ecx
// 0076da84  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076da87  895020               mov dword ptr [eax + 0x20], edx
// 0076da8a  894824               mov dword ptr [eax + 0x24], ecx
// 0076da8d  894828               mov dword ptr [eax + 0x28], ecx
// 0076da90  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076da93  894830               mov dword ptr [eax + 0x30], ecx
// 0076da96  894834               mov dword ptr [eax + 0x34], ecx
// 0076da99  895038               mov dword ptr [eax + 0x38], edx
// 0076da9c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076da9f  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076daa5  0f94c1               sete cl
// 0076daa8  c70001000000         mov dword ptr [eax], 1
// 0076daae  c7400804000000       mov dword ptr [eax + 8], 4
// 0076dab5  c740143c800000       mov dword ptr [eax + 0x14], 0x803c
// 0076dabc  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 0076dac3  884840               mov byte ptr [eax + 0x40], cl
// 0076dac6  885041               mov byte ptr [eax + 0x41], dl
// 0076dac9  a3a4db8b00           mov dword ptr [0x8bdba4], eax
// 0076dace  c3                   ret 
// 0076dacf  890da4db8b00         mov dword ptr [0x8bdba4], ecx
// 0076dad5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

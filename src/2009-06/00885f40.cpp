// roc 2009-06 00885f40  unit: seg_00880000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885f40
//
// 00885f40  6a44                 push 0x44
// 00885f42  e8f12ae9ff           call 0x718a38
// 00885f47  33c9                 xor ecx, ecx
// 00885f49  83c404               add esp, 4
// 00885f4c  3bc1                 cmp eax, ecx
// 00885f4e  745c                 je 0x885fac
// 00885f50  ba20000000           mov edx, 0x20
// 00885f55  884804               mov byte ptr [eax + 4], cl
// 00885f58  89480c               mov dword ptr [eax + 0xc], ecx
// 00885f5b  894810               mov dword ptr [eax + 0x10], ecx
// 00885f5e  89501c               mov dword ptr [eax + 0x1c], edx
// 00885f61  894820               mov dword ptr [eax + 0x20], ecx
// 00885f64  894824               mov dword ptr [eax + 0x24], ecx
// 00885f67  894828               mov dword ptr [eax + 0x28], ecx
// 00885f6a  89482c               mov dword ptr [eax + 0x2c], ecx
// 00885f6d  894830               mov dword ptr [eax + 0x30], ecx
// 00885f70  894834               mov dword ptr [eax + 0x34], ecx
// 00885f73  8a0d59c29e00         mov cl, byte ptr [0x9ec259]
// 00885f79  895038               mov dword ptr [eax + 0x38], edx
// 00885f7c  89503c               mov dword ptr [eax + 0x3c], edx
// 00885f7f  8a1558c29e00         mov dl, byte ptr [0x9ec258]
// 00885f85  c70001000000         mov dword ptr [eax], 1
// 00885f8b  c7400803000000       mov dword ptr [eax + 8], 3
// 00885f92  c7401418880000       mov dword ptr [eax + 0x14], 0x8818
// 00885f99  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 00885fa0  884840               mov byte ptr [eax + 0x40], cl
// 00885fa3  885041               mov byte ptr [eax + 0x41], dl
// 00885fa6  a3fcd3a300           mov dword ptr [0xa3d3fc], eax
// 00885fab  c3                   ret 
// 00885fac  890dfcd3a300         mov dword ptr [0xa3d3fc], ecx
// 00885fb2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

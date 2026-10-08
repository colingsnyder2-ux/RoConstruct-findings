// from server: 100% by auto
// roc 2009-06 00885ec0  unit: seg_00880000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885ec0
//
// 00885ec0  6a44                 push 0x44
// 00885ec2  e8712be9ff           call 0x718a38
// 00885ec7  33c9                 xor ecx, ecx
// 00885ec9  83c404               add esp, 4
// 00885ecc  3bc1                 cmp eax, ecx
// 00885ece  745c                 je 0x885f2c
// 00885ed0  ba10000000           mov edx, 0x10
// 00885ed5  884804               mov byte ptr [eax + 4], cl
// 00885ed8  89480c               mov dword ptr [eax + 0xc], ecx
// 00885edb  894810               mov dword ptr [eax + 0x10], ecx
// 00885ede  89501c               mov dword ptr [eax + 0x1c], edx
// 00885ee1  894820               mov dword ptr [eax + 0x20], ecx
// 00885ee4  894824               mov dword ptr [eax + 0x24], ecx
// 00885ee7  894828               mov dword ptr [eax + 0x28], ecx
// 00885eea  89482c               mov dword ptr [eax + 0x2c], ecx
// 00885eed  894830               mov dword ptr [eax + 0x30], ecx
// 00885ef0  894834               mov dword ptr [eax + 0x34], ecx
// 00885ef3  8a0d59c29e00         mov cl, byte ptr [0x9ec259]
// 00885ef9  895038               mov dword ptr [eax + 0x38], edx
// 00885efc  89503c               mov dword ptr [eax + 0x3c], edx
// 00885eff  8a1558c29e00         mov dl, byte ptr [0x9ec258]
// 00885f05  c70001000000         mov dword ptr [eax], 1
// 00885f0b  c7400802000000       mov dword ptr [eax + 8], 2
// 00885f12  c740141e880000       mov dword ptr [eax + 0x14], 0x881e
// 00885f19  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 00885f20  884840               mov byte ptr [eax + 0x40], cl
// 00885f23  885041               mov byte ptr [eax + 0x41], dl
// 00885f26  a314d4a300           mov dword ptr [0xa3d414], eax
// 00885f2b  c3                   ret 
// 00885f2c  890d14d4a300         mov dword ptr [0xa3d414], ecx
// 00885f32  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

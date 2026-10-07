// roc 2008-06 007eff20  unit: seg_007e0000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007eff20
//
// 007eff20  6a44                 push 0x44
// 007eff22  e8f909ebff           call 0x6a0920
// 007eff27  33c9                 xor ecx, ecx
// 007eff29  83c404               add esp, 4
// 007eff2c  3bc1                 cmp eax, ecx
// 007eff2e  745c                 je 0x7eff8c
// 007eff30  ba10000000           mov edx, 0x10
// 007eff35  884804               mov byte ptr [eax + 4], cl
// 007eff38  89480c               mov dword ptr [eax + 0xc], ecx
// 007eff3b  894810               mov dword ptr [eax + 0x10], ecx
// 007eff3e  89501c               mov dword ptr [eax + 0x1c], edx
// 007eff41  894820               mov dword ptr [eax + 0x20], ecx
// 007eff44  894824               mov dword ptr [eax + 0x24], ecx
// 007eff47  894828               mov dword ptr [eax + 0x28], ecx
// 007eff4a  89482c               mov dword ptr [eax + 0x2c], ecx
// 007eff4d  894830               mov dword ptr [eax + 0x30], ecx
// 007eff50  894834               mov dword ptr [eax + 0x34], ecx
// 007eff53  8a0d154c9300         mov cl, byte ptr [0x934c15]
// 007eff59  895038               mov dword ptr [eax + 0x38], edx
// 007eff5c  89503c               mov dword ptr [eax + 0x3c], edx
// 007eff5f  8a15144c9300         mov dl, byte ptr [0x934c14]
// 007eff65  c70001000000         mov dword ptr [eax], 1
// 007eff6b  c7400802000000       mov dword ptr [eax + 8], 2
// 007eff72  c740141e880000       mov dword ptr [eax + 0x14], 0x881e
// 007eff79  c7401809190000       mov dword ptr [eax + 0x18], 0x1909
// 007eff80  884840               mov byte ptr [eax + 0x40], cl
// 007eff83  885041               mov byte ptr [eax + 0x41], dl
// 007eff86  a3b4fa9600           mov dword ptr [0x96fab4], eax
// 007eff8b  c3                   ret 
// 007eff8c  890db4fa9600         mov dword ptr [0x96fab4], ecx
// 007eff92  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?L16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

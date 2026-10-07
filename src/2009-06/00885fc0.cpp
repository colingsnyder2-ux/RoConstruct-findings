// roc 2009-06 00885fc0  unit: seg_00880000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885fc0
//
// 00885fc0  6a44                 push 0x44
// 00885fc2  e8712ae9ff           call 0x718a38
// 00885fc7  33c9                 xor ecx, ecx
// 00885fc9  83c404               add esp, 4
// 00885fcc  3bc1                 cmp eax, ecx
// 00885fce  745f                 je 0x88602f
// 00885fd0  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 00885fd6  ba08000000           mov edx, 8
// 00885fdb  884804               mov byte ptr [eax + 4], cl
// 00885fde  89480c               mov dword ptr [eax + 0xc], ecx
// 00885fe1  894810               mov dword ptr [eax + 0x10], ecx
// 00885fe4  89481c               mov dword ptr [eax + 0x1c], ecx
// 00885fe7  895020               mov dword ptr [eax + 0x20], edx
// 00885fea  894824               mov dword ptr [eax + 0x24], ecx
// 00885fed  894828               mov dword ptr [eax + 0x28], ecx
// 00885ff0  89482c               mov dword ptr [eax + 0x2c], ecx
// 00885ff3  894830               mov dword ptr [eax + 0x30], ecx
// 00885ff6  894834               mov dword ptr [eax + 0x34], ecx
// 00885ff9  895038               mov dword ptr [eax + 0x38], edx
// 00885ffc  89503c               mov dword ptr [eax + 0x3c], edx
// 00885fff  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 00886005  0f94c1               sete cl
// 00886008  c70001000000         mov dword ptr [eax], 1
// 0088600e  c7400804000000       mov dword ptr [eax + 8], 4
// 00886015  c740143c800000       mov dword ptr [eax + 0x14], 0x803c
// 0088601c  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 00886023  884840               mov byte ptr [eax + 0x40], cl
// 00886026  885041               mov byte ptr [eax + 0x41], dl
// 00886029  a318d4a300           mov dword ptr [0xa3d418], eax
// 0088602e  c3                   ret 
// 0088602f  890d18d4a300         mov dword ptr [0xa3d418], ecx
// 00886035  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

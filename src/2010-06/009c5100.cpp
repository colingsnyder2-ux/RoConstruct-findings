// roc 2010-06 009c5100  unit: seg_009c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5100
//
// 009c5100  6a44                 push 0x44
// 009c5102  e89928deff           call 0x7a79a0
// 009c5107  33c9                 xor ecx, ecx
// 009c5109  83c404               add esp, 4
// 009c510c  3bc1                 cmp eax, ecx
// 009c510e  745f                 je 0x9c516f
// 009c5110  380dd171b800         cmp byte ptr [0xb871d1], cl
// 009c5116  ba10000000           mov edx, 0x10
// 009c511b  884804               mov byte ptr [eax + 4], cl
// 009c511e  89480c               mov dword ptr [eax + 0xc], ecx
// 009c5121  894810               mov dword ptr [eax + 0x10], ecx
// 009c5124  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c5127  895020               mov dword ptr [eax + 0x20], edx
// 009c512a  894824               mov dword ptr [eax + 0x24], ecx
// 009c512d  894828               mov dword ptr [eax + 0x28], ecx
// 009c5130  89482c               mov dword ptr [eax + 0x2c], ecx
// 009c5133  894830               mov dword ptr [eax + 0x30], ecx
// 009c5136  894834               mov dword ptr [eax + 0x34], ecx
// 009c5139  895038               mov dword ptr [eax + 0x38], edx
// 009c513c  89503c               mov dword ptr [eax + 0x3c], edx
// 009c513f  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c5145  0f94c1               sete cl
// 009c5148  c70001000000         mov dword ptr [eax], 1
// 009c514e  c7400805000000       mov dword ptr [eax + 8], 5
// 009c5155  c740143e800000       mov dword ptr [eax + 0x14], 0x803e
// 009c515c  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 009c5163  884840               mov byte ptr [eax + 0x40], cl
// 009c5166  885041               mov byte ptr [eax + 0x41], dl
// 009c5169  a3ec3bc000           mov dword ptr [0xc03bec], eax
// 009c516e  c3                   ret 
// 009c516f  890dec3bc000         mov dword ptr [0xc03bec], ecx
// 009c5175  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

// roc 2008-06 007f0920  unit: seg_007f0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0920
//
// 007f0920  6a44                 push 0x44
// 007f0922  e8f9ffeaff           call 0x6a0920
// 007f0927  33c9                 xor ecx, ecx
// 007f0929  83c404               add esp, 4
// 007f092c  3bc1                 cmp eax, ecx
// 007f092e  745f                 je 0x7f098f
// 007f0930  ba20000000           mov edx, 0x20
// 007f0935  884804               mov byte ptr [eax + 4], cl
// 007f0938  894810               mov dword ptr [eax + 0x10], ecx
// 007f093b  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f093e  895020               mov dword ptr [eax + 0x20], edx
// 007f0941  895024               mov dword ptr [eax + 0x24], edx
// 007f0944  895028               mov dword ptr [eax + 0x28], edx
// 007f0947  89502c               mov dword ptr [eax + 0x2c], edx
// 007f094a  894830               mov dword ptr [eax + 0x30], ecx
// 007f094d  894834               mov dword ptr [eax + 0x34], ecx
// 007f0950  884840               mov byte ptr [eax + 0x40], cl
// 007f0953  8a0d144c9300         mov cl, byte ptr [0x934c14]
// 007f0959  ba80000000           mov edx, 0x80
// 007f095e  c70004000000         mov dword ptr [eax], 4
// 007f0964  c7400818000000       mov dword ptr [eax + 8], 0x18
// 007f096b  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 007f0972  c7401414880000       mov dword ptr [eax + 0x14], 0x8814
// 007f0979  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 007f0980  895038               mov dword ptr [eax + 0x38], edx
// 007f0983  89503c               mov dword ptr [eax + 0x3c], edx
// 007f0986  884841               mov byte ptr [eax + 0x41], cl
// 007f0989  a35cfa9600           mov dword ptr [0x96fa5c], eax
// 007f098e  c3                   ret 
// 007f098f  890d5cfa9600         mov dword ptr [0x96fa5c], ecx
// 007f0995  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

// from server: 100% by auto
// roc 2008-06 007f0820  unit: seg_007f0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0820
//
// 007f0820  6a44                 push 0x44
// 007f0822  e8f900ebff           call 0x6a0920
// 007f0827  33c9                 xor ecx, ecx
// 007f0829  83c404               add esp, 4
// 007f082c  3bc1                 cmp eax, ecx
// 007f082e  745f                 je 0x7f088f
// 007f0830  ba10000000           mov edx, 0x10
// 007f0835  884804               mov byte ptr [eax + 4], cl
// 007f0838  894810               mov dword ptr [eax + 0x10], ecx
// 007f083b  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f083e  895020               mov dword ptr [eax + 0x20], edx
// 007f0841  895024               mov dword ptr [eax + 0x24], edx
// 007f0844  895028               mov dword ptr [eax + 0x28], edx
// 007f0847  89502c               mov dword ptr [eax + 0x2c], edx
// 007f084a  894830               mov dword ptr [eax + 0x30], ecx
// 007f084d  894834               mov dword ptr [eax + 0x34], ecx
// 007f0850  884840               mov byte ptr [eax + 0x40], cl
// 007f0853  8a0d34fa9600         mov cl, byte ptr [0x96fa34]
// 007f0859  ba40000000           mov edx, 0x40
// 007f085e  c70004000000         mov dword ptr [eax], 4
// 007f0864  c7400816000000       mov dword ptr [eax + 8], 0x16
// 007f086b  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 007f0872  c740145b800000       mov dword ptr [eax + 0x14], 0x805b
// 007f0879  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 007f0880  895038               mov dword ptr [eax + 0x38], edx
// 007f0883  89503c               mov dword ptr [eax + 0x3c], edx
// 007f0886  884841               mov byte ptr [eax + 0x41], cl
// 007f0889  a3a4fa9600           mov dword ptr [0x96faa4], eax
// 007f088e  c3                   ret 
// 007f088f  890da4fa9600         mov dword ptr [0x96faa4], ecx
// 007f0895  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

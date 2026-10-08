// from server: 100% by auto
// roc 2008-06 007f07a0  unit: seg_007f0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f07a0
//
// 007f07a0  6a44                 push 0x44
// 007f07a2  e87901ebff           call 0x6a0920
// 007f07a7  33c9                 xor ecx, ecx
// 007f07a9  83c404               add esp, 4
// 007f07ac  3bc1                 cmp eax, ecx
// 007f07ae  745f                 je 0x7f080f
// 007f07b0  ba08000000           mov edx, 8
// 007f07b5  884804               mov byte ptr [eax + 4], cl
// 007f07b8  894810               mov dword ptr [eax + 0x10], ecx
// 007f07bb  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f07be  895020               mov dword ptr [eax + 0x20], edx
// 007f07c1  895024               mov dword ptr [eax + 0x24], edx
// 007f07c4  895028               mov dword ptr [eax + 0x28], edx
// 007f07c7  89502c               mov dword ptr [eax + 0x2c], edx
// 007f07ca  894830               mov dword ptr [eax + 0x30], ecx
// 007f07cd  894834               mov dword ptr [eax + 0x34], ecx
// 007f07d0  884840               mov byte ptr [eax + 0x40], cl
// 007f07d3  8a0d34fa9600         mov cl, byte ptr [0x96fa34]
// 007f07d9  ba20000000           mov edx, 0x20
// 007f07de  c70004000000         mov dword ptr [eax], 4
// 007f07e4  c7400815000000       mov dword ptr [eax + 8], 0x15
// 007f07eb  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 007f07f2  c7401458800000       mov dword ptr [eax + 0x14], 0x8058
// 007f07f9  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 007f0800  895038               mov dword ptr [eax + 0x38], edx
// 007f0803  89503c               mov dword ptr [eax + 0x3c], edx
// 007f0806  884841               mov byte ptr [eax + 0x41], cl
// 007f0809  a3a8fa9600           mov dword ptr [0x96faa8], eax
// 007f080e  c3                   ret 
// 007f080f  890da8fa9600         mov dword ptr [0x96faa8], ecx
// 007f0815  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

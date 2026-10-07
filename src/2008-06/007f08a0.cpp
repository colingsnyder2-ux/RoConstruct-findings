// roc 2008-06 007f08a0  unit: seg_007f0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f08a0
//
// 007f08a0  6a44                 push 0x44
// 007f08a2  e87900ebff           call 0x6a0920
// 007f08a7  33c9                 xor ecx, ecx
// 007f08a9  83c404               add esp, 4
// 007f08ac  3bc1                 cmp eax, ecx
// 007f08ae  745f                 je 0x7f090f
// 007f08b0  ba10000000           mov edx, 0x10
// 007f08b5  884804               mov byte ptr [eax + 4], cl
// 007f08b8  894810               mov dword ptr [eax + 0x10], ecx
// 007f08bb  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f08be  895020               mov dword ptr [eax + 0x20], edx
// 007f08c1  895024               mov dword ptr [eax + 0x24], edx
// 007f08c4  895028               mov dword ptr [eax + 0x28], edx
// 007f08c7  89502c               mov dword ptr [eax + 0x2c], edx
// 007f08ca  894830               mov dword ptr [eax + 0x30], ecx
// 007f08cd  894834               mov dword ptr [eax + 0x34], ecx
// 007f08d0  884840               mov byte ptr [eax + 0x40], cl
// 007f08d3  8a0d144c9300         mov cl, byte ptr [0x934c14]
// 007f08d9  ba40000000           mov edx, 0x40
// 007f08de  c70004000000         mov dword ptr [eax], 4
// 007f08e4  c7400811000000       mov dword ptr [eax + 8], 0x11
// 007f08eb  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 007f08f2  c740141a880000       mov dword ptr [eax + 0x14], 0x881a
// 007f08f9  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 007f0900  895038               mov dword ptr [eax + 0x38], edx
// 007f0903  89503c               mov dword ptr [eax + 0x3c], edx
// 007f0906  884841               mov byte ptr [eax + 0x41], cl
// 007f0909  a340fa9600           mov dword ptr [0x96fa40], eax
// 007f090e  c3                   ret 
// 007f090f  890d40fa9600         mov dword ptr [0x96fa40], ecx
// 007f0915  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

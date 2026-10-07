// roc 2008-06 007f06a0  unit: seg_007f0000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f06a0
//
// 007f06a0  6a44                 push 0x44
// 007f06a2  e87902ebff           call 0x6a0920
// 007f06a7  33c9                 xor ecx, ecx
// 007f06a9  83c404               add esp, 4
// 007f06ac  3bc1                 cmp eax, ecx
// 007f06ae  7465                 je 0x7f0715
// 007f06b0  884804               mov byte ptr [eax + 4], cl
// 007f06b3  894810               mov dword ptr [eax + 0x10], ecx
// 007f06b6  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f06b9  894820               mov dword ptr [eax + 0x20], ecx
// 007f06bc  ba10000000           mov edx, 0x10
// 007f06c1  894830               mov dword ptr [eax + 0x30], ecx
// 007f06c4  894834               mov dword ptr [eax + 0x34], ecx
// 007f06c7  b930000000           mov ecx, 0x30
// 007f06cc  895024               mov dword ptr [eax + 0x24], edx
// 007f06cf  895028               mov dword ptr [eax + 0x28], edx
// 007f06d2  89502c               mov dword ptr [eax + 0x2c], edx
// 007f06d5  8a15144c9300         mov dl, byte ptr [0x934c14]
// 007f06db  894838               mov dword ptr [eax + 0x38], ecx
// 007f06de  89483c               mov dword ptr [eax + 0x3c], ecx
// 007f06e1  8a0d154c9300         mov cl, byte ptr [0x934c15]
// 007f06e7  c70003000000         mov dword ptr [eax], 3
// 007f06ed  c7400811000000       mov dword ptr [eax + 8], 0x11
// 007f06f4  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 007f06fb  c740141b880000       mov dword ptr [eax + 0x14], 0x881b
// 007f0702  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 007f0709  884840               mov byte ptr [eax + 0x40], cl
// 007f070c  885041               mov byte ptr [eax + 0x41], dl
// 007f070f  a364fa9600           mov dword ptr [0x96fa64], eax
// 007f0714  c3                   ret 
// 007f0715  890d64fa9600         mov dword ptr [0x96fa64], ecx
// 007f071b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

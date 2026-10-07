// roc 2010-06 009c5680  unit: seg_009c0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5680
//
// 009c5680  6a44                 push 0x44
// 009c5682  e81923deff           call 0x7a79a0
// 009c5687  33c9                 xor ecx, ecx
// 009c5689  83c404               add esp, 4
// 009c568c  3bc1                 cmp eax, ecx
// 009c568e  7461                 je 0x9c56f1
// 009c5690  ba10000000           mov edx, 0x10
// 009c5695  884804               mov byte ptr [eax + 4], cl
// 009c5698  894810               mov dword ptr [eax + 0x10], ecx
// 009c569b  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c569e  894820               mov dword ptr [eax + 0x20], ecx
// 009c56a1  894830               mov dword ptr [eax + 0x30], ecx
// 009c56a4  894834               mov dword ptr [eax + 0x34], ecx
// 009c56a7  b930000000           mov ecx, 0x30
// 009c56ac  895008               mov dword ptr [eax + 8], edx
// 009c56af  895024               mov dword ptr [eax + 0x24], edx
// 009c56b2  895028               mov dword ptr [eax + 0x28], edx
// 009c56b5  89502c               mov dword ptr [eax + 0x2c], edx
// 009c56b8  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c56be  894838               mov dword ptr [eax + 0x38], ecx
// 009c56c1  89483c               mov dword ptr [eax + 0x3c], ecx
// 009c56c4  8a0dd171b800         mov cl, byte ptr [0xb871d1]
// 009c56ca  c70003000000         mov dword ptr [eax], 3
// 009c56d0  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 009c56d7  c7401454800000       mov dword ptr [eax + 0x14], 0x8054
// 009c56de  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 009c56e5  884840               mov byte ptr [eax + 0x40], cl
// 009c56e8  885041               mov byte ptr [eax + 0x41], dl
// 009c56eb  a3dc3bc000           mov dword ptr [0xc03bdc], eax
// 009c56f0  c3                   ret 
// 009c56f1  890ddc3bc000         mov dword ptr [0xc03bdc], ecx
// 009c56f7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

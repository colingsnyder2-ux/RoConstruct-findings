// from server: 100% by auto
// roc 2010-06 009c5780  unit: seg_009c0000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5780
//
// 009c5780  6a44                 push 0x44
// 009c5782  e81922deff           call 0x7a79a0
// 009c5787  33c9                 xor ecx, ecx
// 009c5789  83c404               add esp, 4
// 009c578c  3bc1                 cmp eax, ecx
// 009c578e  7465                 je 0x9c57f5
// 009c5790  884804               mov byte ptr [eax + 4], cl
// 009c5793  894810               mov dword ptr [eax + 0x10], ecx
// 009c5796  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c5799  894820               mov dword ptr [eax + 0x20], ecx
// 009c579c  ba20000000           mov edx, 0x20
// 009c57a1  894830               mov dword ptr [eax + 0x30], ecx
// 009c57a4  894834               mov dword ptr [eax + 0x34], ecx
// 009c57a7  b960000000           mov ecx, 0x60
// 009c57ac  895024               mov dword ptr [eax + 0x24], edx
// 009c57af  895028               mov dword ptr [eax + 0x28], edx
// 009c57b2  89502c               mov dword ptr [eax + 0x2c], edx
// 009c57b5  8a15d071b800         mov dl, byte ptr [0xb871d0]
// 009c57bb  894838               mov dword ptr [eax + 0x38], ecx
// 009c57be  89483c               mov dword ptr [eax + 0x3c], ecx
// 009c57c1  8a0dd171b800         mov cl, byte ptr [0xb871d1]
// 009c57c7  c70003000000         mov dword ptr [eax], 3
// 009c57cd  c7400812000000       mov dword ptr [eax + 8], 0x12
// 009c57d4  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 009c57db  c7401415880000       mov dword ptr [eax + 0x14], 0x8815
// 009c57e2  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 009c57e9  884840               mov byte ptr [eax + 0x40], cl
// 009c57ec  885041               mov byte ptr [eax + 0x41], dl
// 009c57ef  a3e43bc000           mov dword ptr [0xc03be4], eax
// 009c57f4  c3                   ret 
// 009c57f5  890de43bc000         mov dword ptr [0xc03be4], ecx
// 009c57fb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

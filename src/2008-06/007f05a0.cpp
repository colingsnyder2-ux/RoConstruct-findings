// roc 2008-06 007f05a0  unit: seg_007f0000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f05a0
//
// 007f05a0  6a44                 push 0x44
// 007f05a2  e87903ebff           call 0x6a0920
// 007f05a7  33c9                 xor ecx, ecx
// 007f05a9  83c404               add esp, 4
// 007f05ac  3bc1                 cmp eax, ecx
// 007f05ae  7468                 je 0x7f0618
// 007f05b0  ba08000000           mov edx, 8
// 007f05b5  884804               mov byte ptr [eax + 4], cl
// 007f05b8  894810               mov dword ptr [eax + 0x10], ecx
// 007f05bb  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f05be  894820               mov dword ptr [eax + 0x20], ecx
// 007f05c1  895024               mov dword ptr [eax + 0x24], edx
// 007f05c4  895028               mov dword ptr [eax + 0x28], edx
// 007f05c7  89502c               mov dword ptr [eax + 0x2c], edx
// 007f05ca  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f05d0  894830               mov dword ptr [eax + 0x30], ecx
// 007f05d3  894834               mov dword ptr [eax + 0x34], ecx
// 007f05d6  8a0d154c9300         mov cl, byte ptr [0x934c15]
// 007f05dc  c70003000000         mov dword ptr [eax], 3
// 007f05e2  c740080f000000       mov dword ptr [eax + 8], 0xf
// 007f05e9  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 007f05f0  c7401451800000       mov dword ptr [eax + 0x14], 0x8051
// 007f05f7  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 007f05fe  c7403820000000       mov dword ptr [eax + 0x38], 0x20
// 007f0605  c7403c18000000       mov dword ptr [eax + 0x3c], 0x18
// 007f060c  884840               mov byte ptr [eax + 0x40], cl
// 007f060f  885041               mov byte ptr [eax + 0x41], dl
// 007f0612  a3b0fa9600           mov dword ptr [0x96fab0], eax
// 007f0617  c3                   ret 
// 007f0618  890db0fa9600         mov dword ptr [0x96fab0], ecx
// 007f061e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

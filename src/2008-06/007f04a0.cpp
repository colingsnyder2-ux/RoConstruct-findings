// roc 2008-06 007f04a0  unit: seg_007f0000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f04a0
//
// 007f04a0  6a44                 push 0x44
// 007f04a2  e87904ebff           call 0x6a0920
// 007f04a7  33c9                 xor ecx, ecx
// 007f04a9  83c404               add esp, 4
// 007f04ac  3bc1                 cmp eax, ecx
// 007f04ae  7465                 je 0x7f0515
// 007f04b0  884804               mov byte ptr [eax + 4], cl
// 007f04b3  894810               mov dword ptr [eax + 0x10], ecx
// 007f04b6  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f04b9  894820               mov dword ptr [eax + 0x20], ecx
// 007f04bc  ba05000000           mov edx, 5
// 007f04c1  894830               mov dword ptr [eax + 0x30], ecx
// 007f04c4  894834               mov dword ptr [eax + 0x34], ecx
// 007f04c7  b910000000           mov ecx, 0x10
// 007f04cc  895024               mov dword ptr [eax + 0x24], edx
// 007f04cf  895028               mov dword ptr [eax + 0x28], edx
// 007f04d2  89502c               mov dword ptr [eax + 0x2c], edx
// 007f04d5  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f04db  894838               mov dword ptr [eax + 0x38], ecx
// 007f04de  89483c               mov dword ptr [eax + 0x3c], ecx
// 007f04e1  8a0d154c9300         mov cl, byte ptr [0x934c15]
// 007f04e7  c70003000000         mov dword ptr [eax], 3
// 007f04ed  c740080d000000       mov dword ptr [eax + 8], 0xd
// 007f04f4  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 007f04fb  c7401450800000       mov dword ptr [eax + 0x14], 0x8050
// 007f0502  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 007f0509  884840               mov byte ptr [eax + 0x40], cl
// 007f050c  885041               mov byte ptr [eax + 0x41], dl
// 007f050f  a38cfa9600           mov dword ptr [0x96fa8c], eax
// 007f0514  c3                   ret 
// 007f0515  890d8cfa9600         mov dword ptr [0x96fa8c], ecx
// 007f051b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB5@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

// from server: 100% by auto
// roc 2010-06 009c5580  unit: seg_009c0000  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5580
//
// 009c5580  6a44                 push 0x44
// 009c5582  e81924deff           call 0x7a79a0
// 009c5587  33c9                 xor ecx, ecx
// 009c5589  83c404               add esp, 4
// 009c558c  3bc1                 cmp eax, ecx
// 009c558e  7466                 je 0x9c55f6
// 009c5590  ba01000000           mov edx, 1
// 009c5595  884804               mov byte ptr [eax + 4], cl
// 009c5598  89500c               mov dword ptr [eax + 0xc], edx
// 009c559b  894810               mov dword ptr [eax + 0x10], ecx
// 009c559e  89481c               mov dword ptr [eax + 0x1c], ecx
// 009c55a1  895020               mov dword ptr [eax + 0x20], edx
// 009c55a4  ba05000000           mov edx, 5
// 009c55a9  894830               mov dword ptr [eax + 0x30], ecx
// 009c55ac  894834               mov dword ptr [eax + 0x34], ecx
// 009c55af  b910000000           mov ecx, 0x10
// 009c55b4  895024               mov dword ptr [eax + 0x24], edx
// 009c55b7  895028               mov dword ptr [eax + 0x28], edx
// 009c55ba  89502c               mov dword ptr [eax + 0x2c], edx
// 009c55bd  8a15d43bc000         mov dl, byte ptr [0xc03bd4]
// 009c55c3  894838               mov dword ptr [eax + 0x38], ecx
// 009c55c6  89483c               mov dword ptr [eax + 0x3c], ecx
// 009c55c9  8a0dd171b800         mov cl, byte ptr [0xb871d1]
// 009c55cf  c70004000000         mov dword ptr [eax], 4
// 009c55d5  c740080e000000       mov dword ptr [eax + 8], 0xe
// 009c55dc  c7401457800000       mov dword ptr [eax + 0x14], 0x8057
// 009c55e3  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 009c55ea  884840               mov byte ptr [eax + 0x40], cl
// 009c55ed  885041               mov byte ptr [eax + 0x41], dl
// 009c55f0  a34c3cc000           mov dword ptr [0xc03c4c], eax
// 009c55f5  c3                   ret 
// 009c55f6  890d4c3cc000         mov dword ptr [0xc03c4c], ecx
// 009c55fc  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB5A1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

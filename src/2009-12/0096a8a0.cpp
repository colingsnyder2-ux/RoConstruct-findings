// roc 2009-12 0096a8a0  unit: seg_00960000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a8a0
//
// 0096a8a0  6a44                 push 0x44
// 0096a8a2  e8b98fe8ff           call 0x7f3860
// 0096a8a7  33c9                 xor ecx, ecx
// 0096a8a9  83c404               add esp, 4
// 0096a8ac  3bc1                 cmp eax, ecx
// 0096a8ae  7464                 je 0x96a914
// 0096a8b0  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096a8b6  ba10000000           mov edx, 0x10
// 0096a8bb  89501c               mov dword ptr [eax + 0x1c], edx
// 0096a8be  895020               mov dword ptr [eax + 0x20], edx
// 0096a8c1  ba20000000           mov edx, 0x20
// 0096a8c6  884804               mov byte ptr [eax + 4], cl
// 0096a8c9  89480c               mov dword ptr [eax + 0xc], ecx
// 0096a8cc  894810               mov dword ptr [eax + 0x10], ecx
// 0096a8cf  894824               mov dword ptr [eax + 0x24], ecx
// 0096a8d2  894828               mov dword ptr [eax + 0x28], ecx
// 0096a8d5  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096a8d8  894830               mov dword ptr [eax + 0x30], ecx
// 0096a8db  894834               mov dword ptr [eax + 0x34], ecx
// 0096a8de  895038               mov dword ptr [eax + 0x38], edx
// 0096a8e1  89503c               mov dword ptr [eax + 0x3c], edx
// 0096a8e4  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096a8ea  0f94c1               sete cl
// 0096a8ed  c70002000000         mov dword ptr [eax], 2
// 0096a8f3  c740080a000000       mov dword ptr [eax + 8], 0xa
// 0096a8fa  c7401448800000       mov dword ptr [eax + 0x14], 0x8048
// 0096a901  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 0096a908  884840               mov byte ptr [eax + 0x40], cl
// 0096a90b  885041               mov byte ptr [eax + 0x41], dl
// 0096a90e  a38cdbb700           mov dword ptr [0xb7db8c], eax
// 0096a913  c3                   ret 
// 0096a914  890d8cdbb700         mov dword ptr [0xb7db8c], ecx
// 0096a91a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

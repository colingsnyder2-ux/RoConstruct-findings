// roc 2007-08 0076dde0  unit: seg_00760000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076dde0
//
// 0076dde0  6a44                 push 0x44
// 0076dde2  e80f21ecff           call 0x62fef6
// 0076dde7  33c9                 xor ecx, ecx
// 0076dde9  83c404               add esp, 4
// 0076ddec  3bc1                 cmp eax, ecx
// 0076ddee  7464                 je 0x76de54
// 0076ddf0  380da5c18800         cmp byte ptr [0x88c1a5], cl
// 0076ddf6  ba10000000           mov edx, 0x10
// 0076ddfb  89501c               mov dword ptr [eax + 0x1c], edx
// 0076ddfe  895020               mov dword ptr [eax + 0x20], edx
// 0076de01  ba20000000           mov edx, 0x20
// 0076de06  884804               mov byte ptr [eax + 4], cl
// 0076de09  89480c               mov dword ptr [eax + 0xc], ecx
// 0076de0c  894810               mov dword ptr [eax + 0x10], ecx
// 0076de0f  894824               mov dword ptr [eax + 0x24], ecx
// 0076de12  894828               mov dword ptr [eax + 0x28], ecx
// 0076de15  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076de18  894830               mov dword ptr [eax + 0x30], ecx
// 0076de1b  894834               mov dword ptr [eax + 0x34], ecx
// 0076de1e  895038               mov dword ptr [eax + 0x38], edx
// 0076de21  89503c               mov dword ptr [eax + 0x3c], edx
// 0076de24  8a15a4c18800         mov dl, byte ptr [0x88c1a4]
// 0076de2a  0f94c1               sete cl
// 0076de2d  c70002000000         mov dword ptr [eax], 2
// 0076de33  c740080b000000       mov dword ptr [eax + 8], 0xb
// 0076de3a  c740141f880000       mov dword ptr [eax + 0x14], 0x881f
// 0076de41  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 0076de48  884840               mov byte ptr [eax + 0x40], cl
// 0076de4b  885041               mov byte ptr [eax + 0x41], dl
// 0076de4e  a35cdb8b00           mov dword ptr [0x8bdb5c], eax
// 0076de53  c3                   ret 
// 0076de54  890d5cdb8b00         mov dword ptr [0x8bdb5c], ecx
// 0076de5a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

// roc 2007-08 0076dee0  unit: seg_00760000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076dee0
//
// 0076dee0  6a44                 push 0x44
// 0076dee2  e80f20ecff           call 0x62fef6
// 0076dee7  33c9                 xor ecx, ecx
// 0076dee9  83c404               add esp, 4
// 0076deec  3bc1                 cmp eax, ecx
// 0076deee  7465                 je 0x76df55
// 0076def0  884804               mov byte ptr [eax + 4], cl
// 0076def3  894810               mov dword ptr [eax + 0x10], ecx
// 0076def6  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076def9  894820               mov dword ptr [eax + 0x20], ecx
// 0076defc  ba05000000           mov edx, 5
// 0076df01  894830               mov dword ptr [eax + 0x30], ecx
// 0076df04  894834               mov dword ptr [eax + 0x34], ecx
// 0076df07  b910000000           mov ecx, 0x10
// 0076df0c  895024               mov dword ptr [eax + 0x24], edx
// 0076df0f  895028               mov dword ptr [eax + 0x28], edx
// 0076df12  89502c               mov dword ptr [eax + 0x2c], edx
// 0076df15  8a1520db8b00         mov dl, byte ptr [0x8bdb20]
// 0076df1b  894838               mov dword ptr [eax + 0x38], ecx
// 0076df1e  89483c               mov dword ptr [eax + 0x3c], ecx
// 0076df21  8a0da5c18800         mov cl, byte ptr [0x88c1a5]
// 0076df27  c70003000000         mov dword ptr [eax], 3
// 0076df2d  c740080d000000       mov dword ptr [eax + 8], 0xd
// 0076df34  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076df3b  c7401450800000       mov dword ptr [eax + 0x14], 0x8050
// 0076df42  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076df49  884840               mov byte ptr [eax + 0x40], cl
// 0076df4c  885041               mov byte ptr [eax + 0x41], dl
// 0076df4f  a378db8b00           mov dword ptr [0x8bdb78], eax
// 0076df54  c3                   ret 
// 0076df55  890d78db8b00         mov dword ptr [0x8bdb78], ecx
// 0076df5b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB5@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

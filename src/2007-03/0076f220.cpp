// roc 2007-03 0076f220  unit: seg_00760000  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f220
//
// 0076f220  6a44                 push 0x44
// 0076f222  e8e1eeeaff           call 0x61e108
// 0076f227  33c9                 xor ecx, ecx
// 0076f229  83c404               add esp, 4
// 0076f22c  3bc1                 cmp eax, ecx
// 0076f22e  7466                 je 0x76f296
// 0076f230  ba01000000           mov edx, 1
// 0076f235  884804               mov byte ptr [eax + 4], cl
// 0076f238  89500c               mov dword ptr [eax + 0xc], edx
// 0076f23b  894810               mov dword ptr [eax + 0x10], ecx
// 0076f23e  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f241  895020               mov dword ptr [eax + 0x20], edx
// 0076f244  ba05000000           mov edx, 5
// 0076f249  894830               mov dword ptr [eax + 0x30], ecx
// 0076f24c  894834               mov dword ptr [eax + 0x34], ecx
// 0076f24f  b910000000           mov ecx, 0x10
// 0076f254  895024               mov dword ptr [eax + 0x24], edx
// 0076f257  895028               mov dword ptr [eax + 0x28], edx
// 0076f25a  89502c               mov dword ptr [eax + 0x2c], edx
// 0076f25d  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076f263  894838               mov dword ptr [eax + 0x38], ecx
// 0076f266  89483c               mov dword ptr [eax + 0x3c], ecx
// 0076f269  8a0dd5b18800         mov cl, byte ptr [0x88b1d5]
// 0076f26f  c70004000000         mov dword ptr [eax], 4
// 0076f275  c740080e000000       mov dword ptr [eax + 8], 0xe
// 0076f27c  c7401457800000       mov dword ptr [eax + 0x14], 0x8057
// 0076f283  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076f28a  884840               mov byte ptr [eax + 0x40], cl
// 0076f28d  885041               mov byte ptr [eax + 0x41], dl
// 0076f290  a350828b00           mov dword ptr [0x8b8250], eax
// 0076f295  c3                   ret 
// 0076f296  890d50828b00         mov dword ptr [0x8b8250], ecx
// 0076f29c  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB5A1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp

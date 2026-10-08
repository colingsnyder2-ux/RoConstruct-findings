// roc 2007-03 0076fb20  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076fb20
//
// 0076fb20  6a44                 push 0x44
// 0076fb22  e8e1e5eaff           call 0x61e108
// 0076fb27  33c9                 xor ecx, ecx
// 0076fb29  83c404               add esp, 4
// 0076fb2c  3bc1                 cmp eax, ecx
// 0076fb2e  745f                 je 0x76fb8f
// 0076fb30  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076fb36  ba08000000           mov edx, 8
// 0076fb3b  884804               mov byte ptr [eax + 4], cl
// 0076fb3e  89480c               mov dword ptr [eax + 0xc], ecx
// 0076fb41  894810               mov dword ptr [eax + 0x10], ecx
// 0076fb44  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076fb47  894820               mov dword ptr [eax + 0x20], ecx
// 0076fb4a  894824               mov dword ptr [eax + 0x24], ecx
// 0076fb4d  894828               mov dword ptr [eax + 0x28], ecx
// 0076fb50  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076fb53  895030               mov dword ptr [eax + 0x30], edx
// 0076fb56  894834               mov dword ptr [eax + 0x34], ecx
// 0076fb59  895038               mov dword ptr [eax + 0x38], edx
// 0076fb5c  89503c               mov dword ptr [eax + 0x3c], edx
// 0076fb5f  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076fb65  0f94c1               sete cl
// 0076fb68  c70001000000         mov dword ptr [eax], 1
// 0076fb6e  c740082e000000       mov dword ptr [eax + 8], 0x2e
// 0076fb75  c74014488d0000       mov dword ptr [eax + 0x14], 0x8d48
// 0076fb7c  c74018458d0000       mov dword ptr [eax + 0x18], 0x8d45
// 0076fb83  884840               mov byte ptr [eax + 0x40], cl
// 0076fb86  885041               mov byte ptr [eax + 0x41], dl
// 0076fb89  a32c828b00           mov dword ptr [0x8b822c], eax
// 0076fb8e  c3                   ret 
// 0076fb8f  890d2c828b00         mov dword ptr [0x8b822c], ecx
// 0076fb95  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?STENCIL8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp

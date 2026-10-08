// roc 2007-03 0076ef20  unit: seg_00760000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076ef20
//
// 0076ef20  6a44                 push 0x44
// 0076ef22  e8e1f1eaff           call 0x61e108
// 0076ef27  33c9                 xor ecx, ecx
// 0076ef29  83c404               add esp, 4
// 0076ef2c  3bc1                 cmp eax, ecx
// 0076ef2e  7463                 je 0x76ef93
// 0076ef30  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076ef36  ba08000000           mov edx, 8
// 0076ef3b  884804               mov byte ptr [eax + 4], cl
// 0076ef3e  895008               mov dword ptr [eax + 8], edx
// 0076ef41  89480c               mov dword ptr [eax + 0xc], ecx
// 0076ef44  894810               mov dword ptr [eax + 0x10], ecx
// 0076ef47  894824               mov dword ptr [eax + 0x24], ecx
// 0076ef4a  894828               mov dword ptr [eax + 0x28], ecx
// 0076ef4d  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076ef50  894830               mov dword ptr [eax + 0x30], ecx
// 0076ef53  894834               mov dword ptr [eax + 0x34], ecx
// 0076ef56  895038               mov dword ptr [eax + 0x38], edx
// 0076ef59  89503c               mov dword ptr [eax + 0x3c], edx
// 0076ef5c  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076ef62  0f94c1               sete cl
// 0076ef65  c70002000000         mov dword ptr [eax], 2
// 0076ef6b  c7401443800000       mov dword ptr [eax + 0x14], 0x8043
// 0076ef72  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 0076ef79  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 0076ef80  c7402004000000       mov dword ptr [eax + 0x20], 4
// 0076ef87  884840               mov byte ptr [eax + 0x40], cl
// 0076ef8a  885041               mov byte ptr [eax + 0x41], dl
// 0076ef8d  a30c828b00           mov dword ptr [0x8b820c], eax
// 0076ef92  c3                   ret 
// 0076ef93  890d0c828b00         mov dword ptr [0x8b820c], ecx
// 0076ef99  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA4@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp

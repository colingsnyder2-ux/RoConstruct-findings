// roc 2007-03 0076eea0  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076eea0
//
// 0076eea0  6a44                 push 0x44
// 0076eea2  e861f2eaff           call 0x61e108
// 0076eea7  33c9                 xor ecx, ecx
// 0076eea9  83c404               add esp, 4
// 0076eeac  3bc1                 cmp eax, ecx
// 0076eeae  745f                 je 0x76ef0f
// 0076eeb0  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076eeb6  ba20000000           mov edx, 0x20
// 0076eebb  884804               mov byte ptr [eax + 4], cl
// 0076eebe  89480c               mov dword ptr [eax + 0xc], ecx
// 0076eec1  894810               mov dword ptr [eax + 0x10], ecx
// 0076eec4  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076eec7  895020               mov dword ptr [eax + 0x20], edx
// 0076eeca  894824               mov dword ptr [eax + 0x24], ecx
// 0076eecd  894828               mov dword ptr [eax + 0x28], ecx
// 0076eed0  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076eed3  894830               mov dword ptr [eax + 0x30], ecx
// 0076eed6  894834               mov dword ptr [eax + 0x34], ecx
// 0076eed9  895038               mov dword ptr [eax + 0x38], edx
// 0076eedc  89503c               mov dword ptr [eax + 0x3c], edx
// 0076eedf  8a15d4b18800         mov dl, byte ptr [0x88b1d4]
// 0076eee5  0f94c1               sete cl
// 0076eee8  c70001000000         mov dword ptr [eax], 1
// 0076eeee  c7400807000000       mov dword ptr [eax + 8], 7
// 0076eef5  c7401416880000       mov dword ptr [eax + 0x14], 0x8816
// 0076eefc  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 0076ef03  884840               mov byte ptr [eax + 0x40], cl
// 0076ef06  885041               mov byte ptr [eax + 0x41], dl
// 0076ef09  a3f4818b00           mov dword ptr [0x8b81f4], eax
// 0076ef0e  c3                   ret 
// 0076ef0f  890df4818b00         mov dword ptr [0x8b81f4], ecx
// 0076ef15  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?A32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp

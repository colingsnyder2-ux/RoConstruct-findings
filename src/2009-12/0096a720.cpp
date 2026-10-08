// roc 2009-12 0096a720  unit: seg_00960000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a720
//
// 0096a720  6a44                 push 0x44
// 0096a722  e83991e8ff           call 0x7f3860
// 0096a727  33c9                 xor ecx, ecx
// 0096a729  83c404               add esp, 4
// 0096a72c  3bc1                 cmp eax, ecx
// 0096a72e  745f                 je 0x96a78f
// 0096a730  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096a736  ba20000000           mov edx, 0x20
// 0096a73b  884804               mov byte ptr [eax + 4], cl
// 0096a73e  89480c               mov dword ptr [eax + 0xc], ecx
// 0096a741  894810               mov dword ptr [eax + 0x10], ecx
// 0096a744  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096a747  895020               mov dword ptr [eax + 0x20], edx
// 0096a74a  894824               mov dword ptr [eax + 0x24], ecx
// 0096a74d  894828               mov dword ptr [eax + 0x28], ecx
// 0096a750  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096a753  894830               mov dword ptr [eax + 0x30], ecx
// 0096a756  894834               mov dword ptr [eax + 0x34], ecx
// 0096a759  895038               mov dword ptr [eax + 0x38], edx
// 0096a75c  89503c               mov dword ptr [eax + 0x3c], edx
// 0096a75f  8a154824b100         mov dl, byte ptr [0xb12448]
// 0096a765  0f94c1               sete cl
// 0096a768  c70001000000         mov dword ptr [eax], 1
// 0096a76e  c7400807000000       mov dword ptr [eax + 8], 7
// 0096a775  c7401416880000       mov dword ptr [eax + 0x14], 0x8816
// 0096a77c  c7401806190000       mov dword ptr [eax + 0x18], 0x1906
// 0096a783  884840               mov byte ptr [eax + 0x40], cl
// 0096a786  885041               mov byte ptr [eax + 0x41], dl
// 0096a789  a360dbb700           mov dword ptr [0xb7db60], eax
// 0096a78e  c3                   ret 
// 0096a78f  890d60dbb700         mov dword ptr [0xb7db60], ecx
// 0096a795  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?A32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

// roc 2009-06 008868c0  unit: seg_00880000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008868c0
//
// 008868c0  6a44                 push 0x44
// 008868c2  e87121e9ff           call 0x718a38
// 008868c7  33c9                 xor ecx, ecx
// 008868c9  83c404               add esp, 4
// 008868cc  3bc1                 cmp eax, ecx
// 008868ce  745f                 je 0x88692f
// 008868d0  ba20000000           mov edx, 0x20
// 008868d5  884804               mov byte ptr [eax + 4], cl
// 008868d8  894810               mov dword ptr [eax + 0x10], ecx
// 008868db  89481c               mov dword ptr [eax + 0x1c], ecx
// 008868de  895020               mov dword ptr [eax + 0x20], edx
// 008868e1  895024               mov dword ptr [eax + 0x24], edx
// 008868e4  895028               mov dword ptr [eax + 0x28], edx
// 008868e7  89502c               mov dword ptr [eax + 0x2c], edx
// 008868ea  894830               mov dword ptr [eax + 0x30], ecx
// 008868ed  894834               mov dword ptr [eax + 0x34], ecx
// 008868f0  884840               mov byte ptr [eax + 0x40], cl
// 008868f3  8a0d58c29e00         mov cl, byte ptr [0x9ec258]
// 008868f9  ba80000000           mov edx, 0x80
// 008868fe  c70004000000         mov dword ptr [eax], 4
// 00886904  c7400818000000       mov dword ptr [eax + 8], 0x18
// 0088690b  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 00886912  c7401414880000       mov dword ptr [eax + 0x14], 0x8814
// 00886919  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 00886920  895038               mov dword ptr [eax + 0x38], edx
// 00886923  89503c               mov dword ptr [eax + 0x3c], edx
// 00886926  884841               mov byte ptr [eax + 0x41], cl
// 00886929  a3bcd3a300           mov dword ptr [0xa3d3bc], eax
// 0088692e  c3                   ret 
// 0088692f  890dbcd3a300         mov dword ptr [0xa3d3bc], ecx
// 00886935  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

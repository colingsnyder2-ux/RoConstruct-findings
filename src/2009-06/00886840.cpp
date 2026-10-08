// from server: 100% by auto
// roc 2009-06 00886840  unit: seg_00880000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886840
//
// 00886840  6a44                 push 0x44
// 00886842  e8f121e9ff           call 0x718a38
// 00886847  33c9                 xor ecx, ecx
// 00886849  83c404               add esp, 4
// 0088684c  3bc1                 cmp eax, ecx
// 0088684e  745f                 je 0x8868af
// 00886850  ba10000000           mov edx, 0x10
// 00886855  884804               mov byte ptr [eax + 4], cl
// 00886858  894810               mov dword ptr [eax + 0x10], ecx
// 0088685b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0088685e  895020               mov dword ptr [eax + 0x20], edx
// 00886861  895024               mov dword ptr [eax + 0x24], edx
// 00886864  895028               mov dword ptr [eax + 0x28], edx
// 00886867  89502c               mov dword ptr [eax + 0x2c], edx
// 0088686a  894830               mov dword ptr [eax + 0x30], ecx
// 0088686d  894834               mov dword ptr [eax + 0x34], ecx
// 00886870  884840               mov byte ptr [eax + 0x40], cl
// 00886873  8a0d58c29e00         mov cl, byte ptr [0x9ec258]
// 00886879  ba40000000           mov edx, 0x40
// 0088687e  c70004000000         mov dword ptr [eax], 4
// 00886884  c7400811000000       mov dword ptr [eax + 8], 0x11
// 0088688b  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 00886892  c740141a880000       mov dword ptr [eax + 0x14], 0x881a
// 00886899  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 008868a0  895038               mov dword ptr [eax + 0x38], edx
// 008868a3  89503c               mov dword ptr [eax + 0x3c], edx
// 008868a6  884841               mov byte ptr [eax + 0x41], cl
// 008868a9  a3a0d3a300           mov dword ptr [0xa3d3a0], eax
// 008868ae  c3                   ret 
// 008868af  890da0d3a300         mov dword ptr [0xa3d3a0], ecx
// 008868b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

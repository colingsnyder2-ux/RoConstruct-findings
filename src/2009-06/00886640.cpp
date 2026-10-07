// roc 2009-06 00886640  unit: seg_00880000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886640
//
// 00886640  6a44                 push 0x44
// 00886642  e8f123e9ff           call 0x718a38
// 00886647  33c9                 xor ecx, ecx
// 00886649  83c404               add esp, 4
// 0088664c  3bc1                 cmp eax, ecx
// 0088664e  7465                 je 0x8866b5
// 00886650  884804               mov byte ptr [eax + 4], cl
// 00886653  894810               mov dword ptr [eax + 0x10], ecx
// 00886656  89481c               mov dword ptr [eax + 0x1c], ecx
// 00886659  894820               mov dword ptr [eax + 0x20], ecx
// 0088665c  ba10000000           mov edx, 0x10
// 00886661  894830               mov dword ptr [eax + 0x30], ecx
// 00886664  894834               mov dword ptr [eax + 0x34], ecx
// 00886667  b930000000           mov ecx, 0x30
// 0088666c  895024               mov dword ptr [eax + 0x24], edx
// 0088666f  895028               mov dword ptr [eax + 0x28], edx
// 00886672  89502c               mov dword ptr [eax + 0x2c], edx
// 00886675  8a1558c29e00         mov dl, byte ptr [0x9ec258]
// 0088667b  894838               mov dword ptr [eax + 0x38], ecx
// 0088667e  89483c               mov dword ptr [eax + 0x3c], ecx
// 00886681  8a0d59c29e00         mov cl, byte ptr [0x9ec259]
// 00886687  c70003000000         mov dword ptr [eax], 3
// 0088668d  c7400811000000       mov dword ptr [eax + 8], 0x11
// 00886694  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0088669b  c740141b880000       mov dword ptr [eax + 0x14], 0x881b
// 008866a2  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 008866a9  884840               mov byte ptr [eax + 0x40], cl
// 008866ac  885041               mov byte ptr [eax + 0x41], dl
// 008866af  a3c4d3a300           mov dword ptr [0xa3d3c4], eax
// 008866b4  c3                   ret 
// 008866b5  890dc4d3a300         mov dword ptr [0xa3d3c4], ecx
// 008866bb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

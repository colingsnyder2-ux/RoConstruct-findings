// roc 2009-06 004ad620  unit: G3D::Win32Window  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ad620
//
// 004ad620  8b442404             mov eax, dword ptr [esp + 4]
// 004ad624  85c0                 test eax, eax
// 004ad626  750d                 jne 0x4ad635
// 004ad628  68560d0000           push 0xd56
// 004ad62d  e89e020000           call 0x4ad8d0
// 004ad632  83c404               add esp, 4
// 004ad635  83f810               cmp eax, 0x10
// 004ad638  7411                 je 0x4ad64b
// 004ad63a  83f818               cmp eax, 0x18
// 004ad63d  7406                 je 0x4ad645
// 004ad63f  a124d4a300           mov eax, dword ptr [0xa3d424]
// 004ad644  c3                   ret 
// 004ad645  a1ccd3a300           mov eax, dword ptr [0xa3d3cc]
// 004ad64a  c3                   ret 
// 004ad64b  a1e0d3a300           mov eax, dword ptr [0xa3d3e0]
// 004ad650  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ?depth@TextureFormat@G3D@@SAPBV12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

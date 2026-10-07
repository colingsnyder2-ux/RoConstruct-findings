// roc 2010-06 0048eff0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048eff0
//
// 0048eff0  8b442404             mov eax, dword ptr [esp + 4]
// 0048eff4  85c0                 test eax, eax
// 0048eff6  750d                 jne 0x48f005
// 0048eff8  68560d0000           push 0xd56
// 0048effd  e89e020000           call 0x48f2a0
// 0048f002  83c404               add esp, 4
// 0048f005  83f810               cmp eax, 0x10
// 0048f008  7411                 je 0x48f01b
// 0048f00a  83f818               cmp eax, 0x18
// 0048f00d  7406                 je 0x48f015
// 0048f00f  a1643cc000           mov eax, dword ptr [0xc03c64]
// 0048f014  c3                   ret 
// 0048f015  a10c3cc000           mov eax, dword ptr [0xc03c0c]
// 0048f01a  c3                   ret 
// 0048f01b  a1203cc000           mov eax, dword ptr [0xc03c20]
// 0048f020  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ?depth@TextureFormat@G3D@@SAPBV12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

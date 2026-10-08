// from server: 100% by auto
// roc 2007-08 004804e0  unit: G3D::Win32Window  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004804e0
//
// 004804e0  8b442404             mov eax, dword ptr [esp + 4]
// 004804e4  85c0                 test eax, eax
// 004804e6  750d                 jne 0x4804f5
// 004804e8  68560d0000           push 0xd56
// 004804ed  e89effffff           call 0x480490
// 004804f2  83c404               add esp, 4
// 004804f5  83f810               cmp eax, 0x10
// 004804f8  7411                 je 0x48050b
// 004804fa  83f818               cmp eax, 0x18
// 004804fd  7406                 je 0x480505
// 004804ff  a1b0db8b00           mov eax, dword ptr [0x8bdbb0]
// 00480504  c3                   ret 
// 00480505  a158db8b00           mov eax, dword ptr [0x8bdb58]
// 0048050a  c3                   ret 
// 0048050b  a16cdb8b00           mov eax, dword ptr [0x8bdb6c]
// 00480510  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ?depth@TextureFormat@G3D@@SAPBV12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

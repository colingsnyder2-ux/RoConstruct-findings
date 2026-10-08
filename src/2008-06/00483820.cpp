// from server: 100% by auto
// roc 2008-06 00483820  unit: G3D::Win32Window  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00483820
//
// 00483820  8b442404             mov eax, dword ptr [esp + 4]
// 00483824  85c0                 test eax, eax
// 00483826  750d                 jne 0x483835
// 00483828  68560d0000           push 0xd56
// 0048382d  e8aeffffff           call 0x4837e0
// 00483832  83c404               add esp, 4
// 00483835  83f810               cmp eax, 0x10
// 00483838  7411                 je 0x48384b
// 0048383a  83f818               cmp eax, 0x18
// 0048383d  7406                 je 0x483845
// 0048383f  a1c4fa9600           mov eax, dword ptr [0x96fac4]
// 00483844  c3                   ret 
// 00483845  a16cfa9600           mov eax, dword ptr [0x96fa6c]
// 0048384a  c3                   ret 
// 0048384b  a180fa9600           mov eax, dword ptr [0x96fa80]
// 00483850  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ?depth@TextureFormat@G3D@@SAPBV12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp

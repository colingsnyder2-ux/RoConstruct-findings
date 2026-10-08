// roc 2007-03 0047e990  unit: seg_00470000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e990
//
// 0047e990  8b442404             mov eax, dword ptr [esp + 4]
// 0047e994  85c0                 test eax, eax
// 0047e996  750d                 jne 0x47e9a5
// 0047e998  68560d0000           push 0xd56
// 0047e99d  e89effffff           call 0x47e940
// 0047e9a2  83c404               add esp, 4
// 0047e9a5  83f810               cmp eax, 0x10
// 0047e9a8  7411                 je 0x47e9bb
// 0047e9aa  83f818               cmp eax, 0x18
// 0047e9ad  7406                 je 0x47e9b5
// 0047e9af  a168828b00           mov eax, dword ptr [0x8b8268]
// 0047e9b4  c3                   ret 
// 0047e9b5  a110828b00           mov eax, dword ptr [0x8b8210]
// 0047e9ba  c3                   ret 
// 0047e9bb  a124828b00           mov eax, dword ptr [0x8b8224]
// 0047e9c0  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ?depth@TextureFormat@G3D@@SAPBV12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp

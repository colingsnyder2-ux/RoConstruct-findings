// roc 2009-06 00841d80  unit: Ogre::RbxSceneNode  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00841d80
//
// 00841d80  6a01                 push 1
// 00841d82  ff15e0d2a300         call dword ptr [0xa3d2e0]
// 00841d88  50                   push eax
// 00841d89  a34889a500           mov dword ptr [0xa58948], eax
// 00841d8e  ff15e8d2a300         call dword ptr [0xa3d2e8]
// 00841d94  ff15ecd2a300         call dword ptr [0xa3d2ec]
// 00841d9a  6876890000           push 0x8976
// 00841d9f  68c0840000           push 0x84c0
// 00841da4  6821890000           push 0x8921
// 00841da9  ff15f8d2a300         call dword ptr [0xa3d2f8]
// 00841daf  6a00                 push 0
// 00841db1  6805190000           push 0x1905
// 00841db6  6821890000           push 0x8921
// 00841dbb  6a00                 push 0
// 00841dbd  6a01                 push 1
// 00841dbf  6824890000           push 0x8924
// 00841dc4  6861890000           push 0x8961
// 00841dc9  ff1500d3a300         call dword ptr [0xa3d300]
// 00841dcf  6876890000           push 0x8976
// 00841dd4  6821890000           push 0x8921
// 00841dd9  6822890000           push 0x8922
// 00841dde  ff15f8d2a300         call dword ptr [0xa3d2f8]
// 00841de4  6876890000           push 0x8976
// 00841de9  6824890000           push 0x8924
// 00841dee  6823890000           push 0x8923
// 00841df3  ff15f8d2a300         call dword ptr [0xa3d2f8]
// 00841df9  6a00                 push 0
// 00841dfb  6a00                 push 0
// 00841dfd  6823890000           push 0x8923
// 00841e02  6a00                 push 0
// 00841e04  6a00                 push 0
// 00841e06  6822890000           push 0x8922
// 00841e0b  6a00                 push 0
// 00841e0d  6a00                 push 0
// 00841e0f  6821890000           push 0x8921
// 00841e14  6863890000           push 0x8963
// 00841e19  ff1504d3a300         call dword ptr [0xa3d304]
// 00841e1f  ff25f0d2a300         jmp dword ptr [0xa3d2f0]
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?makeShadersPS14ATI@ToneMap@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp

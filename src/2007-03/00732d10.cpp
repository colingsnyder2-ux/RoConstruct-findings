// roc 2007-03 00732d10  unit: seg_00730000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00732d10
//
// 00732d10  6a01                 push 1
// 00732d12  ff1524818b00         call dword ptr [0x8b8124]
// 00732d18  50                   push eax
// 00732d19  a3c0298c00           mov dword ptr [0x8c29c0], eax
// 00732d1e  ff152c818b00         call dword ptr [0x8b812c]
// 00732d24  ff1530818b00         call dword ptr [0x8b8130]
// 00732d2a  6876890000           push 0x8976
// 00732d2f  68c0840000           push 0x84c0
// 00732d34  6821890000           push 0x8921
// 00732d39  ff153c818b00         call dword ptr [0x8b813c]
// 00732d3f  6a00                 push 0
// 00732d41  6805190000           push 0x1905
// 00732d46  6821890000           push 0x8921
// 00732d4b  6a00                 push 0
// 00732d4d  6a01                 push 1
// 00732d4f  6824890000           push 0x8924
// 00732d54  6861890000           push 0x8961
// 00732d59  ff1544818b00         call dword ptr [0x8b8144]
// 00732d5f  6876890000           push 0x8976
// 00732d64  6821890000           push 0x8921
// 00732d69  6822890000           push 0x8922
// 00732d6e  ff153c818b00         call dword ptr [0x8b813c]
// 00732d74  6876890000           push 0x8976
// 00732d79  6824890000           push 0x8924
// 00732d7e  6823890000           push 0x8923
// 00732d83  ff153c818b00         call dword ptr [0x8b813c]
// 00732d89  6a00                 push 0
// 00732d8b  6a00                 push 0
// 00732d8d  6823890000           push 0x8923
// 00732d92  6a00                 push 0
// 00732d94  6a00                 push 0
// 00732d96  6822890000           push 0x8922
// 00732d9b  6a00                 push 0
// 00732d9d  6a00                 push 0
// 00732d9f  6821890000           push 0x8921
// 00732da4  6863890000           push 0x8963
// 00732da9  ff1548818b00         call dword ptr [0x8b8148]
// 00732daf  ff2534818b00         jmp dword ptr [0x8b8134]
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?makeShadersPS14ATI@ToneMap@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp

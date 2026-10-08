// roc 2008-06 007b14d0  unit: RBX::RenderNew::TextureProxy  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b14d0
//
// 007b14d0  6a01                 push 1
// 007b14d2  ff1580f99600         call dword ptr [0x96f980]
// 007b14d8  50                   push eax
// 007b14d9  a3d8f39700           mov dword ptr [0x97f3d8], eax
// 007b14de  ff1588f99600         call dword ptr [0x96f988]
// 007b14e4  ff158cf99600         call dword ptr [0x96f98c]
// 007b14ea  6876890000           push 0x8976
// 007b14ef  68c0840000           push 0x84c0
// 007b14f4  6821890000           push 0x8921
// 007b14f9  ff1598f99600         call dword ptr [0x96f998]
// 007b14ff  6a00                 push 0
// 007b1501  6805190000           push 0x1905
// 007b1506  6821890000           push 0x8921
// 007b150b  6a00                 push 0
// 007b150d  6a01                 push 1
// 007b150f  6824890000           push 0x8924
// 007b1514  6861890000           push 0x8961
// 007b1519  ff15a0f99600         call dword ptr [0x96f9a0]
// 007b151f  6876890000           push 0x8976
// 007b1524  6821890000           push 0x8921
// 007b1529  6822890000           push 0x8922
// 007b152e  ff1598f99600         call dword ptr [0x96f998]
// 007b1534  6876890000           push 0x8976
// 007b1539  6824890000           push 0x8924
// 007b153e  6823890000           push 0x8923
// 007b1543  ff1598f99600         call dword ptr [0x96f998]
// 007b1549  6a00                 push 0
// 007b154b  6a00                 push 0
// 007b154d  6823890000           push 0x8923
// 007b1552  6a00                 push 0
// 007b1554  6a00                 push 0
// 007b1556  6822890000           push 0x8922
// 007b155b  6a00                 push 0
// 007b155d  6a00                 push 0
// 007b155f  6821890000           push 0x8921
// 007b1564  6863890000           push 0x8963
// 007b1569  ff15a4f99600         call dword ptr [0x96f9a4]
// 007b156f  ff2590f99600         jmp dword ptr [0x96f990]
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?makeShadersPS14ATI@ToneMap@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp

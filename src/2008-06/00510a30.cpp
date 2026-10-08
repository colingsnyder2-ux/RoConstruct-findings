// from server: 100% by auto
// roc 2008-06 00510a30  unit: G3D::Ray  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00510a30
//
// 00510a30  d9ee                 fldz 
// 00510a32  8bc1                 mov eax, ecx
// 00510a34  b901000000           mov ecx, 1
// 00510a39  c700c4828200         mov dword ptr [eax], 0x8282c4
// 00510a3f  840d50f09600         test byte ptr [0x96f050], cl
// 00510a45  7518                 jne 0x510a5f
// 00510a47  090d50f09600         or dword ptr [0x96f050], ecx
// 00510a4d  d91544f09600         fst dword ptr [0x96f044]
// 00510a53  d91548f09600         fst dword ptr [0x96f048]
// 00510a59  d9154cf09600         fst dword ptr [0x96f04c]
// 00510a5f  d90544f09600         fld dword ptr [0x96f044]
// 00510a65  d95804               fstp dword ptr [eax + 4]
// 00510a68  d90548f09600         fld dword ptr [0x96f048]
// 00510a6e  d95808               fstp dword ptr [eax + 8]
// 00510a71  d9054cf09600         fld dword ptr [0x96f04c]
// 00510a77  d9580c               fstp dword ptr [eax + 0xc]
// 00510a7a  840d50f09600         test byte ptr [0x96f050], cl
// 00510a80  751a                 jne 0x510a9c
// 00510a82  090d50f09600         or dword ptr [0x96f050], ecx
// 00510a88  d91544f09600         fst dword ptr [0x96f044]
// 00510a8e  d91548f09600         fst dword ptr [0x96f048]
// 00510a94  d91d4cf09600         fstp dword ptr [0x96f04c]
// 00510a9a  eb02                 jmp 0x510a9e
// 00510a9c  ddd8                 fstp st(0)
// 00510a9e  d90544f09600         fld dword ptr [0x96f044]
// 00510aa4  d95810               fstp dword ptr [eax + 0x10]
// 00510aa7  d90548f09600         fld dword ptr [0x96f048]
// 00510aad  d95814               fstp dword ptr [eax + 0x14]
// 00510ab0  d9054cf09600         fld dword ptr [0x96f04c]
// 00510ab6  d95818               fstp dword ptr [eax + 0x18]
// 00510ab9  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??0Ray@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp

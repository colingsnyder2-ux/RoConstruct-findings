// roc 2007-03 0046f640  unit: seg_00460000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046f640
//
// 0046f640  d905084c7900         fld dword ptr [0x794c08]
// 0046f646  8bc1                 mov eax, ecx
// 0046f648  b901000000           mov ecx, 1
// 0046f64d  d9580c               fstp dword ptr [eax + 0xc]
// 0046f650  c70003000000         mov dword ptr [eax], 3
// 0046f656  894804               mov dword ptr [eax + 4], ecx
// 0046f659  c7400800000000       mov dword ptr [eax + 8], 0
// 0046f660  884810               mov byte ptr [eax + 0x10], cl
// 0046f663  c74014e8030000       mov dword ptr [eax + 0x14], 0x3e8
// 0046f66a  c7401818fcffff       mov dword ptr [eax + 0x18], 0xfffffc18
// 0046f671  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Texture.cpp (function ??0Settings@Texture@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Texture.cpp

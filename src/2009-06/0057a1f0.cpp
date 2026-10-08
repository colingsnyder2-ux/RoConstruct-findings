// from server: 100% by auto
// roc 2009-06 0057a1f0  unit: G3D::LineSegment  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a1f0
//
// 0057a1f0  8b442404             mov eax, dword ptr [esp + 4]
// 0057a1f4  50                   push eax
// 0057a1f5  688cba8c00           push 0x8cba8c
// 0057a1fa  51                   push ecx
// 0057a1fb  e850ffffff           call 0x57a150
// 0057a200  83c40c               add esp, 0xc
// 0057a203  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeNumber@TextOutput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp

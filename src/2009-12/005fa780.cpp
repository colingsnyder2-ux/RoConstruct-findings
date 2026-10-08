// roc 2009-12 005fa780  unit: G3D::LineSegment  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fa780
//
// 005fa780  8b442404             mov eax, dword ptr [esp + 4]
// 005fa784  50                   push eax
// 005fa785  68fc289c00           push 0x9c28fc
// 005fa78a  51                   push ecx
// 005fa78b  e850ffffff           call 0x5fa6e0
// 005fa790  83c40c               add esp, 0xc
// 005fa793  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeNumber@TextOutput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp

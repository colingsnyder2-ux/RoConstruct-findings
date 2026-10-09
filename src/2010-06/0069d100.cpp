// roc 2010-06 0069d100  unit: RBX::PART::VWedge::?$FactoryProduct  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069d100
//
// 0069d100  8bc1                 mov eax, ecx
// 0069d102  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0069d106  83f905               cmp ecx, 5
// 0069d109  7722                 ja 0x69d12d
// 0069d10b  ff248d30d16900       jmp dword ptr [ecx*4 + 0x69d130]
// 0069d112  83c008               add eax, 8
// 0069d115  c20400               ret 4
// 0069d118  83c028               add eax, 0x28
// 0069d11b  c20400               ret 4
// 0069d11e  83c020               add eax, 0x20
// 0069d121  c20400               ret 4
// 0069d124  83c018               add eax, 0x18
// 0069d127  c20400               ret 4
// 0069d12a  83c010               add eax, 0x10
// 0069d12d  c20400               ret 4
// 0069d130  24d1                 and al, 0xd1
// 0069d132  69002dd16900         imul eax, dword ptr [eax], 0x69d12d
// 0069d138  18d1                 sbb cl, dl
// 0069d13a  69002ad16900         imul eax, dword ptr [eax], 0x69d12a
// 0069d140  12d1                 adc dl, cl
// 0069d142  69001ed16900         imul eax, dword ptr [eax], 0x69d11e
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??ASurfaces@RBX@@QBEABVSurface@1@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

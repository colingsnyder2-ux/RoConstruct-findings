// roc 2011-06 0071edc0  unit: RBX::AdvLuaDragger  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071edc0
//
// 0071edc0  8bc1                 mov eax, ecx
// 0071edc2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0071edc6  83f905               cmp ecx, 5
// 0071edc9  7722                 ja 0x71eded
// 0071edcb  ff248df0ed7100       jmp dword ptr [ecx*4 + 0x71edf0]
// 0071edd2  83c008               add eax, 8
// 0071edd5  c20400               ret 4
// 0071edd8  83c028               add eax, 0x28
// 0071eddb  c20400               ret 4
// 0071edde  83c020               add eax, 0x20
// 0071ede1  c20400               ret 4
// 0071ede4  83c018               add eax, 0x18
// 0071ede7  c20400               ret 4
// 0071edea  83c010               add eax, 0x10
// 0071eded  c20400               ret 4
// 0071edf0  e4ed                 in al, 0xed
// 0071edf2  7100                 jno 0x71edf4
// 0071edf4  ed                   in eax, dx
// 0071edf5  ed                   in eax, dx
// 0071edf6  7100                 jno 0x71edf8
// 0071edf8  d8ed                 fsubr st(5)
// 0071edfa  7100                 jno 0x71edfc
// 0071edfc  eaed7100d2ed71       ljmp 0x71ed:0xd20071ed
// 0071ee03  00de                 add dh, bl
// 0071ee05  ed                   in eax, dx
// 0071ee06  7100                 jno 0x71ee08
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??ASurfaces@RBX@@QBEABVSurface@1@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

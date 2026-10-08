// roc 2009-12 0052eb50  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052eb50
//
// 0052eb50  c70100000000         mov dword ptr [ecx], 0
// 0052eb56  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ??1ReferenceCountedObject@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp

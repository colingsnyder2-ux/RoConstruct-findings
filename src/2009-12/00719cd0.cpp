// roc 2009-12 00719cd0  unit: RBX::VPhysicsService::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00719cd0
//
// 00719cd0  8d81cc000000         lea eax, [ecx + 0xcc]
// 00719cd6  c3                   ret 
// library wildmagic-2-core/Geometry\WmlConvexPolyhedron3.cpp (function ?GetCentroid@?$ConvexPolyhedron3@M@Wml@@QBEABV?$Vector3@M@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MT
// roc-lib: wildmagic-2-core Geometry/WmlConvexPolyhedron3.cpp

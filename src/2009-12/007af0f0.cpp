// roc 2009-12 007af0f0  unit: RBX::Block  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007af0f0
//
// 007af0f0  d9410c               fld dword ptr [ecx + 0xc]
// 007af0f3  d84908               fmul dword ptr [ecx + 8]
// 007af0f6  d84904               fmul dword ptr [ecx + 4]
// 007af0f9  c3                   ret 
// copied from an identical function in another client (function ?f@S@@QAENXZ)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD
struct S{char pad[0x4];float f2;float f1;float f0; double f();};
double S::f(){return f0*f1*f2;}
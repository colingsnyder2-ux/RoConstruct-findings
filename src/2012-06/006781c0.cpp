// from server: 100% by auto
// roc 2012-06 006781c0  unit: RBX::XVGfxBinding::XV?$mf2::V?$bind_t::?$callable_slot  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006781c0
//
// 006781c0  dd051024e000         fld qword ptr [0xe02410]
// 006781c6  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?infinity@?$numeric_limits@N@std@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp

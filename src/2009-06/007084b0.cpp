// roc 2009-06 007084b0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007084b0
//
// 007084b0  8b442404             mov eax, dword ptr [esp + 4]
// 007084b4  a3e404a500           mov dword ptr [0xa504e4], eax
// 007084b9  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?setAssertionHook@G3D@@YAXP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp

// from server: 100% by auto
// roc 2012-06 0081c4d0  unit: RBX::Reflection::UTuple::$$A6A?AV?$shared_ptr::V?$function::?$sp_counted_impl_p  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0081c4d0
//
// 0081c4d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0081c4d4  e94786fcff           jmp 0x7e4b20
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?hashCode@@YAIABVSettings@Texture@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

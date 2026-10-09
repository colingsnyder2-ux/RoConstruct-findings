// roc 2010-06 0069cff0  unit: RBX::PART::VWedge::?$FactoryProduct  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069cff0
//
// 0069cff0  8b442404             mov eax, dword ptr [esp + 4]
// 0069cff4  83f805               cmp eax, 5
// 0069cff7  772f                 ja 0x69d028
// 0069cff9  ff248530d06900       jmp dword ptr [eax*4 + 0x69d030]
// 0069d000  b8c4ecc100           mov eax, 0xc1ecc4
// 0069d005  c20400               ret 4
// 0069d008  b854ebc100           mov eax, 0xc1eb54
// 0069d00d  c20400               ret 4
// 0069d010  b878ebc100           mov eax, 0xc1eb78
// 0069d015  c20400               ret 4
// 0069d018  b808edc100           mov eax, 0xc1ed08
// 0069d01d  c20400               ret 4
// 0069d020  b8e0ebc100           mov eax, 0xc1ebe0
// 0069d025  c20400               ret 4
// 0069d028  b8d0eac100           mov eax, 0xc1ead0
// 0069d02d  c20400               ret 4
// 0069d030  18d0                 sbb al, dl
// 0069d032  690028d06900         imul eax, dword ptr [eax], 0x69d028
// 0069d038  08d0                 or al, dl
// 0069d03a  690020d06900         imul eax, dword ptr [eax], 0x69d020
// 0069d040  00d0                 add al, dl
// 0069d042  690010d06900         imul eax, dword ptr [eax], 0x69d010
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getSurfaceType@Surfaces@RBX@@QBEABVPropertyDescriptor@Reflection@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

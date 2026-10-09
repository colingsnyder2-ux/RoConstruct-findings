// roc 2010-06 0069cef0  unit: RBX::PART::VWedge::?$FactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069cef0
//
// 0069cef0  8b442404             mov eax, dword ptr [esp + 4]
// 0069cef4  3da0ecc100           cmp eax, 0xc1eca0
// 0069cef9  7503                 jne 0x69cefe
// 0069cefb  b001                 mov al, 1
// 0069cefd  c3                   ret 
// 0069cefe  3d14ebc100           cmp eax, 0xc1eb14
// 0069cf03  74f6                 je 0x69cefb
// 0069cf05  3d98ebc100           cmp eax, 0xc1eb98
// 0069cf0a  74ef                 je 0x69cefb
// 0069cf0c  3d68edc100           cmp eax, 0xc1ed68
// 0069cf11  74e8                 je 0x69cefb
// 0069cf13  3df0eac100           cmp eax, 0xc1eaf0
// 0069cf18  74e1                 je 0x69cefb
// 0069cf1a  3d30eac100           cmp eax, 0xc1ea30
// 0069cf1f  0f94c0               sete al
// 0069cf22  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isSurfaceDescriptor@Surfaces@RBX@@SA?B_NABVPropertyDescriptor@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

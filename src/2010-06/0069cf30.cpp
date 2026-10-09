// roc 2010-06 0069cf30  unit: RBX::PART::VWedge::?$FactoryProduct  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069cf30
//
// 0069cf30  8b442404             mov eax, dword ptr [esp + 4]
// 0069cf34  83f805               cmp eax, 5
// 0069cf37  772f                 ja 0x69cf68
// 0069cf39  ff248570cf6900       jmp dword ptr [eax*4 + 0x69cf70]
// 0069cf40  b814ebc100           mov eax, 0xc1eb14
// 0069cf45  c20400               ret 4
// 0069cf48  b830eac100           mov eax, 0xc1ea30
// 0069cf4d  c20400               ret 4
// 0069cf50  b8f0eac100           mov eax, 0xc1eaf0
// 0069cf55  c20400               ret 4
// 0069cf58  b868edc100           mov eax, 0xc1ed68
// 0069cf5d  c20400               ret 4
// 0069cf60  b898ebc100           mov eax, 0xc1eb98
// 0069cf65  c20400               ret 4
// 0069cf68  b8a0ecc100           mov eax, 0xc1eca0
// 0069cf6d  c20400               ret 4
// 0069cf70  58                   pop eax
// 0069cf71  cf                   iretd 
// 0069cf72  690068cf6900         imul eax, dword ptr [eax], 0x69cf68
// 0069cf78  48                   dec eax
// 0069cf79  cf                   iretd 
// 0069cf7a  690060cf6900         imul eax, dword ptr [eax], 0x69cf60
// 0069cf80  40                   inc eax
// 0069cf81  cf                   iretd 
// 0069cf82  690050cf6900         imul eax, dword ptr [eax], 0x69cf50
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getSurfaceType@Surfaces@RBX@@QBEABVPropertyDescriptor@Reflection@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

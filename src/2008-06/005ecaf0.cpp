// roc 2008-06 005ecaf0  unit: RBX::Sky  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ecaf0
//
// 005ecaf0  8b442404             mov eax, dword ptr [esp + 4]
// 005ecaf4  83f805               cmp eax, 5
// 005ecaf7  772f                 ja 0x5ecb28
// 005ecaf9  ff248530cb5e00       jmp dword ptr [eax*4 + 0x5ecb30]
// 005ecb00  b868b39700           mov eax, 0x97b368
// 005ecb05  c20400               ret 4
// 005ecb08  b828b29700           mov eax, 0x97b228
// 005ecb0d  c20400               ret 4
// 005ecb10  b844b29700           mov eax, 0x97b244
// 005ecb15  c20400               ret 4
// 005ecb18  b8a4b39700           mov eax, 0x97b3a4
// 005ecb1d  c20400               ret 4
// 005ecb20  b8a0b29700           mov eax, 0x97b2a0
// 005ecb25  c20400               ret 4
// 005ecb28  b8b4b19700           mov eax, 0x97b1b4
// 005ecb2d  c20400               ret 4
// 005ecb30  18cb                 sbb bl, cl
// 005ecb32  5e                   pop esi
// 005ecb33  0028                 add byte ptr [eax], ch
// 005ecb35  cb                   retf 
// 005ecb36  5e                   pop esi
// 005ecb37  0008                 add byte ptr [eax], cl
// 005ecb39  cb                   retf 
// 005ecb3a  5e                   pop esi
// 005ecb3b  0020                 add byte ptr [eax], ah
// 005ecb3d  cb                   retf 
// 005ecb3e  5e                   pop esi
// 005ecb3f  0000                 add byte ptr [eax], al
// 005ecb41  cb                   retf 
// 005ecb42  5e                   pop esi
// 005ecb43  0010                 add byte ptr [eax], dl
// 005ecb45  cb                   retf 
// 005ecb46  5e                   pop esi
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getSurfaceType@Surfaces@RBX@@QBEABVPropertyDescriptor@Reflection@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

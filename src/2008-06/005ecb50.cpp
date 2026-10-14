// roc 2008-06 005ecb50  unit: RBX::Sky  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ecb50
//
// 005ecb50  8b442404             mov eax, dword ptr [esp + 4]
// 005ecb54  83f805               cmp eax, 5
// 005ecb57  772f                 ja 0x5ecb88
// 005ecb59  ff248590cb5e00       jmp dword ptr [eax*4 + 0x5ecb90]
// 005ecb60  b814b49700           mov eax, 0x97b414
// 005ecb65  c20400               ret 4
// 005ecb68  b8c0b39700           mov eax, 0x97b3c0
// 005ecb6d  c20400               ret 4
// 005ecb70  b8f0b29700           mov eax, 0x97b2f0
// 005ecb75  c20400               ret 4
// 005ecb78  b848b19700           mov eax, 0x97b148
// 005ecb7d  c20400               ret 4
// 005ecb80  b82cb39700           mov eax, 0x97b32c
// 005ecb85  c20400               ret 4
// 005ecb88  b8d4b29700           mov eax, 0x97b2d4
// 005ecb8d  c20400               ret 4
// 005ecb90  78cb                 js 0x5ecb5d
// 005ecb92  5e                   pop esi
// 005ecb93  0088cb5e0068         add byte ptr [eax + 0x68005ecb], cl
// 005ecb99  cb                   retf 
// 005ecb9a  5e                   pop esi
// 005ecb9b  0080cb5e0060         add byte ptr [eax + 0x60005ecb], al
// 005ecba1  cb                   retf 
// 005ecba2  5e                   pop esi
// 005ecba3  0070cb               add byte ptr [eax - 0x35], dh
// 005ecba6  5e                   pop esi
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getSurfaceType@Surfaces@RBX@@QBEABVPropertyDescriptor@Reflection@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

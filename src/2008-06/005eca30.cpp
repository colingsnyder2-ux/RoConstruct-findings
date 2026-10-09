// roc 2008-06 005eca30  unit: RBX::Sky  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eca30
//
// 005eca30  8b442404             mov eax, dword ptr [esp + 4]
// 005eca34  83f805               cmp eax, 5
// 005eca37  772f                 ja 0x5eca68
// 005eca39  ff248570ca5e00       jmp dword ptr [eax*4 + 0x5eca70]
// 005eca40  b8f0b19700           mov eax, 0x97b1f0
// 005eca45  c20400               ret 4
// 005eca48  b828b19700           mov eax, 0x97b128
// 005eca4d  c20400               ret 4
// 005eca50  b8d0b19700           mov eax, 0x97b1d0
// 005eca55  c20400               ret 4
// 005eca58  b8f4b39700           mov eax, 0x97b3f4
// 005eca5d  c20400               ret 4
// 005eca60  b860b29700           mov eax, 0x97b260
// 005eca65  c20400               ret 4
// 005eca68  b848b39700           mov eax, 0x97b348
// 005eca6d  c20400               ret 4
// 005eca70  58                   pop eax
// 005eca71  ca5e00               retf 0x5e
// 005eca74  68ca5e0048           push 0x48005eca
// 005eca79  ca5e00               retf 0x5e
// 005eca7c  60                   pushal 
// 005eca7d  ca5e00               retf 0x5e
// 005eca80  40                   inc eax
// 005eca81  ca5e00               retf 0x5e
// 005eca84  50                   push eax
// 005eca85  ca5e00               retf 0x5e
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getSurfaceType@Surfaces@RBX@@QBEABVPropertyDescriptor@Reflection@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

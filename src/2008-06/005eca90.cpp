// roc 2008-06 005eca90  unit: RBX::Sky  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eca90
//
// 005eca90  8b442404             mov eax, dword ptr [esp + 4]
// 005eca94  83f805               cmp eax, 5
// 005eca97  772f                 ja 0x5ecac8
// 005eca99  ff2485d0ca5e00       jmp dword ptr [eax*4 + 0x5ecad0]
// 005ecaa0  b80cb39700           mov eax, 0x97b30c
// 005ecaa5  c20400               ret 4
// 005ecaa8  b880b29700           mov eax, 0x97b280
// 005ecaad  c20400               ret 4
// 005ecab0  b848b49700           mov eax, 0x97b448
// 005ecab5  c20400               ret 4
// 005ecab8  b884b39700           mov eax, 0x97b384
// 005ecabd  c20400               ret 4
// 005ecac0  b868b49700           mov eax, 0x97b468
// 005ecac5  c20400               ret 4
// 005ecac8  b864b19700           mov eax, 0x97b164
// 005ecacd  c20400               ret 4
// 005ecad0  b8ca5e00c8           mov eax, 0xc8005eca
// 005ecad5  ca5e00               retf 0x5e
// 005ecad8  a8ca                 test al, 0xca
// 005ecada  5e                   pop esi
// 005ecadb  00c0                 add al, al
// 005ecadd  ca5e00               retf 0x5e
// 005ecae0  a0ca5e00b0           mov al, byte ptr [0xb0005eca]
// 005ecae5  ca5e00               retf 0x5e
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getSurfaceType@Surfaces@RBX@@QBEABVPropertyDescriptor@Reflection@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

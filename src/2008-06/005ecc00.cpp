// roc 2008-06 005ecc00  unit: RBX::Sky  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ecc00
//
// 005ecc00  8bc1                 mov eax, ecx
// 005ecc02  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ecc06  83f905               cmp ecx, 5
// 005ecc09  7722                 ja 0x5ecc2d
// 005ecc0b  ff248d30cc5e00       jmp dword ptr [ecx*4 + 0x5ecc30]
// 005ecc12  83c008               add eax, 8
// 005ecc15  c20400               ret 4
// 005ecc18  83c028               add eax, 0x28
// 005ecc1b  c20400               ret 4
// 005ecc1e  83c020               add eax, 0x20
// 005ecc21  c20400               ret 4
// 005ecc24  83c018               add eax, 0x18
// 005ecc27  c20400               ret 4
// 005ecc2a  83c010               add eax, 0x10
// 005ecc2d  c20400               ret 4
// 005ecc30  24cc                 and al, 0xcc
// 005ecc32  5e                   pop esi
// 005ecc33  002dcc5e0018         add byte ptr [0x18005ecc], ch
// 005ecc39  cc                   int3 
// 005ecc3a  5e                   pop esi
// 005ecc3b  002a                 add byte ptr [edx], ch
// 005ecc3d  cc                   int3 
// 005ecc3e  5e                   pop esi
// 005ecc3f  0012                 add byte ptr [edx], dl
// 005ecc41  cc                   int3 
// 005ecc42  5e                   pop esi
// 005ecc43  001e                 add byte ptr [esi], bl
// 005ecc45  cc                   int3 
// 005ecc46  5e                   pop esi
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??ASurfaces@RBX@@QBEABVSurface@1@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

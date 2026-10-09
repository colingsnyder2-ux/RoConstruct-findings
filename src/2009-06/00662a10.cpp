// roc 2009-06 00662a10  unit: DxUserInput  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00662a10
//
// 00662a10  8b442404             mov eax, dword ptr [esp + 4]
// 00662a14  83f805               cmp eax, 5
// 00662a17  772f                 ja 0x662a48
// 00662a19  ff2485502a6600       jmp dword ptr [eax*4 + 0x662a50]
// 00662a20  b834d3a400           mov eax, 0xa4d334
// 00662a25  c20400               ret 4
// 00662a28  b8dcd2a400           mov eax, 0xa4d2dc
// 00662a2d  c20400               ret 4
// 00662a30  b804d2a400           mov eax, 0xa4d204
// 00662a35  c20400               ret 4
// 00662a38  b85cd0a400           mov eax, 0xa4d05c
// 00662a3d  c20400               ret 4
// 00662a40  b840d2a400           mov eax, 0xa4d240
// 00662a45  c20400               ret 4
// 00662a48  b8e8d1a400           mov eax, 0xa4d1e8
// 00662a4d  c20400               ret 4
// 00662a50  382a                 cmp byte ptr [edx], ch
// 00662a52  6600482a             add byte ptr [eax + 0x2a], cl
// 00662a56  660028               add byte ptr [eax], ch
// 00662a59  2a6600               sub ah, byte ptr [esi]
// 00662a5c  40                   inc eax
// 00662a5d  2a6600               sub ah, byte ptr [esi]
// 00662a60  202a                 and byte ptr [edx], ch
// 00662a62  660030               add byte ptr [eax], dh
// 00662a65  2a6600               sub ah, byte ptr [esi]
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getSurfaceType@Surfaces@RBX@@QBEABVPropertyDescriptor@Reflection@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

// roc 2009-06 006628f0  unit: DxUserInput  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006628f0
//
// 006628f0  8b442404             mov eax, dword ptr [esp + 4]
// 006628f4  83f805               cmp eax, 5
// 006628f7  772f                 ja 0x662928
// 006628f9  ff248530296600       jmp dword ptr [eax*4 + 0x662930]
// 00662900  b804d1a400           mov eax, 0xa4d104
// 00662905  c20400               ret 4
// 00662908  b83cd0a400           mov eax, 0xa4d03c
// 0066290d  c20400               ret 4
// 00662910  b8e4d0a400           mov eax, 0xa4d0e4
// 00662915  c20400               ret 4
// 00662918  b814d3a400           mov eax, 0xa4d314
// 0066291d  c20400               ret 4
// 00662920  b874d1a400           mov eax, 0xa4d174
// 00662925  c20400               ret 4
// 00662928  b85cd2a400           mov eax, 0xa4d25c
// 0066292d  c20400               ret 4
// 00662930  1829                 sbb byte ptr [ecx], ch
// 00662932  660028               add byte ptr [eax], ch
// 00662935  296600               sub dword ptr [esi], esp
// 00662938  0829                 or byte ptr [ecx], ch
// 0066293a  660020               add byte ptr [eax], ah
// 0066293d  296600               sub dword ptr [esi], esp
// 00662940  0029                 add byte ptr [ecx], ch
// 00662942  660010               add byte ptr [eax], dl
// 00662945  296600               sub dword ptr [esi], esp
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getSurfaceType@Surfaces@RBX@@QBEABVPropertyDescriptor@Reflection@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

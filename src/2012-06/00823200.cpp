// roc 2012-06 00823200  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00823200
//
// 00823200  8b442404             mov eax, dword ptr [esp + 4]
// 00823204  3d500ee500           cmp eax, 0xe50e50
// 00823209  7503                 jne 0x82320e
// 0082320b  b001                 mov al, 1
// 0082320d  c3                   ret 
// 0082320e  3d340ce500           cmp eax, 0xe50c34
// 00823213  74f6                 je 0x82320b
// 00823215  3de80ce500           cmp eax, 0xe50ce8
// 0082321a  74ef                 je 0x82320b
// 0082321c  3d600fe500           cmp eax, 0xe50f60
// 00823221  74e8                 je 0x82320b
// 00823223  3d040ce500           cmp eax, 0xe50c04
// 00823228  74e1                 je 0x82320b
// 0082322a  3dfc0ae500           cmp eax, 0xe50afc
// 0082322f  0f94c0               sete al
// 00823232  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isSurfaceDescriptor@Surfaces@RBX@@SA?B_NABVPropertyDescriptor@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp

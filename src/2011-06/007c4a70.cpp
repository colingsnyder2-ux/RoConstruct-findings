// roc 2011-06 007c4a70  unit: RBX::BallBallContact  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c4a70
//
// 007c4a70  837c240400           cmp dword ptr [esp + 4], 0
// 007c4a75  750a                 jne 0x7c4a81
// 007c4a77  8b442408             mov eax, dword ptr [esp + 8]
// 007c4a7b  89410c               mov dword ptr [ecx + 0xc], eax
// 007c4a7e  c20800               ret 8
// 007c4a81  8b542408             mov edx, dword ptr [esp + 8]
// 007c4a85  895110               mov dword ptr [ecx + 0x10], edx
// 007c4a88  c20800               ret 8
// library openrbx-client/App\v8world\Edge.cpp (function ?setPrimitive@Edge@RBX@@UAEXHPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Edge.cpp

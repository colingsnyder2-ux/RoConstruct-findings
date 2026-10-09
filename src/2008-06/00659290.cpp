// roc 2008-06 00659290  unit: RBX::BallBallContact  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00659290
//
// 00659290  837c240400           cmp dword ptr [esp + 4], 0
// 00659295  750a                 jne 0x6592a1
// 00659297  8b442408             mov eax, dword ptr [esp + 8]
// 0065929b  89410c               mov dword ptr [ecx + 0xc], eax
// 0065929e  c20800               ret 8
// 006592a1  8b542408             mov edx, dword ptr [esp + 8]
// 006592a5  895110               mov dword ptr [ecx + 0x10], edx
// 006592a8  c20800               ret 8
// library openrbx-client/App\v8world\Edge.cpp (function ?setPrimitive@Edge@RBX@@UAEXHPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Edge.cpp

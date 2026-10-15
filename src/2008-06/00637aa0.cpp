// roc 2008-06 00637aa0  unit: RBX::VBrickColor::V?$Value::?$DescribedCreatable  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637aa0
//
// 00637aa0  d9442408             fld dword ptr [esp + 8]
// 00637aa4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00637aa8  83ec0c               sub esp, 0xc
// 00637aab  8bc4                 mov eax, esp
// 00637aad  d918                 fstp dword ptr [eax]
// 00637aaf  d9442418             fld dword ptr [esp + 0x18]
// 00637ab3  d95804               fstp dword ptr [eax + 4]
// 00637ab6  d944241c             fld dword ptr [esp + 0x1c]
// 00637aba  d95808               fstp dword ptr [eax + 8]
// 00637abd  e8aeebffff           call 0x636670
// 00637ac2  c3                   ret 
// library rbxgs/roc_unit_5d855646c3dedd26.cpp (function ?relayThreeFloats@@YAXPAUThreeFloatReceiver@@VColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_5d855646c3dedd26.cpp

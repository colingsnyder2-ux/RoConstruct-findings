// roc 2008-06 00637a30  unit: RBX::VBrickColor::V?$Value::?$DescribedCreatable  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637a30
//
// 00637a30  d9442408             fld dword ptr [esp + 8]
// 00637a34  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00637a38  83ec0c               sub esp, 0xc
// 00637a3b  8bc4                 mov eax, esp
// 00637a3d  d918                 fstp dword ptr [eax]
// 00637a3f  d9442418             fld dword ptr [esp + 0x18]
// 00637a43  d95804               fstp dword ptr [eax + 4]
// 00637a46  d944241c             fld dword ptr [esp + 0x1c]
// 00637a4a  d95808               fstp dword ptr [eax + 8]
// 00637a4d  e89eeaffff           call 0x6364f0
// 00637a52  c3                   ret 
// library rbxgs/roc_unit_5d855646c3dedd26.cpp (function ?relayThreeFloats@@YAXPAUThreeFloatReceiver@@VColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_5d855646c3dedd26.cpp

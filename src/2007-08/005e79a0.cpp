// roc 2007-08 005e79a0  unit: RBX::VFlag::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e79a0
//
// 005e79a0  8b4104               mov eax, dword ptr [ecx + 4]
// 005e79a3  56                   push esi
// 005e79a4  8b7020               mov esi, dword ptr [eax + 0x20]
// 005e79a7  85f6                 test esi, esi
// 005e79a9  743d                 je 0x5e79e8
// 005e79ab  807e0400             cmp byte ptr [esi + 4], 0
// 005e79af  7407                 je 0x5e79b8
// 005e79b1  8bce                 mov ecx, esi
// 005e79b3  e8582b0300           call 0x61a510
// 005e79b8  8b442408             mov eax, dword ptr [esp + 8]
// 005e79bc  d9868c000000         fld dword ptr [esi + 0x8c]
// 005e79c2  d800                 fadd dword ptr [eax]
// 005e79c4  d99e8c000000         fstp dword ptr [esi + 0x8c]
// 005e79ca  d94004               fld dword ptr [eax + 4]
// 005e79cd  d88690000000         fadd dword ptr [esi + 0x90]
// 005e79d3  d99e90000000         fstp dword ptr [esi + 0x90]
// 005e79d9  d94008               fld dword ptr [eax + 8]
// 005e79dc  d88694000000         fadd dword ptr [esi + 0x94]
// 005e79e2  d99e94000000         fstp dword ptr [esi + 0x94]
// 005e79e8  5e                   pop esi
// 005e79e9  c20400               ret 4
// library rbxgs/v8kernel\Body.cpp (function ?accumulateTorque@Body@RBX@@QAEXABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp

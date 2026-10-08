// roc 2007-08 005eb2e0  unit: RBX::FlagStand  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eb2e0
//
// 005eb2e0  8b4104               mov eax, dword ptr [ecx + 4]
// 005eb2e3  56                   push esi
// 005eb2e4  8b7020               mov esi, dword ptr [eax + 0x20]
// 005eb2e7  85f6                 test esi, esi
// 005eb2e9  743d                 je 0x5eb328
// 005eb2eb  807e0400             cmp byte ptr [esi + 4], 0
// 005eb2ef  7407                 je 0x5eb2f8
// 005eb2f1  8bce                 mov ecx, esi
// 005eb2f3  e818f20200           call 0x61a510
// 005eb2f8  8b442408             mov eax, dword ptr [esp + 8]
// 005eb2fc  d98680000000         fld dword ptr [esi + 0x80]
// 005eb302  d800                 fadd dword ptr [eax]
// 005eb304  d99e80000000         fstp dword ptr [esi + 0x80]
// 005eb30a  d94004               fld dword ptr [eax + 4]
// 005eb30d  d88684000000         fadd dword ptr [esi + 0x84]
// 005eb313  d99e84000000         fstp dword ptr [esi + 0x84]
// 005eb319  d94008               fld dword ptr [eax + 8]
// 005eb31c  d88688000000         fadd dword ptr [esi + 0x88]
// 005eb322  d99e88000000         fstp dword ptr [esi + 0x88]
// 005eb328  5e                   pop esi
// 005eb329  c20400               ret 4
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ?accumulateForceAtBranchCofm@Body@RBX@@QAEXABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Gyro.cpp

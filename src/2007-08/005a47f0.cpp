// roc 2007-08 005a47f0  unit: RBX::IControllable  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a47f0
//
// 005a47f0  b801000000           mov eax, 1
// 005a47f5  840554578c00         test byte ptr [0x8c5754], al
// 005a47fb  752a                 jne 0x5a4827
// 005a47fd  d90554527b00         fld dword ptr [0x7b5254]
// 005a4803  090554578c00         or dword ptr [0x8c5754], eax
// 005a4809  d91d48578c00         fstp dword ptr [0x8c5748]
// 005a480f  d90550527b00         fld dword ptr [0x7b5250]
// 005a4815  d91d4c578c00         fstp dword ptr [0x8c574c]
// 005a481b  d9054c527b00         fld dword ptr [0x7b524c]
// 005a4821  d91d50578c00         fstp dword ptr [0x8c5750]
// 005a4827  b848578c00           mov eax, 0x8c5748
// 005a482c  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ?lightGreen@Color@RBX@@SAABVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp

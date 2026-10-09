// roc 2008-06 006456a0  unit: RBX::Joint  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006456a0
//
// 006456a0  56                   push esi
// 006456a1  6a00                 push 0
// 006456a3  6a00                 push 0
// 006456a5  8bf1                 mov esi, ecx
// 006456a7  e8b43b0100           call 0x659260
// 006456ac  8d4e28               lea ecx, [esi + 0x28]
// 006456af  c70644ad8400         mov dword ptr [esi], 0x84ad44
// 006456b5  c7462000000000       mov dword ptr [esi + 0x20], 0
// 006456bc  c6462400             mov byte ptr [esi + 0x24], 0
// 006456c0  e80b2ce3ff           call 0x4782d0
// 006456c5  8d4e58               lea ecx, [esi + 0x58]
// 006456c8  e8032ce3ff           call 0x4782d0
// 006456cd  8bc6                 mov eax, esi
// 006456cf  5e                   pop esi
// 006456d0  c3                   ret 
// library openrbx-client/App\v8world\Joint.cpp (function ??0Joint@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Joint.cpp

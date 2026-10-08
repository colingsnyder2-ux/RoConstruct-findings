// roc 2008-06 00608960  unit: RBX::BlockBlockContact  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608960
//
// 00608960  56                   push esi
// 00608961  8bf1                 mov esi, ecx
// 00608963  56                   push esi
// 00608964  e817aaf9ff           call 0x5a3380
// 00608969  83c404               add esp, 4
// 0060896c  85c0                 test eax, eax
// 0060896e  7421                 je 0x608991
// 00608970  d9442408             fld dword ptr [esp + 8]
// 00608974  83ec0c               sub esp, 0xc
// 00608977  8bd4                 mov edx, esp
// 00608979  d91a                 fstp dword ptr [edx]
// 0060897b  56                   push esi
// 0060897c  d944241c             fld dword ptr [esp + 0x1c]
// 00608980  8bc8                 mov ecx, eax
// 00608982  d95a04               fstp dword ptr [edx + 4]
// 00608985  d9442420             fld dword ptr [esp + 0x20]
// 00608989  d95a08               fstp dword ptr [edx + 8]
// 0060898c  e84f80f8ff           call 0x5909e0
// 00608991  5e                   pop esi
// 00608992  c20c00               ret 0xc
// library rbxgs/v8datamodel\PVInstance.cpp (function ?moveToPoint@PVInstance@RBX@@QAEXVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp

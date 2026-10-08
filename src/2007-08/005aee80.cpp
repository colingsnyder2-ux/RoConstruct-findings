// roc 2007-08 005aee80  unit: RBX::VLighting::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aee80
//
// 005aee80  8bc1                 mov eax, ecx
// 005aee82  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 005aee85  034c2404             add ecx, dword ptr [esp + 4]
// 005aee89  8b4028               mov eax, dword ptr [eax + 0x28]
// 005aee8c  56                   push esi
// 005aee8d  ffd0                 call eax
// 005aee8f  d95c2408             fstp dword ptr [esp + 8]
// 005aee93  e818eafbff           call 0x56d8b0
// 005aee98  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005aee9c  6a08                 push 8
// 005aee9e  8906                 mov dword ptr [esi], eax
// 005aeea0  e851100800           call 0x62fef6
// 005aeea5  83c404               add esp, 4
// 005aeea8  85c0                 test eax, eax
// 005aeeaa  740f                 je 0x5aeebb
// 005aeeac  d9442408             fld dword ptr [esp + 8]
// 005aeeb0  c700eca57800         mov dword ptr [eax], 0x78a5ec
// 005aeeb6  d95804               fstp dword ptr [eax + 4]
// 005aeeb9  eb02                 jmp 0x5aeebd
// 005aeebb  33c0                 xor eax, eax
// 005aeebd  8b4e04               mov ecx, dword ptr [esi + 4]
// 005aeec0  85c9                 test ecx, ecx
// 005aeec2  894604               mov dword ptr [esi + 4], eax
// 005aeec5  5e                   pop esi
// 005aeec6  7408                 je 0x5aeed0
// 005aeec8  8b11                 mov edx, dword ptr [ecx]
// 005aeeca  8b02                 mov eax, dword ptr [edx]
// 005aeecc  6a01                 push 1
// 005aeece  ffd0                 call eax
// 005aeed0  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ??$call@M@?$BoundFuncDesc@VLighting@RBX@@$$A6AMXZ$0A@@Reflection@RBX@@ABEXPAVLighting@2@AAVValue@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp

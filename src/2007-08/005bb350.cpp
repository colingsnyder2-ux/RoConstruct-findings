// roc 2007-08 005bb350  unit: RBX::VModelInstance::?$FactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bb350
//
// 005bb350  51                   push ecx
// 005bb351  6a18                 push 0x18
// 005bb353  c744240400000000     mov dword ptr [esp + 4], 0
// 005bb35b  e8964b0700           call 0x62fef6
// 005bb360  83c404               add esp, 4
// 005bb363  85c0                 test eax, eax
// 005bb365  741d                 je 0x5bb384
// 005bb367  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005bb36b  8b542414             mov edx, dword ptr [esp + 0x14]
// 005bb36f  894808               mov dword ptr [eax + 8], ecx
// 005bb372  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005bb376  89500c               mov dword ptr [eax + 0xc], edx
// 005bb379  c700908d7b00         mov dword ptr [eax], 0x7b8d90
// 005bb37f  894810               mov dword ptr [eax + 0x10], ecx
// 005bb382  eb02                 jmp 0x5bb386
// 005bb384  33c0                 xor eax, eax
// 005bb386  56                   push esi
// 005bb387  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bb38b  6a00                 push 0
// 005bb38d  c744240800000000     mov dword ptr [esp + 8], 0
// 005bb395  8906                 mov dword ptr [esi], eax
// 005bb397  e8c6480700           call 0x62fc62
// 005bb39c  83c404               add esp, 4
// 005bb39f  8bc6                 mov eax, esi
// 005bb3a1  5e                   pop esi
// 005bb3a2  59                   pop ecx
// 005bb3a3  c3                   ret 
// library rbxgs/v8datamodel\PVInstance.cpp (function ??$getset@P8PVInstance@RBX@@AEXABVCoordinateFrame@G3D@@@Z@?$PropDescriptor@VPVInstance@RBX@@VCoordinateFrame@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VCoordinateFrame@G3D@@@Reflection@RBX@@@std@@HP8PVInstance@2@AEXABVCoordinateFrame@G3D@@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp

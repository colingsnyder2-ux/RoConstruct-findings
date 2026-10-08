// roc 2007-03 005b61c0  unit: seg_005b0000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b61c0
//
// 005b61c0  51                   push ecx
// 005b61c1  6a18                 push 0x18
// 005b61c3  c744240400000000     mov dword ptr [esp + 4], 0
// 005b61cb  e8387f0600           call 0x61e108
// 005b61d0  83c404               add esp, 4
// 005b61d3  85c0                 test eax, eax
// 005b61d5  741d                 je 0x5b61f4
// 005b61d7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b61db  8b542414             mov edx, dword ptr [esp + 0x14]
// 005b61df  894808               mov dword ptr [eax + 8], ecx
// 005b61e2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005b61e6  89500c               mov dword ptr [eax + 0xc], edx
// 005b61e9  c700688d7b00         mov dword ptr [eax], 0x7b8d68
// 005b61ef  894810               mov dword ptr [eax + 0x10], ecx
// 005b61f2  eb02                 jmp 0x5b61f6
// 005b61f4  33c0                 xor eax, eax
// 005b61f6  56                   push esi
// 005b61f7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b61fb  6a00                 push 0
// 005b61fd  c744240800000000     mov dword ptr [esp + 8], 0
// 005b6205  8906                 mov dword ptr [esi], eax
// 005b6207  e8e47e0600           call 0x61e0f0
// 005b620c  83c404               add esp, 4
// 005b620f  8bc6                 mov eax, esi
// 005b6211  5e                   pop esi
// 005b6212  59                   pop ecx
// 005b6213  c3                   ret 
// library rbxgs/v8datamodel\PVInstance.cpp (function ??$getset@P8PVInstance@RBX@@AEXABVCoordinateFrame@G3D@@@Z@?$PropDescriptor@VPVInstance@RBX@@VCoordinateFrame@G3D@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VCoordinateFrame@G3D@@@Reflection@RBX@@@std@@HP8PVInstance@2@AEXABVCoordinateFrame@G3D@@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp

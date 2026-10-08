// roc 2009-06 006809a0  unit: RBX::VDataModelMesh::?$NonFactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006809a0
//
// 006809a0  6aff                 push -1
// 006809a2  6800928500           push 0x859200
// 006809a7  64a100000000         mov eax, dword ptr fs:[0]
// 006809ad  50                   push eax
// 006809ae  64892500000000       mov dword ptr fs:[0], esp
// 006809b5  51                   push ecx
// 006809b6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006809ba  8b542424             mov edx, dword ptr [esp + 0x24]
// 006809be  56                   push esi
// 006809bf  50                   push eax
// 006809c0  8b442428             mov eax, dword ptr [esp + 0x28]
// 006809c4  8bf1                 mov esi, ecx
// 006809c6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006809ca  51                   push ecx
// 006809cb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006809cf  52                   push edx
// 006809d0  50                   push eax
// 006809d1  51                   push ecx
// 006809d2  8d542444             lea edx, [esp + 0x44]
// 006809d6  52                   push edx
// 006809d7  e8c4feffff           call 0x6808a0
// 006809dc  8b08                 mov ecx, dword ptr [eax]
// 006809de  83c410               add esp, 0x10
// 006809e1  c70000000000         mov dword ptr [eax], 0
// 006809e7  8bc4                 mov eax, esp
// 006809e9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006809f1  8964240c             mov dword ptr [esp + 0xc], esp
// 006809f5  8908                 mov dword ptr [eax], ecx
// 006809f7  8b442424             mov eax, dword ptr [esp + 0x24]
// 006809fb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006809ff  50                   push eax
// 00680a00  51                   push ecx
// 00680a01  c644242001           mov byte ptr [esp + 0x20], 1
// 00680a06  e825cce9ff           call 0x51d630
// 00680a0b  50                   push eax
// 00680a0c  8bce                 mov ecx, esi
// 00680a0e  c644242400           mov byte ptr [esp + 0x24], 0
// 00680a13  e8e8f6dbff           call 0x440100
// 00680a18  8b542430             mov edx, dword ptr [esp + 0x30]
// 00680a1c  52                   push edx
// 00680a1d  e810800900           call 0x718a32
// 00680a22  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00680a26  83c404               add esp, 4
// 00680a29  c70654598e00         mov dword ptr [esi], 0x8e5954
// 00680a2f  8bc6                 mov eax, esi
// 00680a31  64890d00000000       mov dword ptr fs:[0], ecx
// 00680a38  5e                   pop esi
// 00680a39  83c410               add esp, 0x10
// 00680a3c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
